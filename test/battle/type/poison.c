#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Poison-type Pokémon cannot be poisoned")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_NIDORAN_M].types[0] == TYPE_POISON);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NIDORAN_M);
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_STING); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}


SINGLE_BATTLE_TEST("Poison-type Pokémon remove Toxic Spikes on switch in if grounded")
{
    u32 species;
    u32 item = ITEM_NONE;
    u32 move = MOVE_CELEBRATE;
    bool32 grounded;
    PARAMETRIZE { species = SPECIES_EKANS; grounded = TRUE; }
    PARAMETRIZE { species = SPECIES_ZUBAT; grounded = FALSE; }
    PARAMETRIZE { species = SPECIES_ZUBAT; item = ITEM_IRON_BALL; grounded = TRUE; }
    PARAMETRIZE { species = SPECIES_ZUBAT; move = MOVE_GRAVITY; grounded = TRUE; }
    PARAMETRIZE { species = SPECIES_ZUBAT; move = MOVE_INGRAIN; grounded = TRUE; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_EKANS].types[0] == TYPE_POISON);
        ASSUME(gSpeciesInfo[SPECIES_ZUBAT].types[0] == TYPE_POISON);
        ASSUME(gSpeciesInfo[SPECIES_ZUBAT].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC_SPIKES); MOVE(opponent, move); }
        TURN { MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        if (grounded) {
            NOT STATUS_ICON(opponent, poison: TRUE);
            MESSAGE("The poison spikes disappeared from around the opposing team's feet!");
            NOT STATUS_ICON(opponent, poison: TRUE);
        } else {
            NOT STATUS_ICON(opponent, poison: TRUE);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
            STATUS_ICON(opponent, poison: TRUE);
        }
    }
}

// This would test for what I believe to be a bug in the mainline games.
// A Pokémon that gets passed magnet rise should still remove the Toxic
// Spikes even though it is airborne.
// The test currently fails, because we don't incorporate this bug.
SINGLE_BATTLE_TEST("Poison-type Pokémon remove Toxic Spikes on switch in if affected by Magnet Rise")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_EKANS].types[0] == TYPE_POISON);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_EKANS);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MAGNET_RISE); }
        TURN { MOVE(player, MOVE_TOXIC_SPIKES); MOVE(opponent, MOVE_BATON_PASS); SEND_OUT(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
    } SCENE {
        NOT STATUS_ICON(opponent, poison: TRUE);
        MESSAGE("The poison spikes disappeared from around the opposing team's feet!");
        NOT STATUS_ICON(opponent, poison: TRUE);
    }
}
