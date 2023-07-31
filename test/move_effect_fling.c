#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_FLING].effect == EFFECT_FLING);
}

SINGLE_BATTLE_TEST("Fling fails if pokemon holds no item")
{
    u16 item;

    PARAMETRIZE {item = ITEM_NONE; }
    PARAMETRIZE {item = ITEM_RAZOR_CLAW; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Item(item); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING);}
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        if (item != ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}
