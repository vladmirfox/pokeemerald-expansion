#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user & the target to faint")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        HP_BAR(opponent, hp: 0);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it misses")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION, hit: FALSE); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it has no effect")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_EXPLOSION].type == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_GASTLY].types[0] == TYPE_GHOST);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GASTLY);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("It doesn't affect Foe " SPECIES_NAME(SPECIES_GASTLY) "…");
        NOT HP_BAR(opponent);
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
    }
}

DOUBLE_BATTLE_TEST("Explosion causes everyone to faint in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_ABRA) { HP(1); }
        OPPONENT(SPECIES_KADABRA) { HP(1); }
        OPPONENT(SPECIES_KADABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        HP_BAR(opponentLeft, hp: 0);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_ABRA) " fainted!");
        HP_BAR(playerRight, hp: 0);
        MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " fainted!");
        HP_BAR(opponentRight, hp: 0);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_KADABRA) " fainted!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " fainted!");
    }
}
