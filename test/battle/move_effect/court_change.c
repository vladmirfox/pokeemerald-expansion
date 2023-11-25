#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_COURT_CHANGE].effect == EFFECT_COURT_CHANGE);
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the opponent")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(opponentLeft, MOVE_SPIKES); MOVE(opponentRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerLeft, 2); SWITCH(opponentLeft, 2); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_STICKY_WEB) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_STEALTH_ROCK) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_SPIKES) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_TOXIC_SPIKES) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_COURT_CHANGE) "!");
        MESSAGE("Wynaut swapped the battle effects affecting each side!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_WYNAUT) "!");
        NONE_OF {
            MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " is hurt by spikes!");
            MESSAGE("Pointed stones dug into Wynaut!");
            MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " was poisoned!");
            MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " was caught in a Sticky Web!");
        }
        MESSAGE("2 sent out " SPECIES_NAME(SPECIES_WOBBUFFET) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " is hurt by spikes!");
        MESSAGE("Pointed stones dug into Foe Wobbuffet!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " was poisoned!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " was caught in a Sticky Web!");
    }
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the player")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_SPIKES); MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_STICKY_WEB) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_STEALTH_ROCK) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_SPIKES) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_TOXIC_SPIKES) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_COURT_CHANGE) "!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_WOBBUFFET) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " is hurt by spikes!");
        MESSAGE("Pointed stones dug into Wobbuffet!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " was poisoned!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " was caught in a Sticky Web!");
        MESSAGE("2 sent out " SPECIES_NAME(SPECIES_WYNAUT) "!");
        NONE_OF {
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " is hurt by spikes!");
            MESSAGE("Pointed stones dug into Foe Wynaut!");
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " was poisoned!");
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " was caught in a Sticky Web!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_LUCKY_CHANT); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_MIST) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_SAFEGUARD) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_LUCKY_CHANT) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_REFLECT) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_LIGHT_SCREEN) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_TAILWIND) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_COURT_CHANGE) "!");
        MESSAGE("Wynaut swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Ally's Mist wore off!");
        MESSAGE("Ally's party is no longer protected by Safeguard!");
        MESSAGE("Ally's Reflect wore off!");
        MESSAGE("Your team's Lucky Chant wore off!");
        MESSAGE("Your team's tailwind petered out!");
        MESSAGE("Ally's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_LUCKY_CHANT); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_MIST) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_SAFEGUARD) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_LUCKY_CHANT) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_REFLECT) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_LIGHT_SCREEN) "!");
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_TAILWIND) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_COURT_CHANGE) "!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Foe's Mist wore off!");
        MESSAGE("Foe's party is no longer protected by Safeguard!");
        MESSAGE("Foe's Reflect wore off!");
        MESSAGE("The opposing team's Lucky Chant wore off!");
        MESSAGE("The opposing team's tailwind petered out!");
        MESSAGE("Foe's Light Screen wore off!");
    }
}
