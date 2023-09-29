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

AI_BATTLE_TEST("AI prefers moves with better accuracy, but only if they both require the same number of hits")
{
    u16 move1, move2, move3, move4, hp, expectedMove, turns;

    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 240; expectedMove = MOVE_STRENGTH; turns = 2; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 120; expectedMove = MOVE_STRENGTH; turns = 1; }
    // Mega Kick can ohko here, while Strength requires 2 hits
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 150; expectedMove = MOVE_MEGA_KICK; turns = 1; }
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 240; expectedMove = MOVE_STRENGTH; turns = 2; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(hp); }
        PLAYER(SPECIES_WOBBUFFET);
        ASSUME(gBattleMoves[MOVE_SWIFT].accuracy == 0);
        // Same power, but different accuracies, choose wisely.
        ASSUME(gBattleMoves[MOVE_SLAM].power == gBattleMoves[MOVE_STRENGTH].power);
        ASSUME(gBattleMoves[MOVE_SLAM].accuracy < gBattleMoves[MOVE_STRENGTH].accuracy);
        ASSUME(gBattleMoves[MOVE_TACKLE].accuracy == 100);
        OPPONENT(SPECIES_EXPLOUD) {Moves(move1, move2, move3, move4); }
    } WHEN {
            if (turns == 1) {
                TURN { EXPECTED_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
            } else {
                TURN { EXPECTED_MOVE(opponent, expectedMove); }
                TURN { EXPECTED_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
            }
    } SCENE {
        MESSAGE("Wobbuffet fainted!");
    }
}
