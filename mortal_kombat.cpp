#include "mortal_kombat_info.h"
#include "mortal_kombat.h"
#include "SoundManager.h"
#include <iostream>
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <box2d/box2d.h>

namespace mortal_kombat
{
    std::unordered_map<std::string, SDL_Texture*> MK::TextureSystem::textureCache;

    void MK::loadSoundEffects() {
        SoundManager::loadSoundEffect("start", "res/sound/sound effects/music cues/start sound.mp3");
        SoundManager::loadSoundEffect("player 1 press", "res/sound/sound effects/ui/player 1 press.mp3");
        SoundManager::loadSoundEffect("player 2 press", "res/sound/sound effects/ui/player 2 press.mp3");

        SoundManager::loadSoundEffect("attack male1", "res/sound/sound effects/male/male 1/attack/mk1-00192.mp3");
        SoundManager::loadSoundEffect("attack male1", "res/sound/sound effects/male/male 1/attack/mk1-00193.mp3");
        SoundManager::loadSoundEffect("attack male2", "res/sound/sound effects/male/male 2/attack/mk1-00208.mp3");
        SoundManager::loadSoundEffect("attack male2", "res/sound/sound effects/male/male 2/attack/mk1-00209.mp3");
        SoundManager::loadSoundEffect("attack female", "res/sound/sound effects/female/attack/short.mp3");
        SoundManager::loadSoundEffect("attack female", "res/sound/sound effects/female/attack/long.mp3");

        SoundManager::loadSoundEffect("jump male1", "res/sound/sound effects/male/male 1/jump/mk1-00199.mp3");
        SoundManager::loadSoundEffect("jump male1", "res/sound/sound effects/male/male 1/jump/mk1-00200.mp3");
        SoundManager::loadSoundEffect("jump male2", "res/sound/sound effects/male/male 2/jump/mk1-00213.mp3");
        SoundManager::loadSoundEffect("jump male2", "res/sound/sound effects/male/male 2/jump/mk1-00214.mp3");
        SoundManager::loadSoundEffect("jump male2", "res/sound/sound effects/male/male 2/jump/mk1-00215.mp3");
        SoundManager::loadSoundEffect("jump male2", "res/sound/sound effects/male/male 2/jump/mk1-00216.mp3");
        SoundManager::loadSoundEffect("jump female", "res/sound/sound effects/female/jump/jump1.mp3");
        SoundManager::loadSoundEffect("jump female", "res/sound/sound effects/female/jump/jump2.mp3");
        SoundManager::loadSoundEffect("jump female", "res/sound/sound effects/female/jump/jump3.mp3");
        SoundManager::loadSoundEffect("jump female", "res/sound/sound effects/female/jump/jump4.mp3");

        SoundManager::loadSoundEffect("quiet hit", "res/sound/sound effects/hitsounds/hit/lvl1.mp3");
        SoundManager::loadSoundEffect("hit", "res/sound/sound effects/hitsounds/hit/mk1-00053.mp3");
        SoundManager::loadSoundEffect("hit", "res/sound/sound effects/hitsounds/hit/mk1-00054.mp3");
        SoundManager::loadSoundEffect("hard hit", "res/sound/sound effects/hitsounds/hard hit/mk1-00131.mp3");
        SoundManager::loadSoundEffect("hard hit", "res/sound/sound effects/hitsounds/hard hit/mk1-00172.mp3");
        SoundManager::loadSoundEffect("hard hit", "res/sound/sound effects/hitsounds/hard hit/mk1-00173.mp3");
        SoundManager::loadSoundEffect("hard hit", "res/sound/sound effects/hitsounds/hard hit/mk1-00180.mp3");

        SoundManager::loadSoundEffect("hit male1", "res/sound/sound effects/male/male 1/getting hit/mk1-00194.mp3");
        SoundManager::loadSoundEffect("hit male1", "res/sound/sound effects/male/male 1/getting hit/mk1-00195.mp3");
        SoundManager::loadSoundEffect("hit male1", "res/sound/sound effects/male/male 1/getting hit/mk1-00196.mp3");
        SoundManager::loadSoundEffect("hit male1", "res/sound/sound effects/male/male 1/getting hit/mk1-00197.mp3");
        SoundManager::loadSoundEffect("hit male2", "res/sound/sound effects/male/male 2/getting hit/mk1-00210.mp3");
        SoundManager::loadSoundEffect("hit male2", "res/sound/sound effects/male/male 2/getting hit/mk1-00211.mp3");
        SoundManager::loadSoundEffect("hit male2", "res/sound/sound effects/male/male 2/getting hit/mk1-00212.mp3");
        SoundManager::loadSoundEffect("hit female", "res/sound/sound effects/female/getting hit/mk1-00434.mp3");
        SoundManager::loadSoundEffect("hit female", "res/sound/sound effects/female/getting hit/mk1-00435.mp3");
        SoundManager::loadSoundEffect("hit female", "res/sound/sound effects/female/getting hit/mk1-00436.mp3");

        SoundManager::loadSoundEffect("uppercut hit male1", "res/sound/sound effects/male/male 1/really getting hit/uppercut hit1.mp3");
        SoundManager::loadSoundEffect("uppercut hit male1", "res/sound/sound effects/male/male 1/really getting hit/uppercut hit2.mp3");
        SoundManager::loadSoundEffect("uppercut hit male2", "res/sound/sound effects/male/male 2/really getting hit/uppercut hit1.mp3");
        SoundManager::loadSoundEffect("uppercut hit female", "res/sound/sound effects/female/really getting hit/uppercut hit1.mp3");
        SoundManager::loadSoundEffect("uppercut hit female", "res/sound/sound effects/female/really getting hit/uppercut hit2.mp3");

        SoundManager::loadSoundEffect("game over", "res/sound/sound effects/music cues/game over/mk1-00017.mp3");
        SoundManager::loadSoundEffect("game over", "res/sound/sound effects/music cues/game over/mk1-00024.mp3");
        SoundManager::loadSoundEffect("game over", "res/sound/sound effects/music cues/game over/mk1-00238.mp3");
        SoundManager::loadSoundEffect("game over", "res/sound/sound effects/music cues/game over/mk1-00239.mp3");

        SoundManager::loadSoundEffect("hard wind", "res/sound/sound effects/hitsounds/wind/hard wind.mp3");
        SoundManager::loadSoundEffect("wind", "res/sound/sound effects/hitsounds/wind/mk1-00059.mp3");
        SoundManager::loadSoundEffect("wind", "res/sound/sound effects/hitsounds/wind/mk1-00060.mp3");
        SoundManager::loadSoundEffect("wind", "res/sound/sound effects/hitsounds/wind/mk1-00061.mp3");

        SoundManager::loadSoundEffect("landing", "res/sound/sound effects/hitsounds/landing.mp3");
        SoundManager::loadSoundEffect("falling down from kick", "res/sound/sound effects/hitsounds/falling down from kick.mp3");
    }

    void MK::start()
    {
        if (!SDL_Init(SDL_INIT_VIDEO)) {
            std::cout << SDL_GetError() << std::endl;
            return;
        }

        if (!SoundManager::init()) {
            SDL_Log("Sound system failed to init");
            return;
        }

        loadSoundEffects();

        if (!SDL_CreateWindowAndRenderer(
                "MK1992", WINDOW_WIDTH, WINDOW_HEIGHT, 0, &win, &ren)) {
            std::cout << SDL_GetError() << std::endl;
            return;
                }

        SDL_SetRenderDrawColor(ren, 255,255,255,0);

        b2WorldDef worldDef = b2DefaultWorldDef();
        worldDef.gravity = {0,0};
        boxWorld = b2CreateWorld(&worldDef);

        createBackground("res/Background.png");

        SoundManager::playSoundEffect("start");

        createBoundary(LEFT);
        createBoundary(RIGHT);
        initialScreen();  // Show intro splash before the game loop

        SoundManager::playMusic("res/sound/background music/Character Select.mp3");
        auto [p1Index, p2Index] = chooseFighterScreen();
        SoundManager::stopMusic();
        SoundManager::playMusic("res/sound/background music/The Courtyard.mp3", 55);

        Character character1 = Characters::ALL_CHARACTERS[p1Index];
        Character character2 = Characters::ALL_CHARACTERS[p2Index];

        bagel::Entity player1 = createPlayer(PLAYER_1_BASE_X, PLAYER_BASE_Y, character1, 1);
        bagel::Entity player2 = createPlayer(PLAYER_2_BASE_X, PLAYER_BASE_Y, character2, 2);

        createBar(player1, player2);
    }

