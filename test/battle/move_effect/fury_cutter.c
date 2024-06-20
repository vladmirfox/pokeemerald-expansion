#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FURY_CUTTER].effect == EFFECT_FURY_CUTTER);
    ASSUME(B_UPDATED_MOVE_DATA >= GEN_6);
}

SINGLE_BATTLE_TEST("Fury Cutter power doubles with each use, up to 3 times")
{
    s16 damage[4];
    int turn;

    GIVEN {
        PLAYER(SPECIES_CROBAT);
        OPPONENT(SPECIES_LINOONE) { HP(900); }
    } WHEN {
        for (turn = 0; turn < 4; turn++)
            TURN { MOVE(player, MOVE_FURY_CUTTER); }
    } SCENE {
        for (turn = 0; turn < 4; turn++) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FURY_CUTTER, player);
            HP_BAR(opponent, captureDamage: &damage[turn]);
        }
    } THEN {
        for (turn = 0; turn < 2; turn++)
            EXPECT_MUL_EQ(damage[turn], UQ_4_12(2.0), damage[turn + 1]);
        EXPECT_EQ(damage[2], damage[3]);
    }
}
