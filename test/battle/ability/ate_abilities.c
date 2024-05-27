#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Galvnaize can not turn certain moves into electric type")
{
    u32 move;

    PARAMETRIZE { move = MOVE_HIDDEN_POWER; }
    PARAMETRIZE { move = MOVE_WEATHER_BALL; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; }

    GIVEN {
        PLAYER(SPECIES_KRABBY);
        OPPONENT(SPECIES_GEODUDE_ALOLAN) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Galvnaize turns a normal type move into Electric")
{
    GIVEN {
        PLAYER(SPECIES_KRABBY);
        OPPONENT(SPECIES_GEODUDE_ALOLAN) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

TO_DO_BATTLE_TEST("Pixilate turns a normal type move into Fairy");
TO_DO_BATTLE_TEST("Refrigerate turns a normal type move into Ice");
TO_DO_BATTLE_TEST("Aerilate turns a normal type move into Flying");
