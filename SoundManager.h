//
// Created by Alon on 15/06/2025.
//

#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <string>
#include <unordered_map>

class SoundManager {
public:
    static bool init();
    static void shutdown();

    static bool playMusic(const std::string& path, int loops = -1);
    static void stopMusic();

    static bool loadSoundEffect(const std::string& name, const std::string& path);
    static bool playSoundEffect(const std::string& name, int loops = 0);

private:
    static std::unordered_map<std::string, Mix_Chunk*> s_SoundEffects;
    static Mix_Music* s_CurrentMusic;
};

#endif //SOUNDMANAGER_H
