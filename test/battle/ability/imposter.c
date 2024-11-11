#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("xxx")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_ZIGZAGOON)
        OPPONENT(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Ditto transformed into Zigzagoon using Imposter!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        MESSAGE("Zigzagoon used Spore!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("x2")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_ZIGZAGOON)
        OPPONENT(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("The opposing Ditto transformed into Zigzagoon using Imposter!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("Zigzagoon used Tackle!");
    }
}

SINGLE_BATTLE_TEST("1")
{
    KNOWN_FAILING; // Sleep Clause parts work, but Imposter seems broken with battle messages / targeting.
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gItemsInfo[ITEM_LAGGING_TAIL].holdEffect == HOLD_EFFECT_LAGGING_TAIL);
        PLAYER(SPECIES_ZIGZAGOON)
        PLAYER(SPECIES_DELIBIRD) { Ability(ABILITY_VITAL_SPIRIT); }
        OPPONENT(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); }
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
        TURN { SWITCH(opponent, 1); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("The opposing Ditto transformed into Zigzagoon using Imposter!");
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Ditto fell asleep!");
        MESSAGE("2 sent out Zigzagoon!");
        MESSAGE("2 sent out Ditto!");
        MESSAGE("The opposing Ditto's Vital Spirit cured its sleep problem!");
        MESSAGE("2 sent out Zigzagoon!");
        MESSAGE("Delibird used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Zigzagoon fell asleep!");
    }
}
