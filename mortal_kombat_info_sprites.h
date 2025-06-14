#pragma once

// MOSHE SPRITE SHEET
static constexpr std::array<SpriteInfo, CHARACTER_SPRITE_SIZE>
    MOSHE_SPRITE_ARRAY{{
        {7, 0, 0, 196, 196}, //Block
        {11, 0, 196, 196, 196}, //Crouch
        {11, 0, 392, 196, 196}, //Crouch Block
        {7, 0, 588, 196, 196}, //Crouch Hit
        {29, 0, 784, 196, 196}, //Die
        {10, 0, 980, 196, 196}, //Fall
        {19, 0, 1176, 196, 196}, //Fall Inplace
        {17, 0, 1372, 196, 196}, //Get up
        {7, 0, 1568, 196, 196}, //Head hit
        {12, 0, 1764, 196, 196}, //High Kick
        {16, 0, 1960, 196, 196}, //High Punch
        {13, 0, 2156, 196, 196}, //High Sweep
        {38, 0, 2352, 196, 196}, //Idle
        {1, 0, 2548, 196, 196}, //Jump
        {12, 0, 2744, 196, 196}, //Jump Back
        {7, 0, 2940, 196, 196}, //Jump kick
        {11, 0, 3136, 196, 196}, //Knockback
        {3, 0, 3332, 196, 196}, //Land
        {16, 0, 3528, 196, 196}, //Low Kick
        {9, 0, 3724, 196, 196}, //Low Punch
        {18, 0, 3920, 196, 196}, //Low Sweep
        {11, 0, 4116, 196, 196}, //Roll
        {22, 0, 4312, 196, 196}, //Special
        {12, 0, 4508, 196, 196}, //Troso Hit
        {8, 0, 4704, 196, 196}, //Turn
        {11, 0, 4900, 196, 196}, //Uppercut
        {16, 0, 5096, 196, 196}, //Uppercut hit
        {16, 0, 5292, 196, 196}, //Walk
        {16, 0, 5292, 196, 196}, //Walk
        {36, 0, 5488, 196, 196}, //Win
}};

static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
    MOSHE_SPECIAL_SPRITE_ARRAY{{
}};

// ITAMAR SPRITE SHEET
static constexpr std::array<SpriteInfo, CHARACTER_SPRITE_SIZE>
    ITAMAR_SPRITE_ARRAY{{
        {12, 0, 0, 196, 196}, //Block
        {11, 0, 196, 196, 196}, //Crouch
        {9, 0, 392, 196, 196}, //Crouch Block
        {15, 0, 588, 196, 196}, //Crouch Hit
        {31, 0, 784, 196, 196}, //Die
        {26, 0, 980, 196, 196}, //Fall
        {18, 0, 1176, 196, 196}, //Fall Inplace
        {13, 0, 1372, 196, 196}, //Getup
        {7, 0, 1568, 196, 196}, //Head Hit
        {11, 0, 1764, 196, 196}, //High Kick
        {15, 0, 1960, 196, 196}, //High Punch
        {18, 0, 2156, 196, 196}, //High Sweep
        {36, 0, 2352, 196, 196}, //Idle
        {9, 0, 2548, 196, 196}, //Jump
        {16, 0, 2744, 196, 196}, //Jump Back
        {16, 0, 2940, 196, 196}, //Jump Kick
        {11, 0, 3136, 196, 196}, //Knockback
        {3, 0, 3332, 196, 196}, //Land
        {13, 0, 3528, 196, 196}, //Low Kick
        {10, 0, 3724, 196, 196}, //Low Punch
        {20, 0, 3920, 196, 196}, //Low Sweep
        {10, 0, 4116, 196, 196}, //Roll
        {28, 0, 4312, 196, 196}, //Special
        {8, 0, 4508, 196, 196}, //Torso Hit
        {5, 0, 4704, 196, 196}, //Turn
        {13, 0, 4900, 196, 196}, //Uppercut
        {18, 0, 5096, 196, 196}, //Uppercut Hit
        {19, 0, 5292, 196, 196}, //Walk
        {19, 0, 5292, 196, 196}, //Walk Back
        {27, 0, 5488, 196, 196}, //Win
}};

static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
    ITAMAR_SPECIAL_SPRITE_ARRAY{{
}};

// YANIV SPRITE SHEET
static constexpr std::array<SpriteInfo, CHARACTER_SPRITE_SIZE>
YANIV_SPRITE_ARRAY{{
    {9, 0, 0, 196, 196}, //Block
    {11, 0, 196, 196, 196}, //Crouch Block
    {13, 0, 392, 196, 196}, //Crouch Hit
    {11, 0, 588, 196, 196}, //Crouch
    {30, 0, 784, 196, 196}, //Die
    {19, 0, 980, 196, 196}, //Fall
    {20, 0, 1176, 196, 196}, //Fall Inplace
    {13, 0, 1372, 196, 196}, //Getup
    {13, 0, 1568, 196, 196}, //Head Hit
    {9, 0, 1764, 196, 196}, //High Kick
    {8, 0, 1960, 196, 196}, //High Punch
    {13, 0, 2156, 196, 196}, //High Sweep
    {39, 0, 2352, 196, 196}, //Idle
    {9, 0, 2548, 196, 196}, //Jump
    {10, 0, 2744, 196, 196}, //Jump Back
    {13, 0, 2940, 196, 196}, //Jump Kick
    {22, 0, 3136, 196, 196}, //Knockback Torso Hit
    {5, 0, 3332, 196, 196}, //Land
    {11, 0, 3528, 196, 196}, //Low Kick
    {10, 0, 3724, 196, 196}, //Low Punch
    {12, 0, 3920, 196, 196}, //Low Sweep
    {12, 0, 4116, 196, 196}, //Roll
    {48, 0, 4312, 196, 196}, //Special
    {10, 0, 4508, 196, 196}, //Torso Hit
    {5, 0, 4704, 196, 196}, //Turn
    {17, 0, 4900, 196, 196}, //Uppercut
    {20, 0, 5096, 196, 196}, //Uppercut Hit
    {19, 0, 5292, 196, 196}, //Walk
    {19, 0, 5292, 196, 196}, //Walk Back
    {79, 0, 5488, 196, 196}, //Win
}};

