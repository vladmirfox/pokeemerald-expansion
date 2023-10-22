#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_SHED_TAIL].effect == EFFECT_SHED_TAIL);
}

TO_DO_BATTLE_TEST("Shed Tail sets up substitute");
TO_DO_BATTLE_TEST("Shed Tail transfers substitute to switch in");
