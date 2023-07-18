#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_MAKE_IT_RAIN].effect == EFFECT_MAKE_IT_RAIN);
}

SINGLE_BATTLE_TEST("Make It Rain lowers special attack by 1 stage1")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MAKE_IT_RAIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAKE_IT_RAIN, player);
        MESSAGE("Coins scattered everywhere!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Sp. Atk fell!");
    }
}
