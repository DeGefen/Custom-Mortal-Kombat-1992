//
// Created by Alon on 15/06/2025.
//

#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <unordered_map>
#include <iostream>
#include <random>
#include <string>
#include <thread>
#include <chrono>
#include <map>

class SoundManager {
private:
    static std::unordered_multimap<std::string, Mix_Chunk*> soundEffects;
    static std::map<int, int> s_ChannelOriginalVolumes;
    static Mix_Music* s_CurrentMusic;

    static Mix_Chunk* getRandomSound(const std::string& key);
    static void onChannelFinished(int channel);
    static int findFreeChannel();

public:
    static bool init();
    static void shutdown();

    static bool playMusic(const std::string& path, int loops = -1);
    static void stopMusic();

    static bool loadSoundEffect(const std::string& name, const std::string& path);
    static bool playSoundEffect(const std::string& name, int volume = -1); //volume range: 0-128. minus means default volume
    static bool playSoundEffectWithDelay(const std::string& name, int delayMs);

};

#endif //SOUNDMANAGER_H
