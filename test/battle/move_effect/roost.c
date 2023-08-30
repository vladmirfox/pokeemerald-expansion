#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_ROOST].effect == EFFECT_ROOST);
    // One attack of each type to verify typelessness
    ASSUME(gBattleMoves[MOVE_POUND].type == TYPE_NORMAL);
    ASSUME(gBattleMoves[MOVE_KARATE_CHOP].type == TYPE_FIGHTING);
    ASSUME(gBattleMoves[MOVE_GUST].type == TYPE_FLYING);
    ASSUME(gBattleMoves[MOVE_POISON_STING].type == TYPE_POISON);
    ASSUME(gBattleMoves[MOVE_EARTHQUAKE].type == TYPE_GROUND);
    ASSUME(gBattleMoves[MOVE_ROCK_THROW].type == TYPE_ROCK);
    ASSUME(gBattleMoves[MOVE_LEECH_LIFE].type == TYPE_BUG);
    ASSUME(gBattleMoves[MOVE_LICK].type == TYPE_GHOST);
    ASSUME(gBattleMoves[MOVE_STEEL_WING].type == TYPE_STEEL);
    ASSUME(gBattleMoves[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gBattleMoves[MOVE_WATER_GUN].type == TYPE_WATER);
    ASSUME(gBattleMoves[MOVE_VINE_WHIP].type == TYPE_GRASS);
    ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
    ASSUME(gBattleMoves[MOVE_CONFUSION].type == TYPE_PSYCHIC);
    ASSUME(gBattleMoves[MOVE_ICE_BEAM].type == TYPE_ICE);
    ASSUME(gBattleMoves[MOVE_DRAGON_BREATH].type == TYPE_DRAGON);
    ASSUME(gBattleMoves[MOVE_BITE].type == TYPE_DARK);
    ASSUME(gBattleMoves[MOVE_DISARMING_VOICE].type == TYPE_FAIRY);
}

SINGLE_BATTLE_TEST("Roost fails when user is at full HP")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        MESSAGE("Wobbuffet's HP is full!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Roost fails if the user is under the effects of Heal Block")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BLOCK, opponent);
        MESSAGE("Wobbuffet was prevented from healing!"); // Message when Heal Block is applied
        MESSAGE("Wobbuffet was prevented from healing!"); // Message when trying to heal under Heal Block
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded down, in Gen 4", s16 hp)
{
    u16 maxHP;
    PARAMETRIZE { maxHP = 199; }
    PARAMETRIZE { maxHP = 200; }

    GIVEN {
        //ASSUME(B_HEALING_ROUNDED_UP <= GEN_4) // If this is added as a config
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(maxHP); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        HP_BAR(player, captureHP: &results[i].hp);
    } FINALLY {
        EXPECT(results[0].hp == results[1].hp - 1);
    }
}

