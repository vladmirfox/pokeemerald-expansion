#include "global.h"
#include "test/battle.h"
#include "constants/battle_z_move_effects.h"

// Basic Functionality
SINGLE_BATTLE_TEST("(Z-MOVE) Z-Moves do not retain priority")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); 
               MOVE(player, MOVE_QUICK_ATTACK, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Moves are not affected by -ate abilities")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_REFRIGERATE); Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_SWELLOW);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
        NOT { MESSAGE("It's super effective!"); }
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Moves deal 1/4 damage through protect", s16 damage)
{
    bool32 protected;
    PARAMETRIZE { protected = TRUE; }
    PARAMETRIZE { protected = FALSE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (protected)
            TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_Z_MOVE); MOVE(opponent, MOVE_PROTECT); }
        else
            TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(4), results[1].damage);
    }
}

// Status Z-Effects
SINGLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_RESET_STATS clears a battler's negative stat stages")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LEECH_SEED].zMove.effect == Z_EFFECT_RESET_STATS);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_GRASSIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWORDS_DANCE); MOVE(opponent, MOVE_SCREECH); }
        TURN { MOVE(player, MOVE_LEECH_SEED, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LEECH_SEED, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_ALL_STATS_UP raises all of a battler's stat stages by one")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CELEBRATE].zMove.effect == Z_EFFECT_ALL_STATS_UP_1);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_BOOST_CRITS raises a battler's critical hit ratio")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FORESIGHT].zMove.effect == Z_EFFECT_BOOST_CRITS);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FORESIGHT, gimmick: GIMMICK_Z_MOVE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESIGHT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_FOLLOW_ME redirects attacks to the user")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DESTINY_BOND].zMove.effect == Z_EFFECT_FOLLOW_ME);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_GHOSTIUM_Z); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DESTINY_BOND, gimmick: GIMMICK_Z_MOVE);
               MOVE(opponentLeft, MOVE_TACKLE, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DESTINY_BOND, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        NOT { HP_BAR(playerRight); }
        HP_BAR(playerLeft);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_RESTORE_REPLACEMENT_HP fully heals the replacement battler's HP")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PARTING_SHOT].zMove.effect == Z_EFFECT_RESTORE_REPLACEMENT_HP);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_DARKINIUM_Z); }
        PLAYER(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_PARTING_SHOT, gimmick: GIMMICK_Z_MOVE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PARTING_SHOT, player);
        HP_BAR(player);
    } THEN {
        EXPECT_EQ(player->species, SPECIES_WYNAUT);
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

// This tests the functionality of Z_EFFECT_RECOVER_HP and Z_EFFECT_ATK_UP_1 (and thus by extension all stat-up Z-effects)
SINGLE_BATTLE_TEST("(Z-MOVE) Z_EFFECT_CURSE activates Z_EFFECT_RECOVER_HP or Z_EFFECT_ATK_UP_1 depending on the type of the battler")
{
    u32 species;
    PARAMETRIZE { species = SPECIES_WOBBUFFET; }
    PARAMETRIZE { species = SPECIES_DUSCLOPS; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CURSE].zMove.effect == Z_EFFECT_CURSE);
        PLAYER(species) { Item(ITEM_GHOSTIUM_Z); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        if (species == SPECIES_DUSCLOPS) {
            HP_BAR(player);
            NOT { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
            HP_BAR(player);
        } else {
            NOT { HP_BAR(player); }
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
            NOT { HP_BAR(player); }
        }
    } THEN {
        if (species == SPECIES_DUSCLOPS) {
            EXPECT_MUL_EQ(player->maxHP, UQ_4_12(0.50), player->hp); // heal to full HP then cut by half
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        } else {
            EXPECT_EQ(player->hp, 1);
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2); // +1 from Curse, +1 from Z-Effect
        }
    }
}

