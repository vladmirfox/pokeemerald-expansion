#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate prevent accuracy stage reduction from moves")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FLASH].effect == EFFECT_ACCURACY_DOWN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLASH); }
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        if (species == SPECIES_HITMONCHAN)
            MESSAGE("Foe Hitmonchan's Keen Eye prevents accuracy loss!");
        else
            MESSAGE("Foe Staryu's Illuminate prevents accuracy loss!");
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate are ignored by Mold Breaker")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FLASH].effect == EFFECT_ACCURACY_DOWN);
        PLAYER(SPECIES_PINSIR) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLASH); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MOLD_BREAKER);
        MESSAGE("Pinsir breaks the mold!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLASH, player);
        if (species == SPECIES_HITMONCHAN)
            MESSAGE("Foe Hitmonchan's accuracy fell!");
        else
            MESSAGE("Foe Staryu's accuracy fell!");
        NONE_OF {
            ABILITY_POPUP(opponent, ability);
            if (species == SPECIES_HITMONCHAN)
                MESSAGE("Foe Hitmonchan's Keen Eye prevents accuracy loss!");
            else
                MESSAGE("Foe Staryu's Illuminate prevents accuracy loss!");
        }
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate don't prevent Topsy-Turvy")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_HONE_CLAWS].effect == EFFECT_ATTACK_ACCURACY_UP);
        ASSUME(gBattleMoves[MOVE_TOPSY_TURVY].effect == EFFECT_TOPSY_TURVY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_HONE_CLAWS); MOVE(player, MOVE_TOPSY_TURVY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, opponent);
        if (species == SPECIES_HITMONCHAN)
        {
            MESSAGE("Foe Hitmonchan's Attack rose!");
            MESSAGE("Foe Hitmonchan's accuracy rose!");
        }
        else
        {
            MESSAGE("Foe Staryu's Attack rose!");
            MESSAGE("Foe Staryu's accuracy rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
        if (species == SPECIES_HITMONCHAN)
            MESSAGE("Foe Hitmonchan's stat changes were all reversed!");
        else
            MESSAGE("Foe Staryu's stat changes were all reversed!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate don't prevent Spectral Thief from resetting positive accuracy stage changes")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_HONE_CLAWS].effect == EFFECT_ATTACK_ACCURACY_UP);
        ASSUME(gBattleMoves[MOVE_SPECTRAL_THIEF].effect == EFFECT_SPECTRAL_THIEF);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_HONE_CLAWS); MOVE(player, MOVE_SPECTRAL_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, opponent);
        if (species == SPECIES_HITMONCHAN)
        {
            MESSAGE("Foe Hitmonchan's Attack rose!");
            MESSAGE("Foe Hitmonchan's accuracy rose!");
        }
        else
        {
            MESSAGE("Foe Staryu's Attack rose!");
            MESSAGE("Foe Staryu's accuracy rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
        MESSAGE("Wobbuffet stole the target's boosted stats!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate don't prevent receiving negative Attack stage changes from Baton Pass")
{
    u16 ability;
    u32 species;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FLASH].effect == EFFECT_ACCURACY_DOWN);
        ASSUME(gBattleMoves[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLASH);
               MOVE(opponent, MOVE_BATON_PASS);
               SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLASH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        if (species == SPECIES_HITMONCHAN)
            MESSAGE("2 sent out Hitmonchan!");
        else
            MESSAGE("2 sent out Staryu!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ACC], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Keen Eye & Gen9+ Illuminate ignore the target's evasion stat")
{
    u16 ability;
    u32 species;
    u8 j;
    PARAMETRIZE { species = SPECIES_HITMONCHAN; ability = ABILITY_KEEN_EYE; }
    if (B_ILLUMINATE_EFFECT >= GEN_9)
        PARAMETRIZE { species = SPECIES_STARYU; ability = ABILITY_ILLUMINATE; }
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FLASH].effect == EFFECT_ACCURACY_DOWN);
        ASSUME(gBattleMoves[MOVE_DOUBLE_TEAM].effect == EFFECT_EVASION_UP);
        ASSUME(gBattleMoves[MOVE_TACKLE].accuracy == 100);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        for (j = 0; j < 5; j++) TURN { MOVE(player, MOVE_DOUBLE_TEAM); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}
