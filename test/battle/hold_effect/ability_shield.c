#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_ABILITY_SHIELD].holdEffect == HOLD_EFFECT_ABILITY_SHIELD);
}

SINGLE_BATTLE_TEST("Ability Shield prevents Neutralizing Gas")
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_DROUGHT; }
    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }

    GIVEN {
        PLAYER(SPECIES_TORKOAL) { Ability(ability); Item(ITEM_ABILITY_SHIELD); }
        OPPONENT(SPECIES_KOFFING) { Ability(ABILITY_NEUTRALIZING_GAS); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing Gas filled the area!");
        if (ability == ABILITY_DROUGHT) {
            ABILITY_POPUP(player, ability);
            MESSAGE("Torkoal's Drought intensified the sun's rays!");
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ability);
                MESSAGE("Torkoal's Drought intensified the sun's rays!");
            }
        }
    }
}
