#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_BATTLE_TEST("AI Test")
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
    u32 speedPlayer, speedAi;

    PARAMETRIZE { speedPlayer = 200; speedAi = 10; }
    PARAMETRIZE { speedPlayer = 10; speedAi = 200; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_SCIZOR) {Speed(speedPlayer); }
        OPPONENT(SPECIES_WOBBUFFET) {Moves(MOVE_WATER_GUN, MOVE_BUBBLE); Speed(speedAi); }
    } WHEN {
        if (speedPlayer > speedAi)
        {
            TURN { EXPECT_MOVES_GT(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
            TURN { EXPECT_MOVES_GT(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
        }
        else
        {
            TURN { EXPECT_MOVES_EQ(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
            TURN { EXPECT_MOVES_EQ(opponent, MOVE_BUBBLE, MOVE_WATER_GUN); }
        }
    } SCENE {
    }
}

AI_BATTLE_TEST("AI prefers Water Gun over Bubble if it knows that foe has Contrary")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_SHUCKLE) { Ability(ABILITY_CONTRARY); }
        OPPONENT(SPECIES_WOBBUFFET) {Moves(MOVE_WATER_GUN, MOVE_BUBBLE); }
    } WHEN {
            TURN { MOVE(player, MOVE_DEFENSE_CURL);  }
            TURN { MOVE(player, MOVE_DEFENSE_CURL); EXPECT_MOVES_GT(opponent, MOVE_WATER_GUN, MOVE_BUBBLE); }
    } SCENE {
        MESSAGE("Shuckle's Defense fell!"); // Contrary activates
    } THEN {
        EXPECT(gBattleResources->aiData->abilities[B_POSITION_PLAYER_LEFT] == ABILITY_CONTRARY);
    }
}
