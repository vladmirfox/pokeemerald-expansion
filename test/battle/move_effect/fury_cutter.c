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

    GIVEN {
        PLAYER(SPECIES_CROBAT);
        OPPONENT(SPECIES_LINOONE) { HP(900); }
    } WHEN {
        int i;

        for (i = 0; i < 4; i++)
            TURN { MOVE(player, MOVE_FURY_CUTTER); }
    } SCENE {
        int i;

        for (i = 0; i < 4; i++) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FURY_CUTTER, player);
            HP_BAR(opponent, captureDamage: &damage[i]);
        }
    } THEN {
        int i;

        for (i = 0; i < 2; i++)
            EXPECT_MUL_EQ(damage[i], UQ_4_12(2.0), damage[i + 1]);
        EXPECT_EQ(damage[2], damage[3]);
    }
}