// Specific Z-Move Interactions
SINGLE_BATTLE_TEST("(Z-MOVE) Z-Mirror Move raises the user's attack by two stages and copies the last used non-status move as a Z-Move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MIRROR_MOVE].zMove.effect == Z_EFFECT_ATK_UP_2);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_FLYINIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_MIRROR_MOVE, gimmick: GIMMICK_Z_MOVE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
        // extra turn to make sure that everything resets properly
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Mirror Move raises the user's attack by two stages and copies the last used status move regularly")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MIRROR_MOVE].zMove.effect == Z_EFFECT_ATK_UP_2);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_FLYINIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCREECH); MOVE(player, MOVE_MIRROR_MOVE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2); // Z-Screech would cause an additional attack stat stage (reaching +3)
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Copycat raises the user's accuracy by one stage and copies the last used non-status move as a Z-Move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_COPYCAT].zMove.effect == Z_EFFECT_ACC_UP_1);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_COPYCAT, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ACC], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Me First raises the user's speed by two stages and copies the last used non-status move as a Z-Move with boosted damage", s16 damage)
{
    u32 meFirst;
    PARAMETRIZE { meFirst = TRUE; }
    PARAMETRIZE { meFirst = FALSE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ME_FIRST].zMove.effect == Z_EFFECT_SPD_UP_2);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (meFirst)
            TURN { MOVE(player, MOVE_ME_FIRST, gimmick: GIMMICK_Z_MOVE); MOVE(opponent, MOVE_TACKLE); }
        else
            TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        if (meFirst)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } THEN {
        if (meFirst)
            EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 2);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, UQ_4_12(1.50), results[0].damage);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Nature Power transforms into different Z-Moves based on the current terrain")
{
    u32 terrainMove = MOVE_NONE;
    u32 zMove = MOVE_NONE;
    PARAMETRIZE { terrainMove = MOVE_ELECTRIC_TERRAIN;  zMove = gTypesInfo[TYPE_ELECTRIC].zMove; }
    PARAMETRIZE { terrainMove = MOVE_PSYCHIC_TERRAIN;   zMove = gTypesInfo[TYPE_PSYCHIC].zMove; }
    PARAMETRIZE { terrainMove = MOVE_GRASSY_TERRAIN;    zMove = gTypesInfo[TYPE_GRASS].zMove; }
    PARAMETRIZE { terrainMove = MOVE_MISTY_TERRAIN;     zMove = gTypesInfo[TYPE_FAIRY].zMove; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, terrainMove); }
        TURN { MOVE(player, MOVE_NATURE_POWER, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, terrainMove, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, zMove, player);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Hidden Power always transforms into Breakneck Blitz")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HIDDEN_POWER, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Weather Ball transforms into different Z-Moves based on current weather")
{
    u32 weatherMove = MOVE_NONE;
    u32 zMove = MOVE_NONE;
    PARAMETRIZE { weatherMove = MOVE_RAIN_DANCE;  zMove = gTypesInfo[TYPE_WATER].zMove; }
    PARAMETRIZE { weatherMove = MOVE_SUNNY_DAY;   zMove = gTypesInfo[TYPE_FIRE].zMove; }
    PARAMETRIZE { weatherMove = MOVE_SANDSTORM;   zMove = gTypesInfo[TYPE_ROCK].zMove; }
    PARAMETRIZE { weatherMove = MOVE_HAIL;        zMove = gTypesInfo[TYPE_ICE].zMove; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, weatherMove); }
        TURN { MOVE(player, MOVE_WEATHER_BALL, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, weatherMove, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, zMove, player);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Sleep Talk transforms a used non-status move into a Z-Move")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); Status1(STATUS1_SLEEP); Moves(MOVE_SLEEP_TALK, MOVE_ABSORB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLEEP_TALK, gimmick: GIMMICK_Z_MOVE); }
        TURN { MOVE(player, MOVE_SLEEP_TALK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BLOOM_DOOM, player);
    }
}

SINGLE_BATTLE_TEST("(Z-MOVE) Z-Sleep Talk turns Weather Ball into Breakneck Blitz even under rain")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); Status1(STATUS1_SLEEP); Moves(MOVE_SLEEP_TALK, MOVE_WEATHER_BALL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_SLEEP_TALK, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, player);
    }
}

// Miscellaneous Interactions
DOUBLE_BATTLE_TEST("(Z-MOVE) Instruct fails if the target last used a Z-Move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DESTINY_BOND].zMove.effect == Z_EFFECT_FOLLOW_ME);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_NORMALIUM_Z); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_Z_MOVE);
               MOVE(playerRight, MOVE_INSTRUCT, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, playerLeft);
        MESSAGE("Wynaut used Instruct!");
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("(Z-MOVE) Dancer does not use a Z-Move if the battler has used a Z-Move the same turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DESTINY_BOND].zMove.effect == Z_EFFECT_FOLLOW_ME);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_DANCER); Item(ITEM_NORMALIUM_Z); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft, gimmick: GIMMICK_Z_MOVE);
               MOVE(playerRight, MOVE_FIERY_DANCE, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKNECK_BLITZ, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerRight);
        ABILITY_POPUP(playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIERY_DANCE, playerLeft);
    }
}

// Signature Z-Moves
SINGLE_BATTLE_TEST("(Z-MOVE) Light That Burns the Sky uses the battler's highest attacking stat", s16 damage)
{
    bool32 useSwordsDance;
    PARAMETRIZE { useSwordsDance = FALSE; }
    PARAMETRIZE { useSwordsDance = TRUE; }
    GIVEN {
        PLAYER(SPECIES_NECROZMA_DUSK_MANE) { Item(ITEM_ULTRANECROZIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1000); MaxHP(1000); }; // hits hard lol
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_ULTRA_BURST); }
        if (useSwordsDance)
            TURN { MOVE(player, MOVE_SWORDS_DANCE); }
        TURN { MOVE(player, MOVE_PHOTON_GEYSER, gimmick: GIMMICK_Z_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ULTRA_BURST, player); // implicitly testing double gimmicks :^)
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LIGHT_THAT_BURNS_THE_SKY, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.0), results[1].damage);
    }
}
