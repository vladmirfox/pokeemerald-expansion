#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_MEMENTO].effect == EFFECT_MEMENTO);
}

SINGLE_BATTLE_TEST("Sticky Web is placed on the wrong side after Memento")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MEMENTO); MOVE(opponent, MOVE_STICKY_WEB); SEND_OUT(player, 1); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, player);
        MESSAGE("Wobbuffet fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        MESSAGE("A sticky web spreads out on the ground around your team!");
    }
}