    void MK::destroy() const
    {
        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.has<Collider>())
            {
                if (b2Body_IsValid(entity.get<Collider>().body)) {
                    const auto* e_p = static_cast<bagel::ent_type*>(b2Body_GetUserData(entity.get<Collider>().body));
                    b2DestroyBody(entity.get<Collider>().body);
                    delete e_p;
                }
                entity.get<Collider>().body = b2_nullBodyId;
                bagel::World::destroyEntity(e);
            }
        }
        TextureSystem::clearCache();
        if (b2World_IsValid(boxWorld))
            b2DestroyWorld(boxWorld);
        if (ren != nullptr)
            SDL_DestroyRenderer(ren);
        if (win != nullptr)
            SDL_DestroyWindow(win);

        SoundManager::shutdown();
        SDL_Quit();
    }

    void MK::initialScreen() const {
        SDL_Texture* menuTexture = TextureSystem::getTexture(ren, "res/mortal-akademit.png", TextureSystem::IgnoreColorKey::NAME_BAR);
        if (!menuTexture) {
            SDL_Log("Failed to load initial screen texture");
            return;
        }

        // Define the area of the menu texture to show — adjust these values to match your design.
        SDL_FRect srcRect = {0, 0, 1020, 1024}; // Example values — update as needed
        SDL_FRect destRect = {
            0.0f,
            0.0f,
            static_cast<float>(WINDOW_WIDTH),
            static_cast<float>(WINDOW_HEIGHT)
        };

        SDL_Event event;
        bool waitForKey = true;

        while (waitForKey) {
            SDL_PumpEvents();
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_EVENT_QUIT) {
                    exit(0);
                } else if (event.type == SDL_EVENT_KEY_DOWN) {
                    waitForKey = false;
                }
            }

            SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
            SDL_RenderClear(ren);
            SDL_RenderTexture(ren, menuTexture, &srcRect, &destRect);
            SDL_RenderPresent(ren);

            SDL_Delay(16); // ~60 FPS
        }
    }

    std::pair<int, int> MK::chooseFighterScreen() const {
    SDL_Texture* menuTexture = TextureSystem::getTexture(
        ren, "res/Menus&Texts.png", TextureSystem::IgnoreColorKey::NAME_BAR);
    if (!menuTexture) {
        SDL_Log("Failed to load fighter selection screen");
        return {-1, -1};
    }

    // Load character images
    SDL_Texture* characterTextures[numOfFighters] = {
        TextureSystem::getTexture(ren, "res/menu_moshe.png", TextureSystem::IgnoreColorKey::NONE),
        TextureSystem::getTexture(ren, "res/menu_itamar.png", TextureSystem::IgnoreColorKey::NONE),
        TextureSystem::getTexture(ren, "res/menu_yaniv.png", TextureSystem::IgnoreColorKey::NONE),
        TextureSystem::getTexture(ren, "res/menu_gefen.png", TextureSystem::IgnoreColorKey::NONE),
        TextureSystem::getTexture(ren, "res/menu_ofek.png", TextureSystem::IgnoreColorKey::NONE),
        TextureSystem::getTexture(ren, "res/menu_yonatan.png", TextureSystem::IgnoreColorKey::NONE)
    };

    SDL_FRect srcRect = {900, 381, 64*numOfFighters + 10, 183};
    SDL_FRect destRect = {
        0.0f,
        0.0f,
        static_cast<float>(WINDOW_WIDTH),
        static_cast<float>(WINDOW_HEIGHT)
    };

    const float boxX = 903.0f - 900.0f;
    const float boxY = 409.0f - 381.0f;
    const float boxW = 65.0f;
    const float boxH = 80.0f;

    const float scaleX = destRect.w / srcRect.w;
    const float scaleY = destRect.h / srcRect.h;

    const float scaledBoxW = boxW * scaleX;
    const float scaledBoxH = boxH * scaleY;
    const float startX = boxX * scaleX;
    const float startY = boxY * scaleY;

    constexpr int GRID_COLS = numOfFighters;

    int selectedP1 = 0;  // Top row (0 - numOfFighters-1)
    int selectedP2 = numOfFighters;  // Bottom row (numOfFighters - 2numOfFighters-1)

    SDL_Event event;
    bool choosing = true;

    while (choosing) {
        SDL_PumpEvents();
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) exit(0);
            else if (event.type == SDL_EVENT_KEY_DOWN) {
                switch (event.key.key) {
                    case SDLK_LEFT:
                        if (selectedP2 % GRID_COLS > 0) selectedP2--;
                        SoundManager::playSoundEffect("player 2 press");
                        break;
                    case SDLK_RIGHT:
                        if (selectedP2 % GRID_COLS < GRID_COLS - 2) selectedP2++;
                        SoundManager::playSoundEffect("player 2 press");
                        break;
                    case SDLK_A:
                        if (selectedP1 % GRID_COLS > 0) selectedP1--;
                        SoundManager::playSoundEffect("player 1 press");
                        break;
                    case SDLK_D:
                        if (selectedP1 % GRID_COLS < GRID_COLS - 2) selectedP1++;
                        SoundManager::playSoundEffect("player 1 press");
                        break;
                    case SDLK_RETURN:
                    case SDLK_KP_ENTER:
                        choosing = false;
                        break;
                    case SDLK_ESCAPE:
                        exit(0);
                }
            }
        }

        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, menuTexture, &srcRect, &destRect);

        // Draw character textures in grid
        for (int i = 0; i < numOfFighters; ++i) {
            int col = i % GRID_COLS;

            // Top row (Player 1)
            SDL_FRect dstTop = {
                startX + col * scaledBoxW,
                startY + 0 * scaledBoxH,  // row 0
                scaledBoxW,
                scaledBoxH
            };
            SDL_RenderTexture(ren, characterTextures[i], nullptr, &dstTop);

            // Bottom row (Player 2)
            SDL_FRect dstBottom = {
                startX + col * scaledBoxW,
                startY + 1 * scaledBoxH,  // row 1
                scaledBoxW,
                scaledBoxH
            };
            SDL_RenderTexture(ren, characterTextures[i], nullptr, &dstBottom);
        }

        // Draw Player 1 highlight (red)
        {
            int row = selectedP1 / GRID_COLS;
            int col = selectedP1 % GRID_COLS;

            SDL_FRect highlightRect = {
                startX + col * scaledBoxW,
                startY + row * scaledBoxH,
                scaledBoxW,
                scaledBoxH
            };

            SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
            for (int i = 0; i < 4; ++i) {
                SDL_FRect r = {
                    highlightRect.x + i,
                    highlightRect.y + i,
                    highlightRect.w - 2 * i,
                    highlightRect.h - 2 * i
                };
                SDL_RenderRect(ren, &r);
            }
        }

        // Draw Player 2 highlight (yellow)
        {
            int row = selectedP2 / GRID_COLS;
            int col = selectedP2 % GRID_COLS;

            SDL_FRect highlightRect = {
                startX + col * scaledBoxW,
                startY + row * scaledBoxH,
                scaledBoxW,
                scaledBoxH
            };

            SDL_SetRenderDrawColor(ren, 255, 255, 0, 255);
            for (int i = 0; i < 4; ++i) {
                SDL_FRect r = {
                    highlightRect.x + i,
                    highlightRect.y + i,
                    highlightRect.w - 2 * i,
                    highlightRect.h - 2 * i
                };
                SDL_RenderRect(ren, &r);
            }
        }

        SDL_RenderPresent(ren);
        SDL_Delay(16);
    }

    // Return column index in each row
    return {selectedP1 % GRID_COLS, selectedP2 % GRID_COLS};
}

    void MK::closingScreen() const
    {
        SDL_Texture* menuTexture = IMG_LoadTexture(ren, "res/gameover.png");
        if (!menuTexture) {
            SDL_Log("Failed to load gameover.png: %s", SDL_GetError());
            return;
        }

        SDL_FRect srcRect = { 0, 0, 1024, 1024 };
        SDL_FRect destRect = {
            0.0f,
            0.0f,
            static_cast<float>(WINDOW_WIDTH),
            static_cast<float>(WINDOW_HEIGHT)
        };

        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, menuTexture, &srcRect, &destRect);
        SDL_RenderPresent(ren);

        SDL_DestroyTexture(menuTexture);
    }









    // ------------------------------- Game Loop -------------------------------

    void MK::runWithRestartOption()
    {
        bool continuePlaying = true;

        while (continuePlaying)
        {
            run();
            closingScreen();
            // Wait for user input after match ends
            SDL_Event event;
            bool waiting = true;
            while (waiting) {
                while (SDL_PollEvent(&event)) {
                    if (event.type == SDL_EVENT_QUIT) {
                        continuePlaying = false;
                        waiting = false;
                    } else if (event.type == SDL_EVENT_KEY_DOWN) {
                        if (event.key.key == SDLK_ESCAPE) {
                            continuePlaying = false;
                        } else {
                            destroy();
                            start();
                        }
                        waiting = false;
                    }
                }
                SDL_Delay(100);
            }
        }
    }

    void MK::run() const
    {
        int frame_count = 0;
        bool matchOver = false;
        while (!matchOver)
        {
            gameIteration(frame_count);
            // Detect match end
            if (isGameOver()) {
                // Leave the game to run for a few seconds in order to see the winning animation
                for (int i = 0; i < 200; i++) {
                    gameIteration(frame_count);
                }
                matchOver = true;
            }
        }
    }

    void MK::gameIteration(int& frame_count) const {

        Uint32 frameStart = SDL_GetTicks();

        if (frame_count % INPUT_FRAME_DELAY == 0) InputSystem();
        if (++frame_count % ACTION_FRAME_DELAY == 0) PlayerSystem();
        ClockSystem();
        CollisionSystem();
        SpecialAttackSystem();
        MovementSystem();
        RenderSystem();
        HealthBarSystem();
        AttackDecaySystem();
        SoundSystem();

        if (Uint32 frameTime = SDL_GetTicks() - frameStart; FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }

    bool MK::isGameOver() const {
        int deadOrWinning = 0;
        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id) {
            if (bagel::Entity entity{e}; entity.has<PlayerState>()) {
                auto& state = entity.get<PlayerState>();
                if (state.state == State::WIN || state.state == State::DIE)
                    ++deadOrWinning;
            }
        }

        return deadOrWinning >= 2;
    }
    // ------------------------------- Systems -------------------------------

    void MK::MovementSystem()
    {
        static constexpr float WALK_SPEED_BACKWARDS = 3.0f * CHARACTER_SCALE;
        static constexpr float WALK_SPEED_FORWARDS = 4.0f * CHARACTER_SCALE;
        static constexpr float KICKBACK_SPEED = 3.0f * CHARACTER_SCALE;
        static constexpr float FALL_SPEED = 4.0f * CHARACTER_SCALE;

        static constexpr float JUMP_INITIAL_VELOCITY = -14.0f * CHARACTER_SCALE;
        static constexpr float GRAVITY = 0.7f * CHARACTER_SCALE;
        static constexpr float JUMP_HORIZONTAL_SPEED = 4.0f * CHARACTER_SCALE;
        static constexpr float FLOOR_Y = PLAYER_BASE_Y;  // Base floor position

        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<Position>()
            .set<Movement>()
            .set<Collider>()
            .build();

        static const bagel::Mask maskPlayer = bagel::MaskBuilder()
            .set<PlayerState>()
            .set<Character>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.test(mask))
            {
                auto& position = entity.get<Position>();
                auto& movement = entity.get<Movement>();
                auto& collider = entity.get<Collider>();

                if (entity.test(maskPlayer))
                {
                    auto& playerState = entity.get<PlayerState>();
                    auto& character = entity.get<Character>();

                    switch (playerState.state)
                    {
                    case State::WALK_BACKWARDS:
                        movement.vx = WALK_SPEED_BACKWARDS
                                        * (playerState.direction == LEFT ? 1.0f : -1.0f)
                                        * (collider.isRightBoundarySensor && playerState.direction == LEFT ? 0.0f : 1.0f)
                                        * (collider.isLeftBoundarySensor && playerState.direction == RIGHT ? 0.0f : 1.0f);

                        break;
                    case State::WALK_FORWARDS:
                        movement.vx = WALK_SPEED_FORWARDS
                                        * (playerState.direction == LEFT ? -1.0f : 1.0f)
                                        * (collider.isPlayerSensor ? 0.0f : 1.0f)
                                        * (collider.isRightBoundarySensor && playerState.direction == RIGHT ? 0.0f : 1.0f)
                                        * (collider.isLeftBoundarySensor && playerState.direction == LEFT ? 0.0f : 1.0f);

                        break;
                    case State::KICKBACK_TORSO_HIT:
                        movement.vx = KICKBACK_SPEED
                                        * (playerState.direction == LEFT ? 1.0f : -1.0f);
                        break;
                    case State::JUMP:
                        if (!playerState.isJumping) {
                            playerState.isJumping = true;
                            movement.vy = JUMP_INITIAL_VELOCITY;
                        }
                        movement.vx = 0; // Vertical jump - no horizontal movement
                        break;
                    case State::JUMP_BACK:
                        if (!playerState.isJumping) {
                            playerState.isJumping = true;
                            movement.vy = JUMP_INITIAL_VELOCITY;
                        }
                        movement.vx = JUMP_HORIZONTAL_SPEED
                                    * (playerState.direction == LEFT ? 1.0f : -1.0f)
                                    * (collider.isRightBoundarySensor && playerState.direction == LEFT ? 0.0f : 1.0f)
                                    * (collider.isLeftBoundarySensor && playerState.direction == RIGHT ? 0.0f : 1.0f);
                        break;
                    case State::ROLL:
                        // Forward jump
                        if (!playerState.isJumping) {
                            playerState.isJumping = true;
                            movement.vy = JUMP_INITIAL_VELOCITY;
                        }
                        movement.vx = JUMP_HORIZONTAL_SPEED
                                    * (playerState.direction == LEFT ? -1.0f : 1.0f)
                                    * (collider.isRightBoundarySensor && playerState.direction == RIGHT ? 0.0f : 1.0f)
                                    * (collider.isLeftBoundarySensor && playerState.direction == LEFT ? 0.0f : 1.0f);
                        break;
                    case State::UPPERCUT_HIT:
                        if (playerState.currFrame < character.sprite[playerState.state].frameCount / 2)
                        {
                            movement.vx = FALL_SPEED
                                        * (playerState.direction == LEFT ? 1.0f : -1.0f);
                            break;
                        }
                        movement.reset();
                        break;
                    default:
                        if (!playerState.isJumping)
                            movement.reset();
                        break;
                    }

                    // Apply gravity and handle jumping physics
                    if (playerState.isJumping)
                    {
                        // Apply gravity to vertical velocity
                        movement.vy += GRAVITY;

                        // Check if player has landed
                        if (position.y + movement.vy >= FLOOR_Y) {
                            position.y = FLOOR_Y;
                            movement.vy = 0;
                            playerState.isJumping = false;

                            // Change state to landing animation when landing
                            if (playerState.state == State::JUMP ||
                                playerState.state == State::JUMP_BACK ||
                                playerState.state == State::ROLL ||
                                playerState.state == State::JUMP_KICK)
                            {
                                playerState.reset();
                                playerState.state = playerState.soundState = State::LANDING;
                                playerState.currFrame = 0;
                                playerState.busy = true;
                                playerState.busyFrames = character.sprite[State::LANDING].frameCount;
                            }
                        }
                    }
                    if (playerState.isSpecialAttack)
                    {
                        auto& specialAttackData = entity.get<Character>().getSpecialAttackData(entity.get<PlayerState>().state);
                        movement.vx = specialAttackData.movement
                                        * ((playerState.currFrame >= specialAttackData.attackTriggerFrame
                                            && playerState.currFrame < specialAttackData.movementDuration)
                                            ? 1.0f : 0.0f) // Only move if the attack is triggered and within the movement duration
                                        * (specialAttackData.moveCharacter ? 1.0f : 0.0f)
                                        * (playerState.direction == LEFT ? -1.0f : 1.0f)
                                        * (collider.isRightBoundarySensor && playerState.direction == RIGHT ? 0.0f : 1.0f)
                                        * (collider.isLeftBoundarySensor && playerState.direction == LEFT ? 0.0f : 1.0f);
                    }
                }

                position.x += movement.vx;
                position.y += movement.vy;

                if (entity.has<PlayerState>() && entity.get<PlayerState>().isCrouching)
                {
                    b2Body_SetTransform(
                            collider.body,
                            getCharPosition(position.x, position.y - (CHAR_SQUARE_HEIGHT/2.0f)),
                            b2Rot_identity);
                }
                else if (entity.has<SpecialAttack>() && entity.has<SpecialAttackData>())
                {
                    auto& specialAttackData = entity.get<SpecialAttackData>();
                    b2Body_SetTransform(
                            collider.body,
                            specialAttackData.getAttackPosition(position),
                            b2Rot_identity);
                }
                else
                {
                    b2Body_SetTransform(
                              collider.body,
                              getCharPosition(position),
                              b2Rot_identity);
                }
            }
        }
    }


    void MK::SoundSystem() const
    {
        static const bagel::Mask maskPlayer = bagel::MaskBuilder()
            .set<PlayerState>()
            .set<Character>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.test(maskPlayer))
            {
                auto& playerState = entity.get<PlayerState>();
                auto& character = entity.get<Character>();

                std::string sex;
                if (character.sex == MALE) {
                    if (playerState.playerNumber == 1)
                        sex = " male1";
                    else
                        sex = " male2";
                }
                else if (character.sex == FEMALE)
                    sex = " female";

                switch (playerState.soundState) //todo: go over effects and make some more quiet
                {
                    case State::LOW_PUNCH:
                    case State::HIGH_PUNCH:
                    case State::LOW_KICK:
                    case State::HIGH_KICK:
                    case State::LOW_SWEEP_KICK:
                        SoundManager::playSoundEffect("attack" + sex, 90);
                        SoundManager::playSoundEffect("wind", 50);
                        break;
                    case State::JUMP_KICK:
                        SoundManager::playSoundEffect("attack" + sex, 90);
                        break;
                    case State::JUMP:
                    case State::JUMP_BACK:
                    case State::ROLL: //Jump Forward
                        SoundManager::playSoundEffect("jump" + sex, 52);
                        break;
                    case State::UPPERCUT:
                    case State::HIGH_SWEEP_KICK:
                        SoundManager::playSoundEffect("hard wind", 74);
                        break;
                    case State::PUNCH_HEAD_HIT:
                        std::cout << "punch head hit" << std::endl;
                        SoundManager::playSoundEffect("hit", 60);
                        SoundManager::playSoundEffect("hit" + sex, 80);
                        break;
                    case State::KICK_HEAD_HIT:
                        std::cout << "kick head hit" << std::endl;
                        SoundManager::playSoundEffect("hard hit", 74);
                        break;
                    case State::KICKBACK_TORSO_HIT:
                        std::cout << "kickback torso hit" << std::endl;
                        SoundManager::playSoundEffect("hit", 60);
                        //when kicking not on head
                        break;
                    case State::TORSO_HIT:
                        std::cout << "torso hit" << std::endl;
                        //when punching not on head
                        SoundManager::playSoundEffect("hit" + sex, 60);
                        SoundManager::playSoundEffect("quiet hit", 40);
                        break;
                    case State::UPPERCUT_HIT:
                        SoundManager::playSoundEffect("uppercut hit" + sex, 90);
                        SoundManager::playSoundEffect("hard hit", 115);
                        break;
                    case State::LANDING:
                        SoundManager::playSoundEffect("landing", 2);
                        break;
                    case State::FALL_INPLACE:
                        SoundManager::playSoundEffectWithDelay("falling down from kick", 225, 90);
                        break;
                    case State::FALL: //after hit by high sweep kick
                        SoundManager::playSoundEffect("hard hit", 115);
                        SoundManager::playSoundEffectWithDelay("landing", 200, 23);
                        break;
                    case State::SPECIAL_1:
                    case State::SPECIAL_2:
                    case State::SPECIAL_3:
                        //todo: need to find a sound for this (might not be the same for all those sounds
                        break;
                    case State::CROUCH_HIT: //doesn't work...
                        std::cout << "crouch hit" << std::endl;
                        break;
                    default:
                        break;
                }

                static bool playedGameOverSound = false;
                if (isGameOver() && !playedGameOverSound) {
                    SoundManager::stopMusic();
                    SoundManager::playSoundEffect("game over");
                    playedGameOverSound = true;
                }

                if (playerState.isSpecialAttack)
                {
                    auto& specialAttackData = entity.get<Character>().getSpecialAttackData(entity.get<PlayerState>().state);
                }

                playerState.soundState = State::STANCE;
            }
        }
    }


    void MK::RenderSystem() const
{
    static const bagel::Mask mask = bagel::MaskBuilder()
        .set<Position>()
        .set<Texture>()
        .build();

    static const bagel::Mask maskPlayer = bagel::MaskBuilder()
        .set<PlayerState>()
        .set<Health>()
        .set<Character>()
        .build();

    static const bagel::Mask maskSpecialAttack = bagel::MaskBuilder()
        .set<SpecialAttack>()
        .set<SpecialAttackData>()
        .build();

    static const bagel::Mask maskWin = bagel::MaskBuilder()
        .set<Position>()
        .set<WinMessage>()
        .set<Texture>()
        .set<Time>()
        .build();

    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_EVENT_QUIT) {
            exit(0);
        }
    }

    SDL_RenderClear(ren);

    // Pass 1: Draw background entities only
    for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
    {
        if (bagel::Entity entity{e}; entity.test(mask) && entity.has<Background>())
        {
            auto& position = entity.get<Position>();
            auto& texture = entity.get<Texture>();

            texture.rect.x = position.x;
            texture.rect.y = position.y;

            SDL_RenderTextureRotated(ren, texture.tex, &texture.srcRect, &texture.rect, 0, nullptr, SDL_FLIP_NONE);
        }
    }

    // Pass 2: Draw all other entities
    for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
    {
        if (bagel::Entity entity{e}; entity.test(mask) && !entity.has<Background>())
        {
            SDL_FlipMode flipMode = SDL_FLIP_NONE;

            auto& position = entity.get<Position>();
            auto& texture = entity.get<Texture>();

            if (entity.test(maskPlayer)) {
                auto& playerState = entity.get<PlayerState>();
                auto& character = entity.get<Character>();

                const int frame = (playerState.state == State::WALK_BACKWARDS)
                    ? (playerState.busyFrames - (playerState.currFrame % playerState.busyFrames)) : (playerState.currFrame);

                flipMode = (playerState.direction == LEFT) ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE;

                texture.srcRect = getSpriteFrame(character, playerState.state, frame);
                texture.rect.w = static_cast<float>((character.sprite[playerState.state].w)) * CHARACTER_SCALE;
                texture.rect.h = static_cast<float>((character.sprite[playerState.state].h)) * CHARACTER_SCALE;
            }
            else if (entity.test(maskSpecialAttack)) {
                auto& specialAttack = entity.get<SpecialAttack>();
                auto& specialAttackData = entity.get<SpecialAttackData>();

                flipMode = (specialAttack.direction == LEFT && !specialAttackData.noReverse) ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE;

                texture.srcRect = getSpriteFrame(specialAttackData, specialAttack.type, specialAttack.frame);
                texture.rect.w = static_cast<float>((specialAttackData.specialAttackSprite[specialAttack.type].w))
                                * specialAttackData.scale * CHARACTER_SCALE;
                texture.rect.h = static_cast<float>((specialAttackData.specialAttackSprite[specialAttack.type].h))
                                * specialAttackData.scale * CHARACTER_SCALE;
            }
            else if (entity.test(maskWin)) {
                auto& character = entity.get<Character>();
                texture.srcRect = getWinSpriteFrame(character, (static_cast<int>(entity.get<Time>().time) / 16));
                texture.rect.w = static_cast<float>((character.winText.w)) * CHARACTER_SCALE;
                texture.rect.h = static_cast<float>((character.winText.h)) * CHARACTER_SCALE;
            }

            texture.rect.x = position.x;
            texture.rect.y = position.y;

            SDL_RenderTextureRotated(
                ren, texture.tex, &texture.srcRect, &texture.rect, 0,
                nullptr, flipMode);
        }
    }

    SDL_RenderPresent(ren);
}


    SDL_FRect MK::getSpriteFrame(const Character& character, State action, const int frame)
    {
        const auto& sprite = character.sprite[action];
        return {static_cast<float>(sprite.x
                    + (((frame / sprite.frameDuration) % sprite.frameCount)
                    * (NEXT_FRAME_OFFSET + sprite.w))) + 1
                ,static_cast<float>(sprite.y) + 1
                ,static_cast<float>(sprite.w) - 2
                ,static_cast<float>(sprite.h) - 2};
    }

    SDL_FRect MK::getSpriteFrame(const SpecialAttackData& specialAttackData, SpecialAttackState action, int frame)
    {
        const auto& sprite = specialAttackData.specialAttackSprite[(action)];
        return {static_cast<float>(sprite.x
                    + (((frame / sprite.frameDuration) % sprite.frameCount)
                    * (NEXT_FRAME_OFFSET + sprite.w))) + 1
                ,static_cast<float>(sprite.y) + 1
                ,static_cast<float>(sprite.w) - 2
                ,static_cast<float>(sprite.h) - 2};
    }

    SDL_FRect MK::getWinSpriteFrame(const Character& character, const int frame)
    {
        return {static_cast<float>(character.winText.x
                    + (((frame / character.winText.frameDuration) % character.winText.frameCount)
                    * (NEXT_FRAME_OFFSET + character.winText.w))) + 4
                ,static_cast<float>(character.winText.y) + 4
                ,static_cast<float>(character.winText.w) - 8
                ,static_cast<float>(character.winText.h) - 8};
    }

    void MK::PlayerSystem() const
    {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<Inputs>()
            .set<PlayerState>()
            .set<Character>()
            .build();

        bagel::ent_type player1Entity{}, player2Entity{};
        bool foundPlayer1 = false, foundPlayer2 = false;

        // Helper lambda to map inputs to state
        auto getStateFromInputs = [](const Inputs& inputs, const Character& character, State& state, int& freezeFrame,
                                     int& freezeFrameDuration, bool& busy, bool& crouching, bool& attack, bool& special,
                                     bool& jumping)
        {
            for (int i = 0; i < Character::SPECIAL_ATTACKS_COUNT && !special; ++i)
            {
                if (inputs == character.specialAttacksInputs[i]
                        || inputs == character.specialAttacksInputs[i + 1])
                {
                    state = static_cast<State>(i + static_cast<int>(State::SPECIAL_1));
                    attack = true;
                    special = true;
                    return;
                }
            }

            if (inputs == Inputs::JUMP_LOW_KICK
                || inputs == Inputs::JUMP_HIGH_KICK)
            {
                state = State::JUMP_KICK;
                freezeFrame = character.sprite[state].frameCount - 1;
                attack = true;
                jumping = true;
            }
            else if (inputs == Inputs::CROUCH_BLOCK)
            {
                state = State::CROUCH_BLOCK;
                freezeFrame = character.sprite[state].frameCount / 2 + 1;
                freezeFrameDuration = 1;
                crouching = true;
            }
            else if (inputs == Inputs::BLOCK)
            {
                state = State::BLOCK;
                freezeFrame = character.sprite[state].frameCount / 2 + 1;
                freezeFrameDuration = 1;
            }
            else if (inputs == Inputs::JUMP_BACK_RIGHT
                    || inputs == Inputs::JUMP_BACK_LEFT)
            {
                state = State::JUMP_BACK;
                busy = false;
            }
            else if (inputs == Inputs::ROLL_RIGHT
                    || inputs == Inputs::ROLL_LEFT)
            {
                state = State::ROLL;
                busy = false;
            }
            else if (inputs == Inputs::UP)
            {
                state = State::JUMP;
                busy = false;
            }
            else if (inputs == Inputs::HIGH_SWEEP_KICK_LEFT
                    || inputs == Inputs::HIGH_SWEEP_KICK_RIGHT)
            {
                state = State::HIGH_SWEEP_KICK;
                attack = true;
            }
            else if (inputs == Inputs::LOW_SWEEP_KICK_LEFT
                    || inputs == Inputs::LOW_SWEEP_KICK_RIGHT)
            {
                state = State::LOW_SWEEP_KICK;
                attack = true;
            }
            else if (inputs == Inputs::UPPERCUT)
            {
                state = State::UPPERCUT;
                crouching = true;
                attack = true;
            }
            else if (inputs == Inputs::DOWN)
            {
                state = State::CROUCH;
                freezeFrame = (character.sprite[state].frameCount / 2) + 1;
                freezeFrameDuration = 1;
                crouching = true;
            }
            else if (inputs == Inputs::LOW_PUNCH)
            {
                state = State::LOW_PUNCH;
                attack = true;
            }
            else if (inputs == Inputs::HIGH_PUNCH)
            {
                state = State::HIGH_PUNCH;
                attack = true;
            }
            else if (inputs == Inputs::LOW_KICK)
            {
                state = State::LOW_KICK;
                attack = true;
            }
            else if (inputs == Inputs::HIGH_KICK)
            {
                state = State::HIGH_KICK;
                attack = true;
            }
            else if (inputs == Inputs::WALK_BACKWARDS_RIGHT
                    || inputs == Inputs::WALK_BACKWARDS_LEFT)
            {
                state = State::WALK_BACKWARDS;
                busy = false;
            }
            else if (inputs == Inputs::WALK_FORWARDS_RIGHT
                    || inputs == Inputs::WALK_FORWARDS_LEFT)
            {
                state = State::WALK_FORWARDS;
                busy = false;
            }
            else
            {
                state = State::STANCE;
                busy = false;
            }
        };

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.test(mask))
            {
                auto& inputs = entity.get<Inputs>();
                auto& playerState = entity.get<PlayerState>();
                auto& character = entity.get<Character>();

                if (playerState.playerNumber == 1) { player1Entity = e; foundPlayer1 = true; }
                else if (playerState.playerNumber == 2) { player2Entity = e; foundPlayer2 = true; }

                // State variables
                State state = State::STANCE;
                int freezeFrame = NONE, freezeFrameDuration = 0;
                bool busy = true, crouching = false, attack = false, special = false, jumping = false;

                // Use helper to determine state and flags
                getStateFromInputs(inputs, character, state, freezeFrame,
                                    freezeFrameDuration, busy, crouching,
                                    attack, special, jumping);

                // Handle busy state and transitions
                if (playerState.busyFrames - 1 <= playerState.currFrame && playerState.freezeFrameDuration <= 0)
                    playerState.busy = false;

                if (playerState.isLaying && !playerState.busy && !playerState.isJumping)
                {
                    playerState.reset();
                    playerState.state = playerState.soundState = State::GETUP;
                    playerState.busyFrames = character.sprite[playerState.state].frameCount;
                    playerState.busy = true;
                }

                // State change logic
                bool shouldChangeState = ((!playerState.busy && (state != playerState.state || attack))
                    || (playerState.state == State::CROUCH && crouching && state != State::CROUCH))
                    && (!playerState.isJumping || jumping);

                if (shouldChangeState)
                {
                    playerState.reset();
                    playerState.state = playerState.soundState = state;
                    playerState.currFrame = (playerState.isCrouching && state == State::CROUCH) ? 2 : 0;
                    playerState.busyFrames = character.sprite[playerState.state].frameCount;
                    playerState.freezeFrame = freezeFrame;
                    playerState.freezeFrameDuration = freezeFrameDuration;
                    playerState.isJumping = jumping;
                    playerState.isCrouching = crouching;
                    playerState.isAttacking = attack;
                    playerState.isSpecialAttack = special;
                    playerState.busy = busy;
                }

                // Freeze frame logic
                if (playerState.freezeFrame != NONE && state == playerState.state)
                    ++playerState.freezeFrameDuration;

                if (playerState.freezeFrame != NONE
                    && playerState.currFrame + 1 >= playerState.freezeFrame
                    && playerState.freezeFrameDuration > 0)
                {
                    --playerState.freezeFrameDuration;
                    playerState.currFrame = playerState.freezeFrame;
                }
                else if (!playerState.isJumping || playerState.currFrame < playerState.busyFrames-1)
                    ++playerState.currFrame;

                // Attack creation
                if (playerState.busy && playerState.isAttacking)
                {
                    auto& [x, y] = entity.get<Position>();
                    if (playerState.isSpecialAttack
                        && (playerState.currFrame == character.getSpecialAttackData(playerState.state).attackTriggerFrame))
                    {
                        createSpecialAttack(x, y,
                                            character.getSpecialAttackData(playerState.state),
                                            playerState.playerNumber, playerState.direction, playerState.state);
                    }

                    else if (playerState.isJumping
                            || (playerState.currFrame % character.sprite[playerState.state].frameCount) == character.sprite[playerState.state].frameCount / 3)
                    {
                        createAttack(x, y, playerState.state, playerState.playerNumber, playerState.direction);
                    }
                }
            }
        }

        // Update directions and win/lose states
        if (foundPlayer1 && foundPlayer2) {
            bagel::Entity player1{player1Entity};
            bagel::Entity player2{player2Entity};
            auto& p1State = player1.get<PlayerState>();
            auto& p2State = player2.get<PlayerState>();
            auto& p1Health = player1.get<Health>();
            auto& p2Health = player2.get<Health>();
            auto& p1Char = player1.get<Character>();
            auto& p2Char = player2.get<Character>();

            auto handleWinLose = [&](const bagel::Entity& loser, const bagel::Entity& winner) {
                if (loser.get<PlayerState>().state != State::DIE)
                {
                    createWinText(winner.get<Character>());
                    const bool isJumping = loser.get<PlayerState>().isJumping;
                    loser.get<PlayerState>().reset();
                    loser.get<PlayerState>().state = loser.get<PlayerState>().soundState = State::DIE;
                    loser.get<PlayerState>().busy = true;
                    loser.get<PlayerState>().isLaying = true;
                    loser.get<PlayerState>().isJumping = isJumping;
                    loser.get<PlayerState>().busyFrames = loser.get<Character>().sprite[loser.get<PlayerState>().state].frameCount;
                    loser.get<PlayerState>().freezeFrame = loser.get<PlayerState>().busyFrames - 1;
                    loser.get<PlayerState>().freezeFrameDuration = 1000;
                }

                if (!winner.get<PlayerState>().busy)
                {
                    const bool isJumping = winner.get<PlayerState>().isJumping;
                    winner.get<PlayerState>().reset();
                    winner.get<PlayerState>().state = winner.get<PlayerState>().soundState = State::WIN;
                    winner.get<PlayerState>().busy = true;
                    winner.get<PlayerState>().isJumping = isJumping;
                    winner.get<PlayerState>().busyFrames = winner.get<Character>().sprite[winner.get<PlayerState>().state].frameCount;
                    winner.get<PlayerState>().freezeFrame = winner.get<PlayerState>().busyFrames - 1;
                    winner.get<PlayerState>().freezeFrameDuration = 1000;
                }
            };

            if (p1Health.health <= 0 && p2State.state != State::WIN)
                handleWinLose(player1, player2);
            if (p2Health.health <= 0 && p1State.state != State::WIN)
                handleWinLose(player2, player1);

            // Direction update
            bool isPlayer1Direction = player1.get<Position>().x < player2.get<Position>().x ? RIGHT : LEFT;
            bool isPlayer2Direction = !isPlayer1Direction;
            auto updateDirection = [](const bagel::Entity& player, bool newDir, const Character& character) {
                auto& state = player.get<PlayerState>();
                if (!state.isJumping && !state.busy && state.direction != newDir) {
                    state.direction = newDir;
                    state.reset();
                    state.state = state.soundState = State::TURN;
                    state.busy = true;
                    state.busyFrames = character.sprite[state.state].frameCount;
                }
            };
            updateDirection(player1, isPlayer1Direction, p1Char);
            updateDirection(player2, isPlayer2Direction, p2Char);
        }
    }


    void MK::InputSystem() {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<Inputs>()
            .build();

        SDL_PumpEvents();
        auto keyboardState = SDL_GetKeyboardState(nullptr);

        if (keyboardState[SDL_SCANCODE_ESCAPE])
        {
            exit(0);
        }

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.test(mask))
            {
                auto& inputs = entity.get<Inputs>();
                auto& playerState = entity.get<PlayerState>();

                inputs++;

                inputs[0] |= (playerState.direction == LEFT) ?
                                                Inputs::DIRECTION_LEFT : Inputs::DIRECTION_RIGHT;
                inputs[0] |= (playerState.isJumping) ?
                                                Inputs::JUMPING : 0;

                // Player 1 controls (using WASD for movement, space, etc. for actions)
                if (playerState.playerNumber == 1) {
                    inputs[0] |=
                        (keyboardState[SDL_SCANCODE_H] ? Inputs::BLOCK : 0)
                         | (keyboardState[SDL_SCANCODE_W] ? Inputs::UP : 0)
                         | (keyboardState[SDL_SCANCODE_S] ? Inputs::DOWN : 0)
                         | (keyboardState[SDL_SCANCODE_A] ? Inputs::LEFT : 0)
                         | (keyboardState[SDL_SCANCODE_D] ? Inputs::RIGHT : 0)
                         | (keyboardState[SDL_SCANCODE_F] ? Inputs::LOW_PUNCH : 0)
                         | (keyboardState[SDL_SCANCODE_R] ? Inputs::HIGH_PUNCH : 0)
                         | (keyboardState[SDL_SCANCODE_G] ? Inputs::LOW_KICK : 0)
                         | (keyboardState[SDL_SCANCODE_T] ? Inputs::HIGH_KICK : 0);
                }
                // Player 2 controls (using arrow keys and numpad)
                else if (playerState.playerNumber == 2) {
                    inputs[0] |=
                        (keyboardState[SDL_SCANCODE_APOSTROPHE] ? Inputs::BLOCK : 0)
                         | (keyboardState[SDL_SCANCODE_UP] ? Inputs::UP : 0)
                         | (keyboardState[SDL_SCANCODE_DOWN] ? Inputs::DOWN : 0)
                         | (keyboardState[SDL_SCANCODE_LEFT] ? Inputs::LEFT : 0)
                         | (keyboardState[SDL_SCANCODE_RIGHT] ? Inputs::RIGHT : 0)
                         | (keyboardState[SDL_SCANCODE_K] ? Inputs::LOW_PUNCH : 0)
                         | (keyboardState[SDL_SCANCODE_I] ? Inputs::HIGH_PUNCH : 0)
                         | (keyboardState[SDL_SCANCODE_L] ? Inputs::LOW_KICK : 0)
                         | (keyboardState[SDL_SCANCODE_O] ? Inputs::HIGH_KICK : 0);
                }
            }
        }
    }

    void MK::CollisionSystem() const
    {

        static const bagel::Mask maskAttack = bagel::MaskBuilder()
            .set<Attack>()
            .build();

        static const bagel::Mask maskPlayer = bagel::MaskBuilder()
            .set<PlayerState>()
            .build();

        b2World_Step(boxWorld, BOX2D_STEP, 4);

        const auto se = b2World_GetSensorEvents(boxWorld);

        for (int i = 0; i < se.beginCount; ++i) {
            if (!b2Shape_IsValid(se.beginEvents[i].visitorShapeId)) continue;
            b2BodyId b = b2Shape_GetBody(se.beginEvents[i].visitorShapeId);
            const auto* e_b = static_cast<bagel::ent_type*>(b2Body_GetUserData(b));
            if (!b2Shape_IsValid(se.beginEvents[i].sensorShapeId)) continue;
            b2BodyId s = b2Shape_GetBody(se.beginEvents[i].sensorShapeId);
            const auto* e_s = static_cast<bagel::ent_type*>(b2Body_GetUserData(s));
            if (!e_b || !e_s) continue;

            bagel::Entity eBody = bagel::Entity{(*e_s)};
            bagel::Entity eSensor = bagel::Entity{(*e_b)};

            if (eBody.test(maskPlayer) && eSensor.test(maskPlayer)) // Player sensor
                eBody.get<Collider>().isPlayerSensor = true;

            if (eBody.test(maskPlayer) && eSensor.has<Boundary>()) // Boundary sensor
            {
                if (eSensor.get<Boundary>().side == LEFT)
                    eBody.get<Collider>().isLeftBoundarySensor = true;
                if (eSensor.get<Boundary>().side == RIGHT)
                    eBody.get<Collider>().isRightBoundarySensor = true;
            }

            if (eSensor.test(maskAttack) && eBody.test(maskPlayer) // Attack hit, call CombatSystem
                && eSensor.get<Attack>().attacker != eBody.get<PlayerState>().playerNumber)
                CombatSystem(eSensor, eBody);

            if (eSensor.test(maskAttack) && eBody.test(maskAttack) // handles jump attacks player sync
                && eSensor.get<Attack>().attacker == eBody.get<Attack>().attacker
                && eSensor.get<Attack>().type == State::JUMP_KICK
                && eBody.get<Attack>().type == State::JUMP_KICK)
            {
                if (eBody.get<Time>().time <= eSensor.get<Time>().time)
                {
                    eBody.get<Time>().time = 0; // Remove the old attack
                    b2Body_SetTransform(s, b2Body_GetPosition(b), b2Rot_identity);
                }
                else
                {
                    eSensor.get<Time>().time = 0; // Remove the old attack
                    b2Body_SetTransform(b, b2Body_GetPosition(s), b2Rot_identity);
                }
            }

        }

        // Handle end events
        for (int i = 0; i < se.endCount; ++i) {
            if (!b2Shape_IsValid(se.endEvents[i].visitorShapeId)) continue;
            b2BodyId b = b2Shape_GetBody(se.endEvents[i].visitorShapeId);
            const auto* e_b = static_cast<bagel::ent_type*>(b2Body_GetUserData(b));
            if (!b2Shape_IsValid(se.endEvents[i].sensorShapeId)) continue;
            b2BodyId s = b2Shape_GetBody(se.endEvents[i].sensorShapeId);
            const auto* e_s = static_cast<bagel::ent_type*>(b2Body_GetUserData(s));
            if (!e_b || !e_s) continue;

            bagel::Entity eBody = bagel::Entity{(*e_s)};
            bagel::Entity eSensor = bagel::Entity{(*e_b)};

            if (eBody.test(maskPlayer) && eSensor.test(maskPlayer))
                eBody.get<Collider>().isPlayerSensor = false;

            if (eBody.test(maskPlayer) && eSensor.has<Boundary>())
            {
                if (eSensor.get<Boundary>().side == LEFT)
                    eBody.get<Collider>().isLeftBoundarySensor = false;
                if (eSensor.get<Boundary>().side == RIGHT)
                    eBody.get<Collider>().isRightBoundarySensor = false;
            }
        }
    }

    void MK::ClockSystem() {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<Time>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id)
        {
            if (bagel::Entity entity{e}; entity.test(mask))
            {
                --entity.get<Time>().time;
            }
        }
    }

    void MK::CombatSystem(bagel::Entity &eAttack, bagel::Entity &ePlayer) {
        auto& attack = eAttack.get<Attack>();
        auto& playerState = ePlayer.get<PlayerState>();
        auto& health = ePlayer.get<Health>();
        auto& character = ePlayer.get<Character>();

        // Blocking and evading attacks
        if (playerState.state == State::CROUCH_BLOCK || playerState.state == State::GETUP
            || playerState.isLaying || (playerState.state == State::BLOCK
                && attack.type != State::LOW_SWEEP_KICK))
        {
            health.health -= 1;
            playerState.currFrame -= 3;
            if (playerState.currFrame < 0)
                playerState.currFrame = 0;

            if (eAttack.has<SpecialAttack>() && eAttack.has<SpecialAttackData>() && !playerState.isLaying)
            {
                eAttack.get<SpecialAttack>().hit = true;
            }
            return;
        }

        bool isJumping = playerState.isJumping;
        bool isCrouching = playerState.isCrouching;
        switch (attack.type)
        {
        case State::LOW_PUNCH:
            health.health -= 5;
            playerState.reset();
            if (isCrouching)
            {
                playerState.state = playerState.soundState = State::CROUCH_HIT;
            }
            else if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.busyFrames = character.sprite[playerState.state].frameCount;
                playerState.freezeFrame = playerState.busyFrames - 1;
                playerState.freezeFrameDuration = 2;
                playerState.isLaying = true;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = playerState.soundState = State::TORSO_HIT;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.busy = true;
            break;
        case State::HIGH_PUNCH:
            health.health -= 5;
            playerState.reset();
            if (isCrouching)
            {
                playerState.state = playerState.soundState = State::CROUCH_HIT;
            }
            else if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.busyFrames = character.sprite[playerState.state].frameCount;
                playerState.freezeFrame = playerState.busyFrames - 1;
                playerState.freezeFrameDuration = 2;
                playerState.isLaying = true;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = State::HEAD_HIT;
                playerState.soundState = State::PUNCH_HEAD_HIT;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.busy = true;
            break;
        case State::LOW_KICK:
            health.health -= 8;
            playerState.reset();
            if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.busyFrames = character.sprite[playerState.state].frameCount;
                playerState.freezeFrame = playerState.busyFrames - 1;
                playerState.freezeFrameDuration = 2;
                playerState.isLaying = true;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = playerState.soundState = State::KICKBACK_TORSO_HIT ;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.busy = true;
            break;
        case State::HIGH_KICK:
        case State::JUMP_KICK:
            health.health -= 8;
            playerState.reset();
            if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.busyFrames = character.sprite[playerState.state].frameCount;
                playerState.freezeFrame = playerState.busyFrames - 1;
                playerState.freezeFrameDuration = 2;
                playerState.isLaying = true;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = State::HEAD_HIT;
                playerState.soundState = State::KICK_HEAD_HIT;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.busy = true;
            break;
        case State::LOW_SWEEP_KICK:
            health.health -= 12;
            playerState.reset();
            if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = playerState.soundState = State::FALL_INPLACE ;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.freezeFrame = playerState.busyFrames - 1;
            playerState.freezeFrameDuration = 2;
            playerState.isLaying = true;
            playerState.busy = true;
            break;
        case State::HIGH_SWEEP_KICK:
            health.health -= 14;
            playerState.reset();
            if (isJumping)
            {
                playerState.isJumping = true;
            }
            playerState.state = playerState.soundState = State::FALL;
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.freezeFrame = playerState.busyFrames - 1;
            playerState.freezeFrameDuration = 2;
            playerState.isLaying = true;
            playerState.busy = true;
            break;
        case State::UPPERCUT:
            health.health -= 14;
            playerState.reset();
            if (isJumping)
            {
                playerState.state = playerState.soundState = State::FALL;
                playerState.isJumping = true;
            }
            else
            {
                playerState.state = playerState.soundState = State::UPPERCUT_HIT ;
            }
            playerState.busyFrames = character.sprite[playerState.state].frameCount;
            playerState.freezeFrame = playerState.busyFrames - 1;
            playerState.freezeFrameDuration = 2;
            playerState.isLaying = true;
            playerState.busy = true;
            break;
        case State::SPECIAL_1:
        case State::SPECIAL_2:
        case State::SPECIAL_3:
            {
                if (!eAttack.has<SpecialAttack>() || !eAttack.has<SpecialAttackData>())
                    break;

                auto& specialAttackData = eAttack.get<SpecialAttackData>();
                health.health -= specialAttackData.damage;
                playerState.reset();
                if (isCrouching)
                {
                    playerState.state = playerState.soundState = State::CROUCH_HIT;
                    playerState.busyFrames = character.sprite[playerState.state].frameCount;
                }
                else if (isJumping)
                {
                    playerState.state = playerState.soundState = State::FALL;
                    playerState.busyFrames = character.sprite[playerState.state].frameCount;
                    playerState.freezeFrame = playerState.busyFrames - 1;
                    playerState.freezeFrameDuration = 2;
                    playerState.isLaying = true;
                    playerState.isJumping = true;
                }
                else
                {
                    playerState.state = playerState.soundState = specialAttackData.HitType;
                    playerState.busyFrames = character.sprite[playerState.state].frameCount;
                    if (playerState.state == State::FALL
                        || playerState.state == State::FALL_INPLACE
                        || playerState.state == State::UPPERCUT_HIT)
                    {
                        playerState.isLaying = true;
                        playerState.freezeFrame = playerState.busyFrames - 1;
                        playerState.freezeFrameDuration = 2;
                    }
                }
                playerState.busy = true;
                eAttack.get<SpecialAttack>().hit = true;
            }
                break;
        default:
            break;
        }
    }

    void MK::AttackDecaySystem() {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<Collider>()
            .set<Attack>()
            .set<Time>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id) {
            if (bagel::Entity entity{e}; entity.test(mask)) {
                auto& collider = entity.get<Collider>();
                auto& time = entity.get<Time>();

                if (time.time <= 0) {
                    if (b2Body_IsValid(collider.body)) {
                        const auto* e_p = static_cast<bagel::ent_type*>(b2Body_GetUserData(collider.body));
                        b2DestroyBody(collider.body);
                        delete e_p;
                    }
                    collider.body = b2_nullBodyId;
                    bagel::World::destroyEntity(e);
                }
            }
        }
    }

    void MK::SpecialAttackSystem() {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<SpecialAttack>()
            .set<SpecialAttackData>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id) {
            if (bagel::Entity entity{e}; entity.test(mask))
            {
                auto& specialAttack = entity.get<SpecialAttack>();
                auto& specialAttackData = entity.get<SpecialAttackData>();

                if (entity.get<SpecialAttack>().hit && entity.get<SpecialAttackData>().explode)
                {
                    const auto& spritePrev = specialAttackData.specialAttackSprite[specialAttack.type];
                    const auto& spriteNext = specialAttackData.specialAttackSprite.next(specialAttack.type);

                    specialAttack.type = static_cast<SpecialAttackState>(static_cast<int>(specialAttack.type) + 1);
                    specialAttack.frame = 0;
                    specialAttack.totalFrames = spriteNext.frameCount;
                    specialAttack.hit = false;

                    entity.get<Movement>().reset();
                    entity.get<Position>().x += ((spriteNext.w - spritePrev.w) / 2.0f) * CHARACTER_SCALE;
                    entity.get<Position>().y -= ((spriteNext.h - spritePrev.h) / 2.0f) * CHARACTER_SCALE;
                    entity.get<Time>().time = specialAttackData.explosionDuration;
                }
                else
                    ++specialAttack.frame;
            }
        }
    }

    void MK::HealthBarSystem() {
        static const bagel::Mask mask = bagel::MaskBuilder()
            .set<HealthBarReference>()
            .set<DamageVisual>()
            .set<Texture>()
            .set<Position>()
            .build();

        for (bagel::ent_type e = {0}; e.id <= bagel::World::maxId().id; ++e.id) {
            if (bagel::Entity entity{e}; entity.test(mask)) {

                // Use HealthBarReference to access actual player health
                auto& reference = entity.get<HealthBarReference>();
                if (reference.target.id == -1) continue;

                bagel::Entity player = bagel::Entity{reference.target};
                auto& health = player.get<Health>();

                // Continue as usual
                auto& damage = entity.get<DamageVisual>();
                auto& texture = entity.get<Texture>();

                float ratio = std::max(0.0f, health.health / health.max_health);

                // Smooth trailing damage effect
                if (damage.trailingHealth > health.health) {
                    constexpr float TRAIL_SPEED = 0.5f;
                    damage.trailingHealth -= TRAIL_SPEED;
                    if (damage.trailingHealth < health.health)
                        damage.trailingHealth = health.health;
                }

                texture.rect.w = 250.0f * ratio;
            }
        }
    }

    SDL_Texture* MK::TextureSystem::getTexture(SDL_Renderer* renderer, const std::string& filePath, IgnoreColorKey ignoreColorKey)
    {
        // Check if the texture is already cached
        std::string cacheKey = filePath + "_" + std::to_string(static_cast<int>(ignoreColorKey));

        if (textureCache.find(cacheKey) != textureCache.end()) {
            return textureCache[cacheKey];
        }

        // Load the texture if not cached
        SDL_Surface* surface = IMG_Load(filePath.c_str());
        if (!surface) {
            SDL_Log("Failed to load image: %s, SDL_Error: %s", filePath.c_str(), SDL_GetError());
            return nullptr;
        }

        const SDL_PixelFormatDetails *fmt = SDL_GetPixelFormatDetails(surface->format);
        switch (ignoreColorKey)
        {
            case IgnoreColorKey::CHARACTER:
                SDL_SetSurfaceColorKey(surface, true, SDL_MapRGB(fmt, nullptr,
                                                      CHARACTER_COLOR_IGNORE_RED,
                                                      CHARACTER_COLOR_IGNORE_GREEN,
                                                      CHARACTER_COLOR_IGNORE_BLUE));
                break;
            case IgnoreColorKey::BACKGROUND:
                SDL_SetSurfaceColorKey(surface, true, SDL_MapRGB(fmt, nullptr,
                                                      BACKGROUND_COLOR_IGNORE_RED,
                                                      BACKGROUND_COLOR_IGNORE_GREEN,
                                                      BACKGROUND_COLOR_IGNORE_BLUE));
                break;
        case IgnoreColorKey::NAME_BAR:
                SDL_SetSurfaceColorKey(surface, true, SDL_MapRGB(fmt, nullptr,
                                                      COLOR_KEY_NAME_BAR_RED,
                                                      COLOR_KEY_NAME_BAR_GREEN,
                                                      COLOR_KEY_NAME_BAR_BLUE));
                break;
        case IgnoreColorKey::DAMAGE_BAR:
                SDL_SetSurfaceColorKey(surface, true, SDL_MapRGB(fmt, nullptr,
                                                      COLOR_KEY_DAMAGE_BAR_RED,
                                                      COLOR_KEY_DAMAGE_BAR_GREEN,
                                                      COLOR_KEY_DAMAGE_BAR_BLUE));
                break;
        case IgnoreColorKey::WIN_TEXT:
                SDL_SetSurfaceColorKey(surface, true, SDL_MapRGB(fmt, nullptr,
                                                      WIN_TEXT_COLOR_IGNORE_RED,
                                                      WIN_TEXT_COLOR_IGNORE_GREEN,
                                                      WIN_TEXT_COLOR_IGNORE_BLUE));
        }

        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_DestroySurface(surface);

        if (!texture) {
            SDL_Log("Failed to create texture: %s, SDL_Error: %s", filePath.c_str(), SDL_GetError());
            return nullptr;
        }

        // Cache the texture
        textureCache[cacheKey] = texture;
        return texture;
    }

    // ------------------------------- Entities -------------------------------

    bagel::ent_type MK::createPlayer(float x, float y, Character character, int playerNumber) const
    {
        // Construct the texture path
        std::string texturePath = "res/" + std::string(character.name) + ".png";
        auto texture = TextureSystem::getTexture(ren, texturePath, TextureSystem::IgnoreColorKey::CHARACTER);

        b2BodyDef bodyDef = b2DefaultBodyDef();
        bodyDef.type = b2_kinematicBody;
        bodyDef.position= getCharPosition(x, y);

        b2ShapeDef shapeDef = b2DefaultShapeDef();
        shapeDef.enableSensorEvents = true;
        shapeDef.isSensor = true;

        b2Polygon boxShape = b2MakeBox((CHARACTER_WIDTH / 2.0f) / WINDOW_SCALE,
                                        (CHARACTER_HEIGHT / 2.0f) / WINDOW_SCALE);

        b2BodyId body = b2CreateBody(boxWorld, &bodyDef);
        b2ShapeId shape = b2CreatePolygonShape(body, &shapeDef, &boxShape);

        // Add components to the entity
        PlayerState playerState;
        playerState.playerNumber = playerNumber;
        playerState.direction = (playerNumber == 1) ? RIGHT : LEFT;

        bagel::Entity entity = bagel::Entity::create();
        entity.addAll(Position{x, y},
                      Movement{0, 0},
                      Collider{body, shape},
                      Texture{texture},
                      playerState,
                      Inputs{},
                      character,
                      Health{100, 100});

        b2Body_SetUserData(body, new bagel::ent_type{entity.entity()});
        return entity.entity();
    }

        void MK::createAttack(float x, float y, State type, int playerNumber, bool direction) const
        {
            float width = 0.0f;
            float height = 0.0f;
            float hitboxOffsetX = 0.0f;
            float hitboxOffsetY = 0.0f;
            float attackLifeTime = Attack::ATTACK_LIFE_TIME;

            switch (type)
            {
                case State::LOW_PUNCH:
                case State::HIGH_PUNCH:
                    width = 70.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = 40.0f;
                    break;
                case State::LOW_KICK:
                case State::HIGH_KICK:
                    width = 95.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = 0.0f;
                    break;
                case State::HIGH_SWEEP_KICK:
                    width = 95.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = 40.0f;
                    break;
                case State::LOW_SWEEP_KICK:
                    width = 85.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = -40.0f;
                    break;
                case State::UPPERCUT:
                    width = 50.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = 40.0f;
                    break;
                case State::JUMP_KICK:
                    width = 50.0f;
                    height = 40.0f;
                    hitboxOffsetX = width / 2.0f * (direction == LEFT ? -1.0f : 1.0f);
                    hitboxOffsetY = -40.0f;
                    attackLifeTime = 3;
                    break;
                default: // Type is not a valid attack
                    return;
            }

            b2BodyDef bodyDef = b2DefaultBodyDef();
            bodyDef.type = b2_kinematicBody;
            bodyDef.position= getCharPosition(x + hitboxOffsetX * CHARACTER_SCALE,
                                              y + hitboxOffsetY * CHARACTER_SCALE);

            b2ShapeDef shapeDef = b2DefaultShapeDef();
            shapeDef.enableSensorEvents = true;
            shapeDef.isSensor = true;

            b2Polygon boxShape = b2MakeBox(width * CHARACTER_SCALE / 2.0f / WINDOW_SCALE,
                                           height * CHARACTER_SCALE / 2.0f / WINDOW_SCALE);

            b2BodyId body = b2CreateBody(boxWorld, &bodyDef);
            b2ShapeId shape = b2CreatePolygonShape(body, &shapeDef, &boxShape);

            bagel::Entity entity = bagel::Entity::create();
            entity.addAll(Position{x, y},
                          Collider{body, shape},
                          Attack{type, playerNumber},
                          Time{attackLifeTime});

            b2Body_SetUserData(body, new bagel::ent_type{entity.entity()});
        }


        void MK::createSpecialAttack(float x, float y, SpecialAttackData& specialAttackData, int playerNumber,
                                     bool direction, State type) const
        {
            // Construct the texture path
            std::string texturePath = "res/SpecialAttacks.png";
            auto texture = TextureSystem::getTexture(ren, texturePath, TextureSystem::IgnoreColorKey::CHARACTER);


            float xPos = x + (CHAR_SQUARE_WIDTH / 2.0f + specialAttackData.hitboxOffsetX *
                            (direction == LEFT ? -1.0f : 1.0f) * specialAttackData.scale) * CHARACTER_SCALE;
            float yPos = y + (CHAR_SQUARE_HEIGHT / 2.0f + specialAttackData.hitboxOffsetY * specialAttackData.scale)
                            * CHARACTER_SCALE;
            b2BodyDef bodyDef = b2DefaultBodyDef();
            bodyDef.type = b2_kinematicBody;
            bodyDef.position= getPosition(xPos, yPos);

            b2ShapeDef shapeDef = b2DefaultShapeDef();
            shapeDef.enableSensorEvents = true;
            shapeDef.isSensor = true;

            b2Polygon boxShape = b2MakeBox((specialAttackData.hitboxWidth * specialAttackData.scale / 2.0f) / WINDOW_SCALE,
                                         (specialAttackData.hitboxHeight * specialAttackData.scale / 2.0f) / WINDOW_SCALE);

            b2BodyId body = b2CreateBody(boxWorld, &bodyDef);
            b2ShapeId shape = b2CreatePolygonShape(body, &shapeDef, &boxShape);

            // Add components to the entity
            auto& sprite = specialAttackData.specialAttackSprite[specialAttackData.type];
            bagel::Entity entity = bagel::Entity::create();
            entity.addAll(Position{xPos - sprite.w * specialAttackData.scale * CHARACTER_SCALE / 2.0f,
                                    yPos - sprite.h * specialAttackData.scale * CHARACTER_SCALE / 2.0f},
                       Movement{ specialAttackData.movement * (direction == LEFT ?  -1.0f : 1.0f), 0},
                       Collider{body, shape},
                       Texture{texture},
                       Attack{type, playerNumber},
                       SpecialAttack{specialAttackData.type, direction},
                       specialAttackData,
                       Time{specialAttackData.duration});

            b2Body_SetUserData(body, new bagel::ent_type{entity.entity()});
        }

        void MK::createBoundary(bool side) const
        {
            b2BodyDef bodyDef = b2DefaultBodyDef();
            bodyDef.type = b2_staticBody;
            if (side == LEFT)
            {
                bodyDef.position= getPosition(-(BOUNDARY_WIDTH / 2.0f), WINDOW_HEIGHT / 2.0f);
            }
            else
            {
                bodyDef.position= getPosition((WINDOW_WIDTH + BOUNDARY_WIDTH / 2.0f), WINDOW_HEIGHT / 2.0f);
            }

            b2ShapeDef shapeDef = b2DefaultShapeDef();
            shapeDef.enableSensorEvents = true;
            shapeDef.isSensor = true;

            b2Polygon boxShape = b2MakeBox(BOUNDARY_WIDTH / 2.0f / WINDOW_SCALE,
                                            WINDOW_HEIGHT / 2.0f / WINDOW_SCALE);

            b2BodyId body = b2CreateBody(boxWorld, &bodyDef);
            b2ShapeId shape = b2CreatePolygonShape(body, &shapeDef, &boxShape);

            bagel::Entity entity = bagel::Entity::create();

            entity.addAll(Collider{body, shape},
                          Boundary{side});

            b2Body_SetUserData(body, new bagel::ent_type{entity.entity()});
        }

        void MK::createBackground(const std::string& backgroundPath) const
    {

        auto texture = TextureSystem::getTexture(ren, backgroundPath, TextureSystem::IgnoreColorKey::NONE);

        bagel::Entity e = bagel::Entity::create();
        e.addAll(
            Position{0, 0},
            Texture{
                texture,
                { 0, 0, 800, 600 },
                { 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT}
            },
            Background{}
        );
    }

    void MK::createBar(bagel::Entity player1, bagel::Entity player2) const
    {

        // Dimensions of the green health bar in the texture
        SDL_FRect GREEN_BAR_SRC = { 5406, 49, 163, 12 };  // Green (top bar)
        SDL_FRect RED_BAR_SRC   = { 5406, 63, 163, 12 }; // Red  (bottom bar)

        // Bar dimensions
        constexpr float BAR_WIDTH = 250.0f;
        constexpr float BAR_HEIGHT = 18.0f;

        // Positioning constants
        constexpr float OFFSET_Y = 10.0f;
        constexpr float MARGIN = 50.0f;
        constexpr float xRight = WINDOW_WIDTH - BAR_WIDTH - MARGIN;

        // Load the image as a surface
        auto barTexture = TextureSystem::getTexture(ren, "res/Menus&Texts.png", TextureSystem::IgnoreColorKey::DAMAGE_BAR);
        auto nameTexture = TextureSystem::getTexture(ren, "res/Menus&Texts.png", TextureSystem::IgnoreColorKey::NAME_BAR);

        // Player 1 - RED background bar
        bagel::Entity red1 = bagel::Entity::create();
        red1.addAll(
            Position{ MARGIN, OFFSET_Y },
            Texture{
                barTexture,
                RED_BAR_SRC,
                SDL_FRect{ MARGIN, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            }
        );

        // Player 1 - GREEN health bar
        bagel::Entity green1 = bagel::Entity::create();
        green1.addAll(
            Position{ MARGIN, OFFSET_Y },
            Texture{
                barTexture,
                GREEN_BAR_SRC,
                SDL_FRect{ MARGIN, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            },
            DamageVisual{100.0f},
            HealthBarReference{ player1.entity() }
        );

        // Player 1 - Player's name
        bagel::Entity name1 = bagel::Entity::create();
        name1.addAll(
            Position{ MARGIN, OFFSET_Y },
            Texture{
                nameTexture,
                player1.get<Character>().leftBarNameSource,
                SDL_FRect{ MARGIN, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            }
        );

        // Player 2 - RED background bar
        bagel::Entity red2 = bagel::Entity::create();
        red2.addAll(
            Position{ xRight, OFFSET_Y },
            Texture{
                barTexture,
                RED_BAR_SRC,
                SDL_FRect{ xRight, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            }
        );

        // Player 2 - GREEN health bar
        bagel::Entity green2 = bagel::Entity::create();
        green2.addAll(
            Position{ xRight, OFFSET_Y },
            Texture{
                barTexture,
                GREEN_BAR_SRC,
                SDL_FRect{ xRight, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            },
            DamageVisual{100.0f},
            HealthBarReference{ player2.entity() }
        );

        // Player 2 - Player's name
        bagel::Entity name2 = bagel::Entity::create();
        name2.addAll(
            Position{ xRight, OFFSET_Y },
            Texture{
                nameTexture,
                player2.get<Character>().rightBarNameSource,
                SDL_FRect{ xRight, OFFSET_Y, BAR_WIDTH, BAR_HEIGHT }
            }
        );
    }

    void MK::createWinText(const Character& winCharacter) const
    {
        // Load the image as a surface
        const auto texture = TextureSystem::getTexture(ren, "res/Menus&Texts.png", TextureSystem::IgnoreColorKey::WIN_TEXT);

        // Create win text entity
        bagel::Entity winText = bagel::Entity::create();
        winText.addAll(
            Position{(WINDOW_WIDTH / 2.0f) - (getWinSpriteFrame(winCharacter, 0).w / 1.3f), WINDOW_HEIGHT / 3.0f},
            winCharacter,
            Texture{texture},
            Time{100000},
            WinMessage{}
        );
    }
}