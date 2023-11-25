#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_AXE_KICK].effect == EFFECT_AXE_KICK);
}

SINGLE_BATTLE_TEST("Axe Kick confuses the target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_AXE_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AXE_KICK, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " became confused!");
    }
}

SINGLE_BATTLE_TEST("Axe Kick deals damage half the hp to user if def battler protected")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_AXE_KICK); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " protected itself!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " protected itself!");
        MESSAGE("Wobbuffet kept going and crashed!");
        HP_BAR(player, hp: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Axe Kick deals damage half the hp to user if it fails")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_AXE_KICK, hit: FALSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_AXE_KICK) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) "'s attack missed!");
        MESSAGE("Wobbuffet kept going and crashed!");
        HP_BAR(player, hp: maxHP / 2);
    }
}
