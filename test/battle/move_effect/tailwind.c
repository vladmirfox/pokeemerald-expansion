#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_TAILWIND].effect == EFFECT_TAILWIND);
}

SINGLE_BATTLE_TEST("Tailwind applies for 4 turns")
{
    GIVEN {
        ASSUME(B_TAILWIND_TURNS >= GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(15); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TAILWIND); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_TAILWIND) "!");

        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");

        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");

        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");

        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
    }
}

DOUBLE_BATTLE_TEST("Tailwind affects partner on first turn")
{
    GIVEN {
        ASSUME(B_RECALC_TURN_AFTER_ACTIONS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); }
        PLAYER(SPECIES_WYNAUT) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(15); }
        OPPONENT(SPECIES_WYNAUT) { Speed(14); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TAILWIND); }
    } SCENE {
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_TAILWIND) "!");
        MESSAGE("Wynaut used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wobbuffet used " MOVE_NAME(MOVE_CELEBRATE) "!");
        MESSAGE("Foe Wynaut used " MOVE_NAME(MOVE_CELEBRATE) "!");
    }
}
