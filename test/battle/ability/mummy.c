#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mummy replaces the attacker's ability on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_AQUA_JET; }
    PARAMETRIZE { move = MOVE_WATER_GUN; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_AQUA_JET].makesContact);
        ASSUME(!gMovesInfo[MOVE_WATER_GUN].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_YAMASK) { Ability(ABILITY_MUMMY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gMovesInfo[move].makesContact) {
            ABILITY_POPUP(opponent, ABILITY_MUMMY);
            MESSAGE("Wobbuffet acquired Mummy!");
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_MUMMY);
                MESSAGE("Wobbuffet acquired Mummy!");
            }
        }
    }
}
