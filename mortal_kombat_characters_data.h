#pragma once

static constexpr SDL_FRect MOSHE_NAME_BAR_LEFT_SOURCE = {5406, 99, 163, 12};
static constexpr SDL_FRect MOSHE_NAME_BAR_RIGHT_SOURCE = {5579, 99, 163, 12};
static constexpr SDL_FRect ITAMAR_NAME_BAR_LEFT_SOURCE = {5406, 114, 163, 12};
static constexpr SDL_FRect ITAMAR_NAME_BAR_RIGHT_SOURCE = {5579, 114, 163, 12};
static constexpr SDL_FRect YANIV_NAME_BAR_LEFT_SOURCE = {5406, 129, 163, 12};
static constexpr SDL_FRect YANIV_NAME_BAR_RIGHT_SOURCE = {5579, 129, 163, 12};
static constexpr SDL_FRect GEFEN_NAME_BAR_LEFT_SOURCE = {5406, 159, 163, 12};
static constexpr SDL_FRect GEFEN_NAME_BAR_RIGHT_SOURCE = {5579, 159, 163, 12};
static constexpr SDL_FRect OFEK_NAME_BAR_LEFT_SOURCE = {5406, 144, 163, 12};
static constexpr SDL_FRect OFEK_NAME_BAR_RIGHT_SOURCE = {5579, 144, 163, 12};
static constexpr SDL_FRect YONATAN_NAME_BAR_LEFT_SOURCE = {5406, 189, 163, 12};
static constexpr SDL_FRect YONATAN_NAME_BAR_RIGHT_SOURCE = {5579, 189, 163, 12};


static constexpr SpecialAttackData ERORR_SPECIAL_ATTACK = {
    .HitType = State::TORSO_HIT,
    .type = SpecialAttackState::SPECIAL_1_ATTACK,
    .isBullet = true,
    .moveCharacter = false,
    .explode = true,
    .noReverse = true,
    .movement = 3.0f,
    .damage = 99.0f,
    .hitboxWidth = 50.0f,
    .hitboxHeight = 50.0f,
    .hitboxOffsetX = 25.0f,
    .hitboxOffsetY = 0.0f,
    .attackTriggerFrame = 14,
    .movementDuration = 250,
    .duration = 250, // Duration of the special attack
    .explosionDuration = 19, // Duration of the explosion effect
    .scale = 1.3f,
    .specialAttackSprite = MOSHE_SPECIAL_ATTACK_SPRITE
};

static constexpr SpecialAttackData HURRICANE_KICK_SPEICIAL_ATTACK = {
    .HitType = State::UPPERCUT_HIT,
    .type = SpecialAttackState::SPECIAL_1_ATTACK,
    .isBullet = true,
    .moveCharacter = true,
    .explode = false,
    .noReverse = false,
    .movement = 7.0f,
    .damage = 20.0f,
    .hitboxWidth = 125.0f * CHARACTER_SCALE,
    .hitboxHeight = 100.0f * CHARACTER_SCALE,
    .hitboxOffsetX = 0.0f,
    .hitboxOffsetY = 0.0f,
    .attackTriggerFrame = 3,
    .movementDuration = 33,
    .duration = 33, // Duration of the special attack
    .explosionDuration = 0,
    .scale = 1.0f,
    .specialAttackSprite = OFEK_SPECIAL_ATTACK_SPRITE
};

static constexpr SpecialAttackData STAR_OF_DAVID_SPECIAL_ATTACK = {
    .HitType = State::TORSO_HIT,
    .type = SpecialAttackState::SPECIAL_1_ATTACK,
    .isBullet = true,
    .moveCharacter = false,
    .explode = true,
    .noReverse = false,
    .movement = 10.0f * CHARACTER_SCALE,
    .damage = 10.0f,
    .hitboxWidth = 40.0f * CHARACTER_SCALE,
    .hitboxHeight = 40.0f * CHARACTER_SCALE,
    .hitboxOffsetX = 15.0f,
    .hitboxOffsetY = 0.0f,
    .attackTriggerFrame = 25,
    .movementDuration = 70,
    .duration = 70, // Duration of the special attack
    .explosionDuration = 20, // Duration of the explosion effect
    .scale = 1.3f,
    .specialAttackSprite = YANIV_SPECIAL_ATTACK_SPRITE
};

static constexpr SpecialAttackData ENERGY_EXPLODTION_SPECIAL_ATTACK = {
    .HitType = State::UPPERCUT_HIT,
    .type = SpecialAttackState::SPECIAL_1_ATTACK,
    .isBullet = false,
    .moveCharacter = false,
    .explode = false,
    .noReverse = false,
    .movement = 0.0f,
    .damage = 10.0f,
    .hitboxWidth = 256.0f * CHARACTER_SCALE,
    .hitboxHeight = 256.0f * CHARACTER_SCALE,
    .hitboxOffsetX = 0.0f,
    .hitboxOffsetY = 0.0f,
    .attackTriggerFrame = 10,
    .movementDuration = 0,
    .duration = 39, // Duration of the special attack
    .explosionDuration = 0,
    .scale = 1.4f,
    .specialAttackSprite = GEFEN_SPECIAL_ATTACK_SPRITE
};

static constexpr SpecialAttackData CORKSCREW_KIP_UP_SPECIAL_ATTACK = {
    .HitType = State::FALL_INPLACE,
    .type = SpecialAttackState::SPECIAL_1_ATTACK,
    .isBullet = true,
    .moveCharacter = true,
    .explode = false,
    .noReverse = false,
    .movement = 10.0f,
    .damage = 10.0f,
    .hitboxWidth = 100.0f * CHARACTER_SCALE,
    .hitboxHeight = 50.0f * CHARACTER_SCALE,
    .hitboxOffsetX = 0.0f,
    .hitboxOffsetY = -50.0f,
    .attackTriggerFrame = 3,
    .movementDuration = 24,
    .duration = 45, // Duration of the special attack
    .explosionDuration = 0,
    .scale = 1.0f,
    .specialAttackSprite = OFEK_SPECIAL_ATTACK_SPRITE
};
