#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_UPPER_HAND].effect == EFFECT_UPPER_HAND);
    ASSUME(gBattleMoves[MOVE_UPPER_HAND].priority == 3);
    ASSUME(MoveHasMoveEffect(MOVE_UPPER_HAND, MOVE_EFFECT_FLINCH) == TRUE);
}

SINGLE_BATTLE_TEST("Upper Hand succeeds if the target is using a priority attacking move and causes it to flinch")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_EXTREME_SPEED].category == BATTLE_CATEGORY_PHYSICAL);
        ASSUME(gBattleMoves[MOVE_EXTREME_SPEED].priority == 2);
        PLAYER(SPECIES_MIENSHAO);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXTREME_SPEED); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        HP_BAR(opponent);
        MESSAGE("Foe Wobbuffet flinched!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EXTREME_SPEED, opponent);
    }
}

SINGLE_BATTLE_TEST("Upper Hand fails if the target is using a status move")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_BABY_DOLL_EYES].category == BATTLE_CATEGORY_STATUS);
        ASSUME(gBattleMoves[MOVE_BABY_DOLL_EYES].priority == 1);
        PLAYER(SPECIES_MIENSHAO);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BABY_DOLL_EYES); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        MESSAGE("Mienshao used Upper Hand!");
        MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BABY_DOLL_EYES, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mienshao's Attack fell!");
    }
}

SINGLE_BATTLE_TEST("Upper Hand fails if the target is not using a priority move")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].category == BATTLE_CATEGORY_SPECIAL);
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].priority == 0);
        PLAYER(SPECIES_MIENSHAO);
        OPPONENT(SPECIES_COMFEY) { Ability(ABILITY_FLOWER_VEIL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAINING_KISS); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        MESSAGE("Mienshao used Upper Hand!");
        MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAINING_KISS, opponent);
        HP_BAR(player);
        HP_BAR(opponent);
    }
}

TO_DO_BATTLE_TEST("Upper Hand succeeds if the target's move is boosted in priority by an Ability")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].category == BATTLE_CATEGORY_SPECIAL);
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].priority == 0);
        PLAYER(SPECIES_MIENSHAO) { Speed(10); }
        OPPONENT(SPECIES_COMFEY) { Speed(5); Ability(ABILITY_TRIAGE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAINING_KISS); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        HP_BAR(opponent);
        MESSAGE("Foe Comfey flinched!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAINING_KISS, opponent);
    }
}

SINGLE_BATTLE_TEST("Upper Hand fails if the target moves first")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].category == BATTLE_CATEGORY_SPECIAL);
        ASSUME(gBattleMoves[MOVE_DRAINING_KISS].priority == 0);
        PLAYER(SPECIES_MIENSHAO) { Speed(5); }
        OPPONENT(SPECIES_COMFEY) { Speed(10); Ability(ABILITY_TRIAGE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAINING_KISS); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAINING_KISS, opponent);
        HP_BAR(player);
        HP_BAR(opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        MESSAGE("Mienshao used Upper Hand!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Upper Hand is boosted by Sheer Force")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_EXTREME_SPEED].category == BATTLE_CATEGORY_PHYSICAL);
        ASSUME(gBattleMoves[MOVE_EXTREME_SPEED].priority == 2);
        ASSUME(gBattleMoves[MOVE_UPPER_HAND].sheerForceBoost == TRUE);
        PLAYER(SPECIES_HARIYAMA) { Ability(ABILITY_SHEER_FORCE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXTREME_SPEED); MOVE(player, MOVE_UPPER_HAND); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPPER_HAND, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXTREME_SPEED, opponent);
        HP_BAR(player);
    }
}
