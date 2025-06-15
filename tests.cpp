#include <iostream>
#include <cassert>
#include "bagel.h"
#include "SDL3/SDL.h"
#include "SDL3_mixer/SDL_mixer.h"
#include "SoundManager.h"
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

void soundTest(const string& path) {
	if (!SoundManager::init()) {
		SDL_Log("Sound system failed to init");
		return;
	}

	SoundManager::playMusic(path);
	SoundManager::loadSoundEffect("punch", "res/sound/sound effects/hitsounds/mk1-00048.mp3");
	SoundManager::playSoundEffect("punch");

	while (true) {
		SDL_Delay(1000); // Listen
		SoundManager::playSoundEffect("punch");
	}

	SoundManager::shutdown();
}

void run_tests()
{
	//soundTest("res/sound/background music/academic tel aviv theme.mp3");
	soundTest("res/sound/background music/Character Select.mp3");
}
