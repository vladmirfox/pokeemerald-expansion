#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mummy/Lingering Aroma replace the attacker's ability on contact")
{
    u32 move, ability, species;

    PARAMETRIZE { move = MOVE_AQUA_JET; ability = ABILITY_MUMMY; species = SPECIES_YAMASK; }
    PARAMETRIZE { move = MOVE_WATER_GUN; ability = ABILITY_MUMMY; species = SPECIES_YAMASK;}
    PARAMETRIZE { move = MOVE_AQUA_JET; ability = ABILITY_LINGERING_AROMA; species = SPECIES_OINKOLOGNE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; ability = ABILITY_LINGERING_AROMA; species = SPECIES_OINKOLOGNE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_AQUA_JET].makesContact);
        ASSUME(!gMovesInfo[MOVE_WATER_GUN].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gMovesInfo[move].makesContact) {
            ABILITY_POPUP(opponent, ability);
            if (ability == ABILITY_MUMMY)
                MESSAGE("Wobbuffet acquired Mummy!");
            else
                MESSAGE("Wobbuffet acquired Lingering Aroma!");
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ability);
                if (ability == ABILITY_MUMMY)
                    MESSAGE("Wobbuffet acquired Mummy!");
                else
                    MESSAGE("Wobbuffet acquired Lingering Aroma!");
            }
        }
    }
}
