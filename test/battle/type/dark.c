#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dark-type Pokémon are immune to moves that gain priority due to Prankster")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_UMBREON].types[0] == TYPE_DARK);
        PLAYER(SPECIES_UMBREON);
        OPPONENT(SPECIES_MURKROW) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("It doesn't affect Umbreon…");
    }
}