#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Ghost-type Pokémon can bypass effects that prevent recall or escape")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GENGAR].types[0] == TYPE_GHOST);
        PLAYER(SPECIES_GENGAR);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_SHADOW_TAG); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        NOT MESSAGE("Foe Wobbuffet prevents escape with Shadow Tag!");
    }
}

TO_DO_BATTLE_TEST("Ghost-type Pokémon are guaranteed to flee from any wild battle regardless of Speed")