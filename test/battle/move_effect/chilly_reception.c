#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_CHILLY_RECEPTION].effect == EFFECT_CHILLY_RECEPTION);
}

SINGLE_BATTLE_TEST("Chilly Reception switches the user out")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALARIAN);
        PLAYER(SPECIES_SLOWPOKE_GALARIAN);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        MESSAGE("Go! Slowpoke!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALARIAN);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING_GALARIAN);
        PLAYER(SPECIES_SLOWPOKE_GALARIAN) { HP(0); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if Wimp Out activates")
{
    GIVEN {
        ASSUME(P_GEN_7_POKEMON == TRUE);
        PLAYER(SPECIES_SLOWKING_GALARIAN);
        PLAYER(SPECIES_SLOWPOKE_GALARIAN);
        OPPONENT(SPECIES_WIMPOD) { MaxHP(100); HP(51); Ability(ABILITY_WIMP_OUT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        ABILITY_POPUP(opponent, ABILITY_WIMP_OUT);
        MESSAGE("2 sent out Slowking!");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception switches the user out if Wimp Out fails to activate")
{
    GIVEN {
        ASSUME(P_GEN_7_POKEMON == TRUE);
        PLAYER(SPECIES_SLOWKING_GALARIAN);
        PLAYER(SPECIES_SLOWPOKE_GALARIAN);
        OPPONENT(SPECIES_WIMPOD) { MaxHP(100); HP(51); Ability(ABILITY_WIMP_OUT); }
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        NOT ABILITY_POPUP(opponent);        
        MESSAGE("It started to snow!");
        MESSAGE("Your foe's weak! Get 'em, Slowpoke!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}
