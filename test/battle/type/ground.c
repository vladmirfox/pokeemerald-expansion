#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Ground-type Pokémon are immune to Sandstorm damage")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SANDSLASH].types[0] == TYPE_GROUND);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SANDSLASH);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Sandslash is buffeted by the sandstorm!");
    }
}