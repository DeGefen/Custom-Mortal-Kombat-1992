/**
 * @file mortal_kombat_info.h
 * @brief Contains core enums, sprite data structures, and constants for Mortal_Kombat_1992.
 *
 * Defines player states, character types, special attacks, and sprite layout information.
 */

#pragma once
#include <array>

namespace mortal_kombat
{
    /// @enum State
    /// @brief Holds the different states of the player.
    enum class State
    {
        BLOCK,
        CROUCH,
        CROUCH_BLOCK,
        CROUCH_HIT,
        DIE,
        FALL,
        FALL_INPLACE,
        GETUP,
        HEAD_HIT,
        HIGH_KICK,
        HIGH_PUNCH,
        HIGH_SWEEP_KICK,
        STANCE,
        JUMP,
        JUMP_BACK,
        JUMP_KICK,
        KICKBACK_TORSO_HIT,
        LANDING,
        LOW_KICK,
        LOW_PUNCH,
        LOW_SWEEP_KICK,
        ROLL,
        SPECIAL_1,
        SPECIAL_2,
        SPECIAL_3,
        TORSO_HIT,
        TURN,
        UPPERCUT,
        UPPERCUT_HIT,
        WALK_FORWARDS,
        WALK_BACKWARDS,
        WIN,
    };


    /// @brief Enum SpecialAttacks hold the different special attacks types.
    enum class SpecialAttackState
    {
        SPECIAL_1_ATTACK,
        SPECIAL_1_HIT,
        SPECIAL_2_ATTACK,
        SPECIAL_2_HIT,
        SPECIAL_3_ATTACK,
        SPECIAL_3_HIT,
        NONE
    };

    /// @brief Enum CharacterType hold the different character types.
    enum class CharacterType
    {
        MOSHE,
        ITAMAR,
        YANIV,
        GEFEN,
        OFEK,
        YONATAN
    };

    static constexpr int CHARACTER_SPRITE_SIZE = 32;
    static constexpr int SPECIAL_ATTACK_SPRITE_SIZE = 7;
    static constexpr int WIN_SPRITE_BY_CHARACTER_SIZE = 14;

    /// @brief SpriteInfo struct holds the sprite information.
    struct SpriteInfo {
        int frameCount = 0;
        float x = 0, y = 0;
        float w = 230, h = 220;
        int frameDuration = 1; // Duration of each frame in milliseconds
    };

    /**
     * @class SpriteData
     * @brief Holds the sprite data for a character.
     *
     * Contains an array of SpriteInfo objects, each representing a different state of the character.
     * Provides access to the sprite data using an enum class as the index.
     */
    template<class T, std::size_t SIZE>
    class SpriteData {
    public:
        explicit constexpr SpriteData(const std::array<SpriteInfo, SIZE>& spriteArray)
                    : sprite(spriteArray) {}

        /// @brief Returns the sprite information for the given state.
        constexpr const SpriteInfo& operator[](const T& s) const {
            return sprite[static_cast<int>(s)];
        }

        /// @brief Returns the sprite information for the given state.
        constexpr SpriteInfo& operator[](T& s) {
            return sprite[static_cast<int>(s)];
        }

        constexpr SpriteInfo& next(T& s) {
            return sprite[(static_cast<int>(s) + 1) % SIZE];
        }

