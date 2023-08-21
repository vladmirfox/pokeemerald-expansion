#include "global.h"
#include "test/battle.h"

#define METRONOME_TURNS 6

ASSUMPTIONS
{
    gItems[ITEM_METRONOME].holdEffect == HOLD_EFFECT_METRONOME;
}

const uq4_12_t MetronomeMultipliers[] = {
    UQ_4_12(1.2),
    UQ_4_12(1.4),
    UQ_4_12(1.6),
    UQ_4_12(1.8),
    UQ_4_12(2.0)
};

SINGLE_BATTLE_TEST("Metronome gradually boosts power by 20%")
{
    s16 damage[METRONOME_TURNS];
    u32 j;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_METRONOME); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < METRONOME_TURNS; ++j) {
            TURN { MOVE(player, MOVE_TACKLE); }
        }
    } SCENE {
        for (j = 0; j < METRONOME_TURNS; ++j) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
            HP_BAR(opponent, captureDamage: &damage[j]);
        }
    } THEN {
        for (j = 1; j < METRONOME_TURNS; ++j) {
            EXPECT_MUL_EQ(damage[0], MetronomeMultipliers[j-1], damage[j]);
        }
    }
}
