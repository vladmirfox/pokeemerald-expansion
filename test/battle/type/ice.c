#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Ice-type Pokémon are immune to Hail damage")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GLALIE].types[0] == TYPE_ICE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GLALIE);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        NOT MESSAGE("Foe Glalie is pelted by HAIL!");
    }
}

SINGLE_BATTLE_TEST("Ice-type Pokémon cannot be frozen")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GLALIE].types[0] == TYPE_ICE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GLALIE);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
        NOT STATUS_ICON(opponent, freeze: TRUE);
    }
}

SINGLE_BATTLE_TEST("Ice-type Pokémon are immune to Sheer Cold")
{
    GIVEN {
        ASSUME(B_SHEER_COLD_IMMUNITY >= GEN_7);
        ASSUME(gSpeciesInfo[SPECIES_GLALIE].types[0] == TYPE_ICE);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_GLALIE);
    } WHEN {
        TURN { MOVE(player, MOVE_SHEER_COLD); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SHEER_COLD, player);
        MESSAGE("It doesn't affect Foe Glalie…");
    }
}