SINGLE_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded up, in Gen 5+", s16 hp)
{    
    u16 maxHP;

    KNOWN_FAILING; // All healing is currently rounded down
    PARAMETRIZE { maxHP = 199; }
    PARAMETRIZE { maxHP = 200; }

    GIVEN {
        //ASSUME(B_HEALING_ROUNDED_UP >= GEN_5) // If this is added as a config
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(maxHP); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        HP_BAR(player, captureHP: &results[i].hp);
    } FINALLY {
        EXPECT(results[0].hp == results[1].hp);
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a half Flying-type, removes the user's Flying type until the end of the turn")
{
    s16 damage;

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SKARMORY].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_SKARMORY) { Speed(300); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Skarmory regained health!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        HP_BAR(player, captureDamage: &damage);
    } THEN {
        EXPECT_GT(damage, 0);
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a pure Flying-type, leaves the user typeless until the end of the turn in Gen 4")
{
    //s16 damage;
    u32 damagingMove;
    PARAMETRIZE{ damagingMove = MOVE_POUND; }
    PARAMETRIZE{ damagingMove = MOVE_KARATE_CHOP; }
    PARAMETRIZE{ damagingMove = MOVE_GUST; }
    PARAMETRIZE{ damagingMove = MOVE_POISON_STING; }
    PARAMETRIZE{ damagingMove = MOVE_EARTHQUAKE; }
    PARAMETRIZE{ damagingMove = MOVE_ROCK_THROW; }
    PARAMETRIZE{ damagingMove = MOVE_LEECH_LIFE; }
    PARAMETRIZE{ damagingMove = MOVE_LICK; }
    PARAMETRIZE{ damagingMove = MOVE_STEEL_WING; }
    PARAMETRIZE{ damagingMove = MOVE_EMBER; }
    PARAMETRIZE{ damagingMove = MOVE_WATER_GUN; }
    PARAMETRIZE{ damagingMove = MOVE_VINE_WHIP; }
    PARAMETRIZE{ damagingMove = MOVE_THUNDER_SHOCK; }
    PARAMETRIZE{ damagingMove = MOVE_CONFUSION; }
    PARAMETRIZE{ damagingMove = MOVE_ICE_BEAM; }
    PARAMETRIZE{ damagingMove = MOVE_DRAGON_BREATH; }
    PARAMETRIZE{ damagingMove = MOVE_BITE; }
    PARAMETRIZE{ damagingMove = MOVE_DISARMING_VOICE; }

    GIVEN {
        ASSUME(B_ROOST_PURE_FLYING <= GEN_4);
        ASSUME(P_GEN_8_POKEMON == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_CORVISQUIRE].types[0] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_CORVISQUIRE].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_CORVISQUIRE) { Speed(300); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Corvisquir regained health!");
        ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
        NOT MESSAGE("It's super effective!");
        NOT MESSAGE("It's not very effective.");
        NOT MESSAGE("It doesn't affect Corvisquir…");
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a pure Flying-type, changes the user to pure Normal-type until the end of the turn in Gen 5+")
{
    GIVEN {
        ASSUME(B_ROOST_PURE_FLYING >= GEN_5);
        ASSUME(gSpeciesInfo[SPECIES_CORVISQUIRE].types[0] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_CORVISQUIRE].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_CORVISQUIRE) { Speed(300); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_LICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Corvisquir regained health!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_LICK, opponent);
        MESSAGE("It doesn't affect Corvisquir…");
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Fire/Flying-type that has lost its Fire type due to Burn Up, leaves the user typeless until the end of the turn in Gen 5+")
{
    u32 damagingMove;
    PARAMETRIZE{ damagingMove = MOVE_POUND; }
    PARAMETRIZE{ damagingMove = MOVE_KARATE_CHOP; }
    PARAMETRIZE{ damagingMove = MOVE_GUST; }
    PARAMETRIZE{ damagingMove = MOVE_POISON_STING; }
    PARAMETRIZE{ damagingMove = MOVE_EARTHQUAKE; }
    PARAMETRIZE{ damagingMove = MOVE_ROCK_THROW; }
    PARAMETRIZE{ damagingMove = MOVE_LEECH_LIFE; }
    PARAMETRIZE{ damagingMove = MOVE_LICK; }
    PARAMETRIZE{ damagingMove = MOVE_STEEL_WING; }
    PARAMETRIZE{ damagingMove = MOVE_EMBER; }
    PARAMETRIZE{ damagingMove = MOVE_WATER_GUN; }
    PARAMETRIZE{ damagingMove = MOVE_VINE_WHIP; }
    PARAMETRIZE{ damagingMove = MOVE_THUNDER_SHOCK; }
    PARAMETRIZE{ damagingMove = MOVE_CONFUSION; }
    PARAMETRIZE{ damagingMove = MOVE_ICE_BEAM; }
    PARAMETRIZE{ damagingMove = MOVE_DRAGON_BREATH; }
    PARAMETRIZE{ damagingMove = MOVE_BITE; }
    PARAMETRIZE{ damagingMove = MOVE_DISARMING_VOICE; }

    GIVEN {
        ASSUME(B_ROOST_PURE_FLYING >= GEN_5);
        ASSUME(P_GEN_8_POKEMON == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_MOLTRES].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_MOLTRES].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_MOLTRES) { Speed(300); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Moltres regained health!");
        ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
        NOT MESSAGE("It's super effective!");
        NOT MESSAGE("It's not very effective.");
        NOT MESSAGE("It doesn't affect Moltres…");
    } 
}

TO_DO_BATTLE_TEST("Roost, if used by a pure Flying-type and under the effects of Trick-or-Treat or Forest's Curse, changes the user to a Normal-type while retaining the added type until the end of the turn");
// Shorter description?
// Does any of Roost's type changing effects touch type 3?

TO_DO_BATTLE_TEST("Roost interaction with other type-setting effects like Soak")
// If Motres uses Roost first and then gets hit with Soak, at the end of the turn does it become:
// 1. Fire/Flying
// 2. Water/Flying
// 3. Water

TO_DO_BATTLE_TEST("Roost suppresses the user's Flying-type");

TO_DO_BATTLE_TEST("Roost suppresses the user's not-yet-aquired Flying-type this turn")
// A Pokemon with the Color Change ability that uses Roost, then gets hit by a 
// Flying-type move, changes to a Flying-type, but it is still suppressed
// until the end of the turn due to Roost.

TO_DO_BATTLE_TEST("Roost does not restore Flying-type until other certain end-of-turn effects");
// A Roosted Pokemon will benefit from Grassy Terrain's healing, for example