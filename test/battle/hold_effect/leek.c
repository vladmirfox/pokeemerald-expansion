#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Leek increases critical hit ratio by 2 stages for the Farfetch'd Family")
{
    u32 species;

    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);

    PARAMETRIZE { species = SPECIES_FARFETCHD; }
    PARAMETRIZE { species = SPECIES_FARFETCHD_GALAR; }
    PARAMETRIZE { species = SPECIES_SIRFETCHD; }

    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_LEEK].holdEffect == HOLD_EFFECT_LEEK);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Item(ITEM_LEEK); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("A critical hit!");
    }
}
