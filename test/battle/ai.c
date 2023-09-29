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

AI_BATTLE_TEST("AI prefers moves with better accuracy, but only if they both require the same number of hits to ko")
{
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 hp, expectedMove, turns, abilityAtk, expectedMove2;

    abilityAtk = ABILITY_NONE;
    expectedMove2 = MOVE_NONE;

    // Here it's a simple test, both Slam and Strength deal the same damage, but Strength always hits, whereas Slam get often miss.
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 360; expectedMove = MOVE_STRENGTH; turns = 3; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 240; expectedMove = MOVE_STRENGTH; turns = 2; }
    PARAMETRIZE { move1 = MOVE_SLAM; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 120; expectedMove = MOVE_STRENGTH; turns = 1; }
    // Mega Kick deals more damage, but can miss more often. Here, AI should choose Mega Kick if it can faint the more in less number of turns than Strength. Otherwise, it should use Strength.
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 150; expectedMove = MOVE_MEGA_KICK; turns = 1; }
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 240; expectedMove = MOVE_STRENGTH; turns = 2; }
    // Swift always hits and Guts has accuracy of 100%. Hustle lowers accuracy of all physical moves.
    PARAMETRIZE { abilityAtk = ABILITY_HUSTLE; move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_SWIFT; move4 = MOVE_TACKLE; hp = 5; expectedMove = MOVE_SWIFT; turns = 1; }
    PARAMETRIZE { abilityAtk = ABILITY_HUSTLE; move1 = MOVE_MEGA_KICK; move2 = MOVE_STRENGTH; move3 = MOVE_GUST; move4 = MOVE_TACKLE; hp = 5; expectedMove = MOVE_GUST; turns = 1; }
    // Mega Kick and Slam both have lower accuracy. Gust and Tackle both have 100, so AI can choose either of them.
    PARAMETRIZE { move1 = MOVE_MEGA_KICK; move2 = MOVE_SLAM; move3 = MOVE_TACKLE; move4 = MOVE_GUST; hp = 5; expectedMove = MOVE_GUST; expectedMove2 = MOVE_TACKLE; turns = 1; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(hp); }
        PLAYER(SPECIES_WOBBUFFET);
        ASSUME(gBattleMoves[MOVE_SWIFT].accuracy == 0);
        ASSUME(gBattleMoves[MOVE_SLAM].power == gBattleMoves[MOVE_STRENGTH].power);
        ASSUME(gBattleMoves[MOVE_MEGA_KICK].power > gBattleMoves[MOVE_STRENGTH].power);
        ASSUME(gBattleMoves[MOVE_SLAM].accuracy < gBattleMoves[MOVE_STRENGTH].accuracy);
        ASSUME(gBattleMoves[MOVE_MEGA_KICK].accuracy < gBattleMoves[MOVE_STRENGTH].accuracy);
        ASSUME(gBattleMoves[MOVE_TACKLE].accuracy == 100);
        ASSUME(gBattleMoves[MOVE_GUST].accuracy == 100);
        OPPONENT(SPECIES_EXPLOUD) {Moves(move1, move2, move3, move4); Ability(abilityAtk); }
    } WHEN {
            if (turns == 1) {
                if (expectedMove2 != MOVE_NONE) {
                    TURN { EXPECTED_MOVES(opponent, expectedMove, expectedMove2); SEND_OUT(player, 1); }
                } else {
                    TURN { EXPECTED_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                }
            } else {
                TURN { EXPECTED_MOVE(opponent, expectedMove); }
                TURN { EXPECTED_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
            }
    } SCENE {
        MESSAGE("Wobbuffet fainted!");
    }
}

AI_BATTLE_TEST("AI prefers moves which deal more damage instead of moves which are super-effective but deal less damage")
{
    u8 turns = 0;
    u16 move1 = MOVE_NONE, move2 = MOVE_NONE, move3 = MOVE_NONE, move4 = MOVE_NONE;
    u16 expectedMove, abilityAtk, abilityDef, expectedMove2;

    abilityAtk = ABILITY_NONE;
    expectedMove2 = MOVE_NONE;

    // Scald takes 3 hits, Waterfall takes 2.
    PARAMETRIZE { move1 = MOVE_WATERFALL; move2 = MOVE_SCALD; move3 = MOVE_POISON_JAB; move4 = MOVE_WATER_GUN; expectedMove = MOVE_WATERFALL; turns = 2; }
    // Poison Jab takes 3 hits, Water gun 5. Immunity so there's no poison chip damage.
    PARAMETRIZE { move1 = MOVE_POISON_JAB; move2 = MOVE_WATER_GUN; expectedMove = MOVE_POISON_JAB; abilityDef = ABILITY_IMMUNITY; turns = 3; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_TYPHLOSION) {Ability(abilityDef); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NIDOQUEEN) {Moves(move1, move2, move3, move4); Ability(abilityAtk); }
    } WHEN {
            TURN { EXPECTED_MOVE(opponent, expectedMove); }
            if (turns >= 2) {
                TURN { EXPECTED_MOVE(opponent, expectedMove); }
                if (turns == 3) {
                    TURN { EXPECTED_MOVE(opponent, expectedMove); SEND_OUT(player, 1); }
                }
            }
    } SCENE {
        MESSAGE("Typhlosion fainted!");
    }
}

AI_BATTLE_TEST("AI won't use ground type attacks against flying type Pokemon unless Gravity is in effect")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_CROBAT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NIDOQUEEN) {Moves(MOVE_EARTHQUAKE, MOVE_TACKLE, MOVE_POISON_STING, MOVE_GUST); }
    } WHEN {
            TURN { NOT_EXPECTED_MOVE(opponent, MOVE_EARTHQUAKE); }
            TURN { MOVE(player, MOVE_GRAVITY); NOT_EXPECTED_MOVE(opponent, MOVE_EARTHQUAKE); }
            TURN { EXPECTED_MOVE(opponent, MOVE_EARTHQUAKE); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Gravity intensified!");
    }
}
