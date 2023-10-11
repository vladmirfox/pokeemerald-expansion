#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_SCRATCH].accuracy == 100);
}

SINGLE_BATTLE_TEST("Keen Eye prevents accuracy from being lowered")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SAND_ATTACK].effect == EFFECT_ACCURACY_DOWN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY) { Ability(ABILITY_KEEN_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe Pidgey's accuracy fell!");
        }
        ABILITY_POPUP(opponent, ABILITY_KEEN_EYE);
        MESSAGE("Foe Pidgey's Keen Eye prevents accuracy loss!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Keen Eye ignores target's evasion")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_DOUBLE_TEAM].effect == EFFECT_EVASION_UP);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY) { Ability(ABILITY_KEEN_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_TEAM); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_TEAM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's evasiveness rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Mold Breaker-type abilities bypass Keen Eye's accuracy lowering prevention")
{
    u16 ability, species;
    PARAMETRIZE { ability = ABILITY_MOLD_BREAKER; species = SPECIES_PINSIR; }
#if P_GEN_5_POKEMON == TRUE
    PARAMETRIZE { ability = ABILITY_TURBOBLAZE;   species = SPECIES_RESHIRAM; }
    PARAMETRIZE { ability = ABILITY_TERAVOLT;     species = SPECIES_ZEKROM; }
#endif
    PASSES_RANDOMLY(gBattleMoves[MOVE_SCRATCH].accuracy * 3 / 4, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SAND_ATTACK].effect == EFFECT_ACCURACY_DOWN);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_PIDGEY) { Ability(ABILITY_KEEN_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_KEEN_EYE);
            MESSAGE("Foe Pidgey's Keen Eye prevents accuracy loss!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Pidgey's accuracy fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
