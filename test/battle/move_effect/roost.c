#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_ROOST].effect == EFFECT_ROOST);
}

TO_DO_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded down, in Gen 4");
// {
//     GIVEN {
//         PLAYER(SPECIES_WOBBUFFET) { HP(100); MaxHP(199); }
//         OPPONENT(SPECIES_WOBBUFFET);
//     } WHEN {
//         TURN { MOVE(player, MOVE_ROOST); }
//     } SCENE {
//         ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
//         HP_BAR(player, damage: -(199 / 2));
//     }
// }

TO_DO_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded up, in Gen 5+");
// {
//     GIVEN {
//         PLAYER(SPECIES_WOBBUFFET) { HP(100); MaxHP(199); }
//         OPPONENT(SPECIES_WOBBUFFET);
//     } WHEN {
//         TURN { MOVE(player, MOVE_ROOST); }
//     } SCENE {
//         ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
//         HP_BAR(player, damage: -(199 / 2));
//     }
// }

SINGLE_BATTLE_TEST("Roost fails if Heal Block applies")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); MOVE(player, MOVE_ROOST); }
    } SCENE {
        MESSAGE("Wobbuffet was prevented from healing!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        NOT HP_BAR(opponent);
        NOT HP_BAR(player);
    }
}

TO_DO_BATTLE_TEST("Roost, if used by a _____/Flying-type, removes the user's Flying type until the end of the turn");

TO_DO_BATTLE_TEST("Roost, if used by a pure Flying-type, leaves the user typeless until the end of the turn in Gen 4");

TO_DO_BATTLE_TEST("Roost, if used by a pure Flying-type, changes the user to pure Normal-type until the end of the turn in Gen 5+");

// Shorter description?
TO_DO_BATTLE_TEST("Roost, if used by a pure Flying-type and under the effects of Trick-or-Treat or Forest's Curse, changes the user to a Normal-type while retaining the added type until the end of the turn");

TO_DO_BATTLE_TEST("Roost, upon making the user lose their Flying-type, also makes the user grounded.");