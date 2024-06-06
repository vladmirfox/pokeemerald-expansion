#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Lingering aroma replaces the attacker's ability on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        ASSUME(!gMovesInfo[MOVE_WATER_GUN].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_OINKOLOGNE) { Ability(ABILITY_LINGERING_AROMA); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gMovesInfo[move].makesContact) {
            ABILITY_POPUP(opponent, ABILITY_LINGERING_AROMA);
            MESSAGE("Wobbuffet acquired Lingering Aroma!");
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_LINGERING_AROMA);
                MESSAGE("Wobbuffet acquired Lingering Aroma!");
            }
        }
    }
}