static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
    YANIV_SPECIAL_SPRITE_ARRAY{{
}};

// GEFEN SPRITE SHEET
static constexpr std::array<SpriteInfo, CHARACTER_SPRITE_SIZE>
GEFEN_SPRITE_ARRAY{{
    {8, 0, 0, 196, 196}, //Block
     {12, 0, 196, 196, 196}, //Crouch
     {11, 0, 392, 196, 196}, //Crouch Block
     {11, 0, 588, 196, 196}, //Crouch Hit
     {33, 0, 784, 196, 196}, //Die
     {15, 0, 980, 196, 196}, //Fall
     {22, 0, 1176, 196, 196}, //Fall Inplace
     {23, 0, 1372, 196, 196}, //Getup
     {6, 0, 1568, 196, 196}, //Head Hit
     {13, 0, 1764, 196, 196}, //High Kick
     {15, 0, 1960, 196, 196}, //High Punch
     {19, 0, 2156, 196, 196}, //High Sweep Kick
     {13, 0, 2352, 196, 196}, //Idle
     {1, 0, 2548, 196, 196}, //Jump
     {1, 0, 2744, 196, 196}, //Jump Back
     {6, 0, 2940, 196, 196}, //Jump Kick
     {12, 0, 3136, 196, 196}, //KnockBack Torso Hit
     {6, 0, 3332, 196, 196}, //Land
     {18, 0, 3528, 196, 196}, //Low Kick
     {11, 0, 3724, 196, 196}, //Low Punch
     {18, 0, 3920, 196, 196}, //Low Sweep
     {8, 0, 4116, 196, 196}, //Roll
     {34, 0, 4312, 196, 196}, //Special
     {8, 0, 4508, 196, 196}, //Torso Hit
     {8, 0, 4704, 196, 196}, //Turn
     {11, 0, 4900, 196, 196}, //Uppercut
     {16, 0, 5096, 196, 196}, //Uppercut Hit
     {18, 0, 5292, 196, 196}, //Walk
     {18, 0, 5292, 196, 196}, //Walk
     {42, 0, 5488, 196, 196}, //Win
}};


static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
    GEFEN_SPECIAL_SPRITE_ARRAY{{
}};

static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> MOSHE_SPRITE(MOSHE_SPRITE_ARRAY);
static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> ITAMAR_SPRITE(ITAMAR_SPRITE_ARRAY);
static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> YANIV_SPRITE(YANIV_SPRITE_ARRAY);
static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> GEFEN_SPRITE(GEFEN_SPRITE_ARRAY);
static constexpr SpriteData<SpecialAttacks, SPECIAL_ATTACK_SPRITE_SIZE> MOSHE_SPECIAL_ATTACK_SPRITE(MOSHE_SPECIAL_SPRITE_ARRAY);
static constexpr SpriteData<SpecialAttacks, SPECIAL_ATTACK_SPRITE_SIZE> ITAMAR_SPECIAL_ATTACK_SPRITE(ITAMAR_SPECIAL_SPRITE_ARRAY);
static constexpr SpriteData<SpecialAttacks, SPECIAL_ATTACK_SPRITE_SIZE> YANIV_SPECIAL_ATTACK_SPRITE(YANIV_SPECIAL_SPRITE_ARRAY);
static constexpr SpriteData<SpecialAttacks, SPECIAL_ATTACK_SPRITE_SIZE> GEFEN_SPECIAL_ATTACK_SPRITE(GEFEN_SPECIAL_SPRITE_ARRAY);

static constexpr std::array<SpriteInfo, WIN_SPRITE_BY_CHARACTER_SIZE>
WIN_SPRITE_BY_CHARACTER_ARRAY{{
    {2, 3714, 15, 329, 52}, // Cage
    {2, 3714, 67, 329, 52}, // Kano
    {2, 3714, 119, 329, 52}, // Raiden
    {2, 3714, 171, 329, 52}, // Liu Kang
    {2, 3714, 223, 329, 52}, // Scorpion
    {2, 3714, 275, 329, 52}, // Sub-zero
    {2, 3714, 327, 329, 52}, // Sonya
    {2, 3714, 379, 329, 52}, // Goro
    {2, 3714, 431, 329, 52}, // Shang Tsung
    {2, 3714, 15, 329, 52}, // Moshe = Cage
    {2, 3714, 67, 329, 52}, //Itamar = Kano
    {2, 3714, 119, 329, 52}, //Yaniv = Raiden
    {2, 3714, 223, 329, 52}, //Geffen = Scorpion
    {2, 3714, 327, 329, 52}, //Yonatan = Sonya
}};

static constexpr SpriteData<CharacterType, WIN_SPRITE_BY_CHARACTER_SIZE> WIN_SPRITE(WIN_SPRITE_BY_CHARACTER_ARRAY);