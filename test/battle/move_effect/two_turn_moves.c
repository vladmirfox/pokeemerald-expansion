#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SKULL_BASH].effect == EFFECT_TWO_TURNS_ATTACK);
    ASSUME(MoveHasMoveEffectSelf(MOVE_SKULL_BASH, MOVE_EFFECT_DEF_PLUS_1) == TRUE);
    ASSUME(gMovesInfo[MOVE_SKY_ATTACK].effect == EFFECT_TWO_TURNS_ATTACK);
}

SINGLE_BATTLE_TEST("Razor Wind needs a charging turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Charging turn
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NOT MESSAGE("Wobbuffet whipped up a whirlwind!");
            MESSAGE("Wobbuffet used Razor Wind!");
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        }
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet whipped up a whirlwind!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        // Attack turn
        MESSAGE("Wobbuffet used Razor Wind!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Razor Wind doesn't need to charge with Power Herb")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RAZOR_WIND); }
    } SCENE {
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NOT MESSAGE("Wobbuffet whipped up a whirlwind!");
            MESSAGE("Wobbuffet used Razor Wind!");
        } else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet whipped up a whirlwind!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet became fully charged due to its Power Herb!");
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet used Razor Wind!");
        // For some reason, this breaks with and only with Razor Wind...
        // ANIMATION(ANIM_TYPE_MOVE, MOVE_RAZOR_WIND, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Skull Bash needs a charging turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SKULL_BASH); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Charging turn
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NOT MESSAGE("Wobbuffet lowered its head!");
            MESSAGE("Wobbuffet used Skull Bash!");
        } else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet lowered its head!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Defense rose!");
        // Attack turn
        MESSAGE("Wobbuffet used Skull Bash!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Skull Bash doesn't need to charge with Power Herb")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SKULL_BASH); }
    } SCENE {
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NOT MESSAGE("Wobbuffet lowered its head!");
            MESSAGE("Wobbuffet used Skull Bash!");
        } else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet lowered its head!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Defense rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet became fully charged due to its Power Herb!");
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet used Skull Bash!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKULL_BASH, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Sky Attack needs a charging turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_ATTACK); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Charging turn
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NONE_OF {
                MESSAGE("Wobbuffet became cloaked in a harsh light!");
                MESSAGE("Wobbuffet is glowing!");
            }
            MESSAGE("Wobbuffet used Sky Attack!");
        } else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        if (B_UPDATED_MOVE_DATA < GEN_4)
            MESSAGE("Wobbuffet is glowing!");
        else if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet became cloaked in a harsh light!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        // Attack turn
        MESSAGE("Wobbuffet used Sky Attack!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Sky Attack doesn't need to charge with Power Herb")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_ATTACK); }
    } SCENE {
        if (B_UPDATED_MOVE_DATA >= GEN_5) {
            NONE_OF {
                MESSAGE("Wobbuffet became cloaked in a harsh light!");
                MESSAGE("Wobbuffet is glowing!");
            }
            MESSAGE("Wobbuffet used Sky Attack!");
        } else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        if (B_UPDATED_MOVE_DATA < GEN_4)
            MESSAGE("Wobbuffet is glowing!");
        else if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet became cloaked in a harsh light!");
        else
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet became fully charged due to its Power Herb!");
        if (B_UPDATED_MOVE_DATA < GEN_5)
            MESSAGE("Wobbuffet used Sky Attack!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_ATTACK, player);
        HP_BAR(opponent);
    }
}
