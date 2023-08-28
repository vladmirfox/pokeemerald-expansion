#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Electric-type Pokémon cannot be paralyzed")
{
    GIVEN {
        ASSUME(B_PARALYZE_ELECTRIC >= GEN_6);
        ASSUME(gSpeciesInfo[SPECIES_PIKACHU].types[0] == TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIKACHU);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        NOT STATUS_ICON(opponent, paralysis: TRUE);
    }
}
