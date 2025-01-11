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
