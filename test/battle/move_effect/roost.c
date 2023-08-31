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
        PLAYER(SPECIES_WOBBUFFET) { HP(100); }
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

SINGLE_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded down, in Gen 4")
{
    s16 hp;

    GIVEN {
        //ASSUME(B_UPDATED_MOVE_DATA <= GEN_4)
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(99); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        HP_BAR(player, captureHP: &hp);
    } THEN {
        EXPECT(hp == 50);
    }
}

SINGLE_BATTLE_TEST("Roost recovers 50% of the user's Max HP, rounded up, in Gen 5+")
{    
    s16 hp;

    KNOWN_FAILING; // All healing is currently rounded down
    GIVEN {
        //ASSUME(B_UPDATED_MOVE_DATA >= GEN_5)
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(99); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        HP_BAR(player, captureHP: &hp);
    } THEN {
        EXPECT(hp == 51);
    }
}

SINGLE_BATTLE_TEST("Roost suppresses the user's Flying-typing this turn, then restores it at the end of the turn")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SKARMORY].types[0] == TYPE_STEEL);
        ASSUME(gSpeciesInfo[SPECIES_SKARMORY].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_SKARMORY) { HP(50); MaxHP(100); Ability(ABILITY_STURDY); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        // Turn 1: EQ hits when Roosted
        MESSAGE("Skarmory used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Skarmory regained health!");
        MESSAGE("Foe Wobbuffet used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It's super effective!");
        // Turn 2: EQ has no effect because Roost expired
        MESSAGE("Foe Wobbuffet used Earthquake!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It doesn't affect Skarmory…");
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Flying/Flying type, treats the user as a Mystery/Mystery until the end of the turn in Gen 4")
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
        ASSUME(P_GEN_5_POKEMON == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[0] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_TORNADUS) { HP(50); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        MESSAGE("Tornadus used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Tornadus regained health!");
        ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
        // Should not see any effectiveness messages
        NONE_OF {
            MESSAGE("It's super effective!");
            MESSAGE("It's not very effective…");
            MESSAGE("It doesn't affect Tornadus…");
        }
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Flying/Flying type, treats the user as a Normal/Normal type until the end of the turn in Gen 5+")
{
    GIVEN {
        ASSUME(B_ROOST_PURE_FLYING >= GEN_5);
        ASSUME(P_GEN_5_POKEMON == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[0] == TYPE_FLYING);
        ASSUME(gSpeciesInfo[SPECIES_TORNADUS].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_TORNADUS) { HP(50); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, MOVE_LICK); }
    } SCENE {
        MESSAGE("Tornadus used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Tornadus regained health!");
        MESSAGE("Foe Wobbuffet used Lick!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_LICK, opponent);
        MESSAGE("It doesn't affect Tornadus…");
    }
}

SINGLE_BATTLE_TEST("Roost, if used by a Mystery/Flying type, treats the user as a Mystery/Mystery type until the end of the turn in Gen 5+", s16 damage)
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
        ASSUME(gSpeciesInfo[SPECIES_MOLTRES].types[0] == TYPE_FIRE);
        ASSUME(gSpeciesInfo[SPECIES_MOLTRES].types[1] == TYPE_FLYING);
        PLAYER(SPECIES_MOLTRES) { HP(300); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_ROOST); MOVE(opponent, damagingMove); }
    } SCENE {
        // Turn 1: Use Burn Up to change from Fire/Flying to Mystery/Flying
        MESSAGE("Moltres used Burn Up!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        MESSAGE("Moltres burned itself out!");
        // Turn 2: Use Roost to now be treated as a Mystery/Mystery type
        MESSAGE("Moltres used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Moltres regained health!");
        ANIMATION(ANIM_TYPE_MOVE, damagingMove, opponent);
        NONE_OF {
            MESSAGE("It's super effective!");
            MESSAGE("It's not very effective…");
            MESSAGE("It doesn't affect Tornadus…");
        }
    } 
}

DOUBLE_BATTLE_TEST("Roost suppresses the user's not-yet-aquired Flying-type this turn")
{
    GIVEN {
        PLAYER(SPECIES_KECLEON) { Speed(40); HP(150); Ability(ABILITY_COLOR_CHANGE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        OPPONENT(SPECIES_PIDGEY) { Speed(30); }
        OPPONENT(SPECIES_SANDSHREW) { Speed(20); }        
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROOST); 
               MOVE(opponentLeft, MOVE_GUST, target: playerLeft);
               MOVE(opponentRight, MOVE_MUD_SLAP, target: playerLeft); }
    } SCENE {
        MESSAGE("Kecleon used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, playerLeft);
        MESSAGE("Kecleon regained health!");
        MESSAGE("Foe Pidgey used Gust!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, opponentLeft);
        MESSAGE("Kecleon's Color Change made it the Flying type!");
        MESSAGE("Foe Sandshrew used Mud-Slap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MUD_SLAP, opponentRight);
        MESSAGE("Kecleon's Color Change made it the Ground type!");
    }
}

TO_DO_BATTLE_TEST("Roost does not affect the user's 3rd type");
// Unless the user somehow gains the Flying-type as a 3rd type,
// then it'll be suppressed

TO_DO_BATTLE_TEST("Roost does not interfere with other type-setting effects like Soak");
// If Moltres uses Roost first and then gets hit with Soak, it will become a pure Water-type
// and remain a pure Water-type after the end of the turn

TO_DO_BATTLE_TEST("Roost's effect does not lift until other certain end-of-turn effects");
// A Roosted Pokemon will benefit from Grassy Terrain's end-of-turn healing, for example
// Not sure exactly what the order is among all effects

// What typing does Transform copy? Does it copy the Roost "status"?

// Does Delta Stream protect a Roosted Flying-type? No it doesn't (Tested in ORAS)
// Delta Stream and being Roosted both protect from super effective damage against
// the user's Flying-type, however being Roosted will prevent the message that
// usually appears when Delta Stream protects a Flying-type.
