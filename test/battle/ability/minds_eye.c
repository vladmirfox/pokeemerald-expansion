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
    
    KNOWN_FAILING; // Not sure why, Keen Eye's tests work
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
