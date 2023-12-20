#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mind's Eye allows to hit Ghost-type Pokémon with Normal- and Fighting-type moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_KARATE_CHOP; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_MINDS_EYE); };
        OPPONENT(SPECIES_GASTLY);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
    }
}

// No current official way to test this, effect based on Smogon's NatDex format.
SINGLE_BATTLE_TEST("Mind's Eye doesn't bypass a Ghost-type's Wonder Guard")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_KARATE_CHOP; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SCRAPPY); };
        OPPONENT(SPECIES_SHEDINJA) { Ability(ABILITY_WONDER_GUARD); };
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            HP_BAR(opponent);
        }
        ABILITY_POPUP(opponent, ABILITY_WONDER_GUARD);
        MESSAGE("Foe Shedinja avoided damage with Wonder Guard!");
    }
}

SINGLE_BATTLE_TEST("Mind's Eye prevents accuracy from being lowered")
{
    ASSUME(gBattleMoves[MOVE_SCRATCH].accuracy == 100);
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_MINDS_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe Wobbuffet's accuracy fell!");
        }
        ABILITY_POPUP(opponent, ABILITY_MINDS_EYE);
        MESSAGE("Foe Wobbuffet's Mind's Eye prevents accuracy loss!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Mind's Eye ignores target's evasion")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_DOUBLE_TEAM].effect == EFFECT_EVASION_UP);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_MINDS_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_TEAM); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_TEAM, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's evasiveness rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Mold Breaker-type abilities bypass Minds Eye's accuracy lowering prevention")
{
    u16 ability, species;
    PARAMETRIZE { ability = ABILITY_MOLD_BREAKER; species = SPECIES_PINSIR; }
#if P_GEN_5_POKEMON == TRUE
    PARAMETRIZE { ability = ABILITY_TURBOBLAZE;   species = SPECIES_RESHIRAM; }
    PARAMETRIZE { ability = ABILITY_TERAVOLT;     species = SPECIES_ZEKROM; }
#endif
    PASSES_RANDOMLY(gBattleMoves[MOVE_SCRATCH].accuracy * 3 / 4, 100, RNG_ACCURACY);

    GIVEN {
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_MINDS_EYE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_MINDS_EYE);
            MESSAGE("Foe Wobbuffet's Mind's Eye prevents accuracy loss!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Wobbuffet's accuracy fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

//// AI TESTS ////

AI_SINGLE_BATTLE_TEST("xxxAI doesn't use accuracy-lowering moves if it knows that the foe has Mind's Eye")
{
    u32 abilityAI = ABILITY_NONE, moveAI = MOVE_NONE, j = 0;

    for (j = MOVE_NONE + 1; j < MOVES_COUNT; j++)
    {
        if (gBattleMoves[j].effect == EFFECT_ACCURACY_DOWN || gBattleMoves[j].effect == EFFECT_ACCURACY_DOWN_2) {
            PARAMETRIZE{ moveAI = j; abilityAI = ABILITY_SWIFT_SWIM; }
            PARAMETRIZE{ moveAI = j; abilityAI = ABILITY_MOLD_BREAKER; }
        }
    }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_MINDS_EYE); }
        OPPONENT(SPECIES_BASCULEGION) { Moves(MOVE_CELEBRATE, moveAI); Ability(abilityAI); }
    } WHEN {
            TURN { MOVE(player, MOVE_TACKLE); }
            TURN { MOVE(player, MOVE_TACKLE);
                   if (abilityAI == ABILITY_MOLD_BREAKER) { SCORE_GT(opponent, moveAI, MOVE_CELEBRATE); }
                   else { SCORE_EQ(opponent, moveAI, MOVE_CELEBRATE); }
                }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        if (abilityAI == ABILITY_MOLD_BREAKER) { ANIMATION(ANIM_TYPE_MOVE, moveAI, opponent); }
    }
}
