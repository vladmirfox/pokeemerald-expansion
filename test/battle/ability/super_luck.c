#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Super Luck increases the critical hit ratio by 1 stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        PLAYER(SPECIES_TOGEPI) { Ability(ABILITY_SUPER_LUCK); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

TO_DO_BATTLE_TEST("Super Luck increases the chances of wild Pokémon holding items (Gen8+)");
