#include <iostream>
#include <cassert>
#include "bagel.h"
#include "SDL3/SDL.h"
#include "SDL3_mixer/SDL_mixer.h"
using namespace std;
using namespace bagel;

void test1() {
	ent_type e0 = World::createEntity();
	assert(e0.id == 0 && "First id is not 0");

	ent_type e1 = World::createEntity();
	assert(e1.id == 1 && "Second id is not 1");

	World::destroyEntity(e0);
	e0 = World::createEntity();
	assert(e0.id == 0 && "Id 0 not recycled after destroy & create");

	cout << "Test 1 passed\n";
}

void soundTest(const char* path) {
	// Define desired audio spec
	SDL_AudioSpec spec = {
		.format = SDL_AUDIO_S16,
		.channels = 2,
		.freq = 44100,
		//.samples = 2048,
	};

	// Open default audio device
	if (!Mix_OpenAudio(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec)) {
		SDL_Log("Mix_OpenAudio failed: %s", SDL_GetError());
		return;
	}

	// Load music from file
	Mix_Music* music = Mix_LoadMUS(path);
	if (!music) {
		SDL_Log("Mix_LoadMUS failed: %s", SDL_GetError());
		Mix_CloseAudio();
		return;
	}

	// Play music in a loop
	if (!Mix_PlayMusic(music, -1)) {
		SDL_Log("Mix_PlayMusic failed: %s", SDL_GetError());
		Mix_FreeMusic(music);
		Mix_CloseAudio();
		return;
	}

	SDL_Log("Now playing music...");

	// Simulate a short delay to hear the music
	SDL_Delay(10000);

	// Cleanup
	Mix_HaltMusic();
	Mix_FreeMusic(music);
	Mix_CloseAudio();
}

void run_tests()
{
	soundTest("res/academic tel aviv theme.mp3");
	soundTest("res/Character Select.mp3");
}
