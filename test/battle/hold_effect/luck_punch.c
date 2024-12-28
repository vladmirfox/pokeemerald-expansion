#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Lucky Punch increases critical hit ratio by 2 stages for Chansey")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);

    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_LUCKY_PUNCH].holdEffect == HOLD_EFFECT_LUCKY_PUNCH);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CHANSEY) { Item(ITEM_LUCKY_PUNCH); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("A critical hit!");
    }
}
