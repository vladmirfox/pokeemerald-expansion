#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_BUBBLE].effect == EFFECT_SPEED_DOWN_HIT);
}

SINGLE_BATTLE_TEST("Bubble lowers Speed")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_BUBBLE); }
        TURN { MOVE(player, MOVE_BUBBLE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BUBBLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Wobbuffet's Speed fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BUBBLE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("AI favors Bubble to Water Gun")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WATER_GUN].effect == EFFECT_HIT);
        ASSUME(gBattleMoves[MOVE_WATER_GUN].type == gBattleMoves[MOVE_BUBBLE].type);
        ASSUME(gBattleMoves[MOVE_WATER_GUN].power == gBattleMoves[MOVE_BUBBLE].power);

        AIFlags(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BUBBLE, MOVE_WATER_GUN); }
    } THEN {
        struct AILog bubble = AIMoveLog(opponent, MOVE_BUBBLE);
        struct AILog waterGun = AIMoveLog(opponent, MOVE_WATER_GUN);
        EXPECT_AI_GT(&bubble, &waterGun);
    }
}
