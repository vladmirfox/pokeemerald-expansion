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
TO_DO_BATTLE_TEST("Aurora Veil reduces damage done to the user by half in singles")
TO_DO_BATTLE_TEST("Aurora Veil reduces damage done to the user by roughly a third in doubles")
TO_DO_BATTLE_TEST("Aurora Veil's damage reduction is ignored by Critical Hits")
TO_DO_BATTLE_TEST("Aurora Veil's damage reduction doesn't stack with Reflect or Light Screen")
TO_DO_BATTLE_TEST("Aurora Veil doesn't reduce confusion damage")
TO_DO_BATTLE_TEST("Aurora Veil doesn't reduce damage done by moves that do direct damage") // Bide, Counter, Endeavor, Final Gambit, Metal Burst, Mirror Coat, Psywave, Seismic Toss, Sonic Boom, Super Fang
