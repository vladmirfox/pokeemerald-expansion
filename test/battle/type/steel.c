#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Steel-type Pokémon cannot be poisoned")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_REGISTEEL].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_POISON_BARB); };
        OPPONENT(SPECIES_REGISTEEL);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Steel-type Pokémon are immune to Sandstorm damage")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_REGISTEEL].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGISTEEL);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Registeel is buffeted by the sandstorm!");
    }
}