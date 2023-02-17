#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_ROAR].effect == EFFECT_ROAR);
}

SINGLE_BATTLE_TEST("Roar after Drizzle switches the target")
{
    GIVEN {
        PLAYER(SPECIES_KYOGRE) { Ability(ABILITY_DRIZZLE); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, opponent);
        MESSAGE("Wobbuffet was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Shields Down activates at the start of battle")
{
    GIVEN {
        PLAYER(SPECIES_MINIOR_CORE_RED) { Ability(ABILITY_SHIELDS_DOWN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("Go! Minior!");
        ABILITY_POPUP(player, ABILITY_SHIELDS_DOWN);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
    }
}
