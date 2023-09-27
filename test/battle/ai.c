#include "global.h"
#include "test/battle.h"

AI_BATTLE_TEST("Test")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_STUNFISK);
        PLAYER(SPECIES_PELIPPER);
        OPPONENT(SPECIES_DARKRAI) {Moves(MOVE_TACKLE, MOVE_PECK, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT); }
        OPPONENT(SPECIES_SCIZOR) {Moves(MOVE_HYPER_BEAM, MOVE_FACADE, MOVE_GIGA_IMPACT, MOVE_EXTREME_SPEED); }
    } WHEN {

        TURN { MOVE(player, MOVE_PROTECT);  EXPECTED_MOVE(opponent, MOVE_EARTHQUAKE); } // E-quake
        TURN { SWITCH(player, 1);           NOT_EXPECTED_MOVE(opponent, MOVE_PECK); } // E-quake
        TURN { MOVE(player, MOVE_PROTECT);  EXPECTED_MOVES(opponent, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT); } // T-Bolt
        TURN { SWITCH(player, 0);           NOT_EXPECTED_MOVES(opponent, MOVE_TACKLE, MOVE_PECK); } // T-Bolt
        TURN { MOVE(player, MOVE_PROTECT);   } // E-quake
        TURN { SWITCH(player, 1);            } // E-quake
        TURN { MOVE(player, MOVE_PROTECT);  EXPECTED_MOVE(opponent, MOVE_PECK); } // T-Bolt
    } SCENE {
    }
}

AI_BATTLE_TEST("AI prefers Bubble over Water Gun if it's slower")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_SCIZOR) {Speed(200); }
        OPPONENT(SPECIES_WOBBUFFET) {Moves(MOVE_WATER_GUN, MOVE_BUBBLE); Speed(5); }
    } WHEN {
        TURN { EXPECTED_MOVE(opponent, MOVE_BUBBLE); }
        TURN { EXPECTED_MOVE(opponent, MOVE_BUBBLE); }
        TURN { EXPECTED_MOVE(opponent, MOVE_BUBBLE); }
        TURN { EXPECTED_MOVE(opponent, MOVE_BUBBLE); }
    } SCENE {
    }
}