    private:
        std::array<SpriteInfo, SIZE> sprite;
    };


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
            {22, 0, 4312, 196, 196}, //Special 1
            {22, 0, 4312, 196, 196}, //Special 2
            {22, 0, 4312, 196, 196}, //Special 3
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
            {5, 0, 0, 64, 64, 15}, //SPECIAL 1
            {17, 320, 0, 64, 64, 3}, //PUFF
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
            {28, 0, 4312, 196, 196}, //Special 1
            {28, 0, 4312, 196, 196}, //Special 2
            {28, 0, 4312, 196, 196}, //Special 3
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
        {48, 0, 4312, 196, 196}, //Special 1
        {48, 0, 4312, 196, 196}, //Special 2
        {48, 0, 4312, 196, 196}, //Special 3
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
            {4, 1408, 0, 64, 64, 5}, //SPECIAL 1
            {5, 1664, 0, 64, 64, 5}, //SPECIAL 1 Hit
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
        {3, 0, 3332, 196, 196}, //Land
        {18, 0, 3528, 196, 196}, //Low Kick
        {11, 0, 3724, 196, 196}, //Low Punch
        {18, 0, 3920, 196, 196}, //Low Sweep
        {8, 0, 4116, 196, 196}, //Roll
        {34, 0, 4312, 196, 196}, //Special 1
        {34, 0, 4312, 196, 196}, //Special 2
        {34, 0, 4312, 196, 196}, //Special 3
        {8, 0, 4508, 196, 196}, //Torso Hit
        {5, 0, 4704, 196, 196}, //Turn
        {11, 0, 4900, 196, 196}, //Uppercut
        {16, 0, 5096, 196, 196}, //Uppercut Hit
        {18, 0, 5292, 196, 196}, //Walk
        {18, 0, 5292, 196, 196}, //Walk
        {42, 0, 5488, 196, 196}, //Win
    }};


    static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
        GEFEN_SPECIAL_SPRITE_ARRAY{{
            {8 , 0, 64, 256, 256, 5}, //SPECIAL 1
    }};

    // OFEK SPRITE SHEET
    static constexpr std::array<SpriteInfo, CHARACTER_SPRITE_SIZE>
    OFEK_SPRITE_ARRAY{{
        {22, 0, 0, 196, 196}, //Block
        {14, 0, 196, 196, 196}, //Crouch
        {12, 0, 392, 196, 196}, //Crouch Block
        {18, 0, 588, 196, 196}, //Crouch Hit
        {26, 0, 784, 196, 196}, //Die
        {19, 0, 1176, 196, 196}, //Fall
        {28, 0, 980, 196, 196}, //Fall INPLACE
        {15, 0, 1372, 196, 196}, //Getup
        {8, 0, 1568, 196, 196}, //Head Hit
        {16, 0, 1764, 196, 196}, //High Kick
        {12, 0, 1960, 196, 196}, //High Punch
        {20, 0, 2156, 196, 196}, //High Sweep Kick
        {36, 0, 2352, 196, 196}, //Idle
        {10, 0, 2548, 196, 196}, //Jump
        {11, 0, 2940, 196, 196}, //Jump Back
        {15, 0, 3136, 196, 196}, //Jump Kick
        {13, 0, 3332, 196, 196}, //KnowBack
        {3, 0, 2744, 196, 196}, //Land
        {23, 0, 3528, 196, 196}, //Low Kick
        {14, 0, 3724, 196, 196}, //Low Punch
        {17, 0, 3920, 196, 196}, //Low Sweep
        {11, 0, 4116, 196, 196}, //Roll
        {30, 0, 4312, 196, 196}, //Special 1
        {30, 0, 4312, 196, 196}, //Special 2
        {30, 0, 4312, 196, 196}, //Special 3
        {19, 0, 4508, 196, 196}, //Torso Hit
        {7, 0, 4704, 196, 196}, //Turn
        {16, 0, 4900, 196, 196}, //Upper Cut
        {19, 0, 5096, 196, 196}, //Uppercut Hit
        {19, 0, 5292, 196, 196}, //Walk
        {19, 0, 5292, 196, 196}, //Walk
        {30, 0, 5488, 196, 196}, //Win
    }};


    static constexpr std::array<SpriteInfo, SPECIAL_ATTACK_SPRITE_SIZE>
        OFEK_SPECIAL_SPRITE_ARRAY{{
            {8 , 0, 64, 256, 256, 5}, //SPECIAL 1
    }};

    static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> MOSHE_SPRITE(MOSHE_SPRITE_ARRAY);
    static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> ITAMAR_SPRITE(ITAMAR_SPRITE_ARRAY);
    static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> YANIV_SPRITE(YANIV_SPRITE_ARRAY);
    static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> GEFEN_SPRITE(GEFEN_SPRITE_ARRAY);
    static constexpr SpriteData<State, CHARACTER_SPRITE_SIZE> OFEK_SPRITE(OFEK_SPRITE_ARRAY);
    static constexpr SpriteData<SpecialAttackState, SPECIAL_ATTACK_SPRITE_SIZE> MOSHE_SPECIAL_ATTACK_SPRITE(MOSHE_SPECIAL_SPRITE_ARRAY);
    static constexpr SpriteData<SpecialAttackState, SPECIAL_ATTACK_SPRITE_SIZE> ITAMAR_SPECIAL_ATTACK_SPRITE(ITAMAR_SPECIAL_SPRITE_ARRAY);
    static constexpr SpriteData<SpecialAttackState, SPECIAL_ATTACK_SPRITE_SIZE> YANIV_SPECIAL_ATTACK_SPRITE(YANIV_SPECIAL_SPRITE_ARRAY);
    static constexpr SpriteData<SpecialAttackState, SPECIAL_ATTACK_SPRITE_SIZE> GEFEN_SPECIAL_ATTACK_SPRITE(GEFEN_SPECIAL_SPRITE_ARRAY);
    static constexpr SpriteData<SpecialAttackState, SPECIAL_ATTACK_SPRITE_SIZE> OFEK_SPECIAL_ATTACK_SPRITE(OFEK_SPECIAL_SPRITE_ARRAY);

    static constexpr std::array<SpriteInfo, WIN_SPRITE_BY_CHARACTER_SIZE>
    WIN_SPRITE_BY_CHARACTER_ARRAY{{
        {2, 3714, 15, 329, 52}, //Moshe = Cage
        {2, 3714, 67, 329, 52}, //Itamar = Kano
        {2, 3714, 119, 329, 52}, //Yaniv = Raiden
        {2, 3714, 223, 329, 52}, //Gefen = Scorpion
        {2, 3714, 223, 329, 52}, //Ofek = Scorpion
        {2, 3714, 327, 329, 52}, //Yonatan = Sonya
    }};

    static constexpr SpriteData<CharacterType, WIN_SPRITE_BY_CHARACTER_SIZE> WIN_SPRITE(WIN_SPRITE_BY_CHARACTER_ARRAY);
};
