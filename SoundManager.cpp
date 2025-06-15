//
// Created by Alon on 15/06/2025.
//

#include "SoundManager.h"

std::unordered_map<std::string, Mix_Chunk*> SoundManager::s_SoundEffects;
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
    return true;
}

void SoundManager::shutdown() {
    stopMusic();

    for (auto& [name, chunk] : s_SoundEffects) {
        Mix_FreeChunk(chunk);
    }
    s_SoundEffects.clear();

    Mix_CloseAudio();
}

bool SoundManager::playMusic(const std::string& path, int loops) {
    stopMusic();

    s_CurrentMusic = Mix_LoadMUS(path.c_str());
    if (!s_CurrentMusic) {
        SDL_Log("Failed to load music: %s", SDL_GetError());
        return false;
    }

    if (!Mix_PlayMusic(s_CurrentMusic, loops)) {
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
    if (s_SoundEffects.count(name)) {
        return true; // already loaded
    }

    Mix_Chunk* chunk = Mix_LoadWAV(path.c_str());
    if (!chunk) {
        SDL_Log("Failed to load sound effect '%s': %s", name.c_str(), SDL_GetError());
        return false;
    }

    s_SoundEffects[name] = chunk;
    return true;
}

bool SoundManager::playSoundEffect(const std::string& name, int loops) {
    auto it = s_SoundEffects.find(name);
    if (it == s_SoundEffects.end()) {
        SDL_Log("Sound effect '%s' not found", name.c_str());
        return false;
    }

    // Channel -1 = any available
    if (Mix_PlayChannel(-1, it->second, loops) == -1) {
        SDL_Log("Failed to play sound effect '%s': %s", name.c_str(), SDL_GetError());
        return false;
    }

    return true;
}
