#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Fire-type Pokémon cannot be burned")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_CHARMANDER].types[0] == TYPE_FIRE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CHARMANDER);
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
        NOT STATUS_ICON(opponent, burn: TRUE);
    }
}
