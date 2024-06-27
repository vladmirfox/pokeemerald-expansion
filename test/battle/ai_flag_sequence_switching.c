#include "global.h"
#include "test/battle.h"

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: AI will always switch after a KO in exactly party order")
{
    u32 aiSequenceSwitchingFlag = 0;

    PARAMETRIZE{ aiSequenceSwitchingFlag = 0; }
    PARAMETRIZE{ aiSequenceSwitchingFlag = AI_FLAG_SEQUENCE_SWITCHING; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSequenceSwitchingFlag);
        PLAYER(SPECIES_SWELLOW) { Level (50); }
        OPPONENT(SPECIES_MACHOP) { Level(1); }
        OPPONENT(SPECIES_MACHOP) { Level(2); }
        OPPONENT(SPECIES_MACHOP) { Level(3); }
        OPPONENT(SPECIES_MACHOP) { Level(4); }
        OPPONENT(SPECIES_MACHOP) { Level(5); }
        OPPONENT(SPECIES_MAGNEZONE) { Level(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_WING_ATTACK) ; EXPECT_SEND_OUT(opponent, aiSequenceSwitchingFlag ? 2 : 5); }
        if (aiSequenceSwitchingFlag == AI_FLAG_SEQUENCE_SWITCHING) {
            TURN { MOVE(player, MOVE_WING_ATTACK) ; EXPECT_SEND_OUT(opponent, 4); }
            TURN { MOVE(player, MOVE_WING_ATTACK) ; EXPECT_SEND_OUT(opponent, 3); }
            TURN { MOVE(player, MOVE_WING_ATTACK) ; EXPECT_SEND_OUT(opponent, 4); }
            TURN { MOVE(player, MOVE_WING_ATTACK) ; EXPECT_SEND_OUT(opponent, 5); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: Roar still forces switch to random party member")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ROAR].effect == EFFECT_ROAR);
        AI_FLAGS(AI_FLAG_SEQUENCE_SWITCHING);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
        MESSAGE("Foe Bulbasaur was dragged out!");
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: AI will always switch after U-Turn into lowest party index")
{
    u32 j, aiSequenceSwitchingFlag = 0, move = MOVE_NONE;

    static const u32 switchMoves[] = {
        MOVE_U_TURN,
        MOVE_PARTING_SHOT,
        MOVE_BATON_PASS,
    };

    for (j = 0; j < ARRAY_COUNT(switchMoves); j++)
    {
        PARAMETRIZE{ aiSequenceSwitchingFlag = 0;                           move = switchMoves[j]; }
        PARAMETRIZE{ aiSequenceSwitchingFlag = AI_FLAG_SEQUENCE_SWITCHING;  move = switchMoves[j]; }
    }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_PARTING_SHOT].effect == EFFECT_PARTING_SHOT);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSequenceSwitchingFlag);
        PLAYER(SPECIES_SWELLOW) { Level (50); }
        OPPONENT(SPECIES_MACHOP) { Level(1); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(2); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(3); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(4); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(5); Moves(move); }
        OPPONENT(SPECIES_MAGNEZONE) { Level(100); Moves(move); }
    } WHEN {
        if (aiSequenceSwitchingFlag) {
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
        }
        else if (move == MOVE_U_TURN) {
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, MOVE_U_TURN) ; EXPECT_SEND_OUT(opponent, 5); }
        }
        else if (move == MOVE_PARTING_SHOT) {
            TURN { EXPECT_MOVE(opponent, MOVE_PARTING_SHOT) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_MOVE(opponent, MOVE_PARTING_SHOT) ; EXPECT_SEND_OUT(opponent, 4); }
            TURN { EXPECT_MOVE(opponent, MOVE_PARTING_SHOT) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_MOVE(opponent, MOVE_PARTING_SHOT) ; EXPECT_SEND_OUT(opponent, 4); }
            TURN { EXPECT_MOVE(opponent, MOVE_PARTING_SHOT) ; EXPECT_SEND_OUT(opponent, 5); }
        }
        else if (move == MOVE_BATON_PASS) {
            TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS) ; EXPECT_SEND_OUT(opponent, 4); }
            TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS) ; EXPECT_SEND_OUT(opponent, 5); }
            TURN { EXPECT_SWITCH(opponent, 4); }
            TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS) ; EXPECT_SEND_OUT(opponent, 2); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: AI will always switch after Parting Shot in exactly party order")
{
    u32 j, aiSequenceSwitchingFlag = 0, move = MOVE_NONE;

    static const u32 switchMoves[] = {
        MOVE_PARTING_SHOT,
        MOVE_PARTING_SHOT,
        MOVE_PARTING_SHOT,
    };
    for (j = 0; j < ARRAY_COUNT(switchMoves); j++)
    {
        PARAMETRIZE{ aiSequenceSwitchingFlag = 0;                           move = switchMoves[j]; }
        PARAMETRIZE{ aiSequenceSwitchingFlag = AI_FLAG_SEQUENCE_SWITCHING;  move = switchMoves[j]; }
    }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_PARTING_SHOT].effect == EFFECT_PARTING_SHOT);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSequenceSwitchingFlag);
        PLAYER(SPECIES_SWELLOW) { Level (50); }
        OPPONENT(SPECIES_MACHOP) { Level(1); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(2); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(3); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(4); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(5); Moves(move); }
        OPPONENT(SPECIES_MAGNEZONE) { Level(100); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, aiSequenceSwitchingFlag ? 1 : 5); }
        if (aiSequenceSwitchingFlag == AI_FLAG_SEQUENCE_SWITCHING) {
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: AI will always switch after Baton Pass in exactly party order")
{
    u32 j, aiSequenceSwitchingFlag = 0, move = MOVE_NONE;

    static const u32 switchMoves[] = {
        MOVE_BATON_PASS,
        MOVE_BATON_PASS,
        MOVE_BATON_PASS,
    };
    for (j = 0; j < ARRAY_COUNT(switchMoves); j++)
    {
        PARAMETRIZE{ aiSequenceSwitchingFlag = 0;                           move = switchMoves[j]; }
        PARAMETRIZE{ aiSequenceSwitchingFlag = AI_FLAG_SEQUENCE_SWITCHING;  move = switchMoves[j]; }
    }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_PARTING_SHOT].effect == EFFECT_PARTING_SHOT);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSequenceSwitchingFlag);
        PLAYER(SPECIES_SWELLOW) { Level (50); }
        OPPONENT(SPECIES_MACHOP) { Level(1); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(2); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(3); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(4); Moves(move); }
        OPPONENT(SPECIES_MACHOP) { Level(5); Moves(move); }
        OPPONENT(SPECIES_MAGNEZONE) { Level(100); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, aiSequenceSwitchingFlag ? 1 : 5); }
        if (aiSequenceSwitchingFlag == AI_FLAG_SEQUENCE_SWITCHING) {
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 0); }
            TURN { EXPECT_MOVE(opponent, move) ; EXPECT_SEND_OUT(opponent, 1); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_SEQUENCE_SWITCHING: AI will not switch mid-battle")
{
    u32 aiSequenceSwitchingFlag = 0;

    PARAMETRIZE{ aiSequenceSwitchingFlag = 0; }
    PARAMETRIZE{ aiSequenceSwitchingFlag = AI_FLAG_SEQUENCE_SWITCHING; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiSequenceSwitchingFlag);
        PLAYER(SPECIES_ZIGZAGOON) { Moves(MOVE_LICK); }
        OPPONENT(SPECIES_GASTLY) { Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_KARATE_CHOP); }
    } WHEN {
        if (aiSequenceSwitchingFlag == AI_FLAG_SEQUENCE_SWITCHING) {
            TURN { MOVE(player, MOVE_LICK) ; EXPECT_MOVE(opponent, MOVE_SHADOW_BALL); }
        }
        else {
            TURN { MOVE(player, MOVE_LICK) ; EXPECT_SWITCH(opponent, 1); }
        }
    }
}
