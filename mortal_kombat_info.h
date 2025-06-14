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
        TORSO_HIT,
        TURN,
        UPPERCUT,
        UPPERCUT_HIT,
        WALK_FORWARDS,
        WALK_BACKWARDS,
        WIN,
        SPECIAL_2,
        SPECIAL_3,
        JUMP_PUNCH,
        JUMP_HIGH_KICK,
        CROUCH_KICK,
    };


    /// @brief Enum SpecialAttacks hold the different special attacks types.
    enum class SpecialAttacks
    {
        FIREBALL,
        EXPLOSION,
        NONE
    };

    /// @brief Enum CharacterType hold the different character types.
    enum class CharacterType
    {
        CAGE,
        KANO,
        RAIDEN,
        LIU_KANG,
        SCORPION,
        SUBZERO,
        SONYA,
        GORO,
        SHANG_TSUNG,
        MOSHE,
        ITAMAR,
        YANIV,
        GEFFEN,
        YONATAN
    };

    static constexpr int CHARACTER_SPRITE_SIZE = 30;
    static constexpr int SPECIAL_ATTACK_SPRITE_SIZE = 2;
    static constexpr int WIN_SPRITE_BY_CHARACTER_SIZE = 14;

    /// @brief SpriteInfo struct holds the sprite information.
    struct SpriteInfo {
        int frameCount = 0;
        float x = 0, y = 0;
        float w = 230, h = 220;
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

    private:
        std::array<SpriteInfo, SIZE> sprite;
    };

    #include "mortal_kombat_info_sprites.h"
};
