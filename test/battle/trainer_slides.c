#include "global.h"
#include "test/battle.h"
#include "battle_setup.h"

SINGLE_BATTLE_TEST("Trainer Slide: Before First Turn")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_BEFORE_FIRST_TURN;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { }
    } SCENE {
        MESSAGE("This message plays before the first turn.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Player Lands First Critical Hit")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FROST_BREATH); }
    } SCENE {
        MESSAGE("A critical hit!");
        MESSAGE("This message plays after the player lands their first critical hit.{PAUSE_UNTIL_PRESS}");
    }
}
