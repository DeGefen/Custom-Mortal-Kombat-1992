//
// Created by Alon on 15/06/2025.
//

#include "SoundManager.h"

std::unordered_multimap<std::string, Mix_Chunk*> SoundManager::soundEffects;
std::map<int, int> SoundManager::s_ChannelOriginalVolumes;
Mix_Music* SoundManager::s_CurrentMusic = nullptr;

bool SoundManager::init() {
    SDL_AudioSpec spec = {
        .format = SDL_AUDIO_S16,
        .channels = 2,
        .freq = 44100,
    };

    if (!Mix_OpenAudio(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec)) {
        SDL_Log("Mix_OpenAudio failed: %s", SDL_GetError());
        return false;
    }

    Mix_AllocateChannels(8);
    Mix_ChannelFinished(onChannelFinished);
    return true;
}

void SoundManager::shutdown() {
    stopMusic();

    for (auto& [name, chunk] : soundEffects) {
        Mix_FreeChunk(chunk);
    }
    soundEffects.clear();

    Mix_CloseAudio();
}

void SoundManager::onChannelFinished(int channel) {
    // Restore the original volume if we had one
    auto it = s_ChannelOriginalVolumes.find(channel);
    if (it != s_ChannelOriginalVolumes.end()) {
        Mix_Volume(channel, it->second); // Reset volume
        s_ChannelOriginalVolumes.erase(it);
    }
}

bool SoundManager::playMusic(const std::string& path, int volume) {
    stopMusic();

    s_CurrentMusic = Mix_LoadMUS(path.c_str());
    if (!s_CurrentMusic) {
        SDL_Log("Failed to load music: %s", SDL_GetError());
        return false;
    }

    Mix_VolumeMusic(volume);

    if (!Mix_PlayMusic(s_CurrentMusic, -1)) {
        SDL_Log("Failed to play music: %s", SDL_GetError());
        Mix_FreeMusic(s_CurrentMusic);
        s_CurrentMusic = nullptr;
        return false;
    }

    return true;
}

void SoundManager::stopMusic() {
    if (s_CurrentMusic) {
        Mix_HaltMusic();
        Mix_FreeMusic(s_CurrentMusic);
        s_CurrentMusic = nullptr;
    }
}

bool SoundManager::loadSoundEffect(const std::string& name, const std::string& path) {
    // if (soundEffects.count(name)) {
    //     return true; // already loaded
    // }

    Mix_Chunk* chunk = Mix_LoadWAV(path.c_str());
    if (!chunk) {
        SDL_Log("Failed to load sound effect '%s': %s", name.c_str(), SDL_GetError());
        return false;
    }

    soundEffects.insert({name, chunk});
    return true;
}

Mix_Chunk* SoundManager::getRandomSound(const std::string& key) {
    // Get the range of values for the key
    auto range = soundEffects.equal_range(key);
    int len = soundEffects.count(key);
    int randomIndex;

    if (len == 0)
        return nullptr;
    else if (len == 1)
        randomIndex = 0;
    else {
        // Generate a random index
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, len - 1);
        randomIndex = dis(gen);
    }

    auto it = range.first;
    //Find value that match random index
    for (int i = 0; i < randomIndex; ++i) {
        ++it;
    }

    return it->second;
}

bool SoundManager::playSoundEffect(const std::string& name, int volume) {
    Mix_Chunk* chunk = getRandomSound(name);
    if (!chunk) {
        SDL_Log("Sound effect '%s' not found", name.c_str());
        return false;
    }

    int channel = Mix_PlayChannel(-1, chunk, 0);
    if (channel == -1) {
        SDL_Log("Failed to play sound effect '%s': %s", name.c_str(), SDL_GetError());
        return false;
    }

    // Store the original volume
    int originalVolume = Mix_Volume(channel, -1);
    s_ChannelOriginalVolumes[channel] = originalVolume;

    // Set volume for this playback
    Mix_Volume(channel, volume);

    return true;
}

int SoundManager::findFreeChannel() {
    int total = Mix_AllocateChannels(-1);
    for (int i = 0; i < total; ++i) {
        if (!Mix_Playing(i)) return i;
    }
    return -1; // None available
}

bool SoundManager::playSoundEffectWithDelay(const std::string& name, int delayMs, int volume) {
    // Spawn a thread to play the sound after a delay
    std::thread([=]() {
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
        playSoundEffect(name, volume);
    }).detach(); // Detach so it runs independently
    return true;
}
