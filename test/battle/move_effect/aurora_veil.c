#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_AURORA_VEIL].effect == EFFECT_AURORA_VEIL);
}

SINGLE_BATTLE_TEST("Aurora Veil cannot be used without Hail or Snow")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_AURORA_VEIL); }
    } SCENE {
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Aurora Veil can be used in Hail")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); MOVE(player, MOVE_AURORA_VEIL); }
    } SCENE {
        NOT MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Aurora Veil can be used in Snow")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SNOWSCAPE); MOVE(player, MOVE_AURORA_VEIL); }
    } SCENE {
        NOT MESSAGE("But it failed!");
    }
}