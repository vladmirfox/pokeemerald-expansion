#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Rock-type Pokémon are immune to Sandstorm damage")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_NOSEPASS].types[0] == TYPE_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NOSEPASS);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        NOT MESSAGE("Foe Nosepass is buffeted by the sandstorm!");
    }
}