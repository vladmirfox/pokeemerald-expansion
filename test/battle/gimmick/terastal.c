#include "global.h"
#include "test/battle.h"

// Base Power and STAB Checks

SINGLE_BATTLE_TEST("(TERA) Terastallizing into a different type preserves other STAB boosts", s16 damage1, s16 damage2)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_BULBASAUR) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_VINE_WHIP, tera: tera); }
        TURN { MOVE(player, MOVE_SLUDGE_BOMB); }
    } SCENE {
        MESSAGE("Bulbasaur used Vine Whip!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_VINE_WHIP, player);
        HP_BAR(opponent, captureDamage: &results[i].damage1);
        MESSAGE("Bulbasaur used Sludge Bomb!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLUDGE_BOMB, player);
        HP_BAR(opponent, captureDamage: &results[i].damage2);
    } FINALLY {
        EXPECT_EQ(results[0].damage1, results[1].damage1);
        EXPECT_EQ(results[0].damage2, results[1].damage2);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing does not affect the power of non-STAB moves", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEADBUTT, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Headbutt!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing into a different type gives that type 1.5x STAB", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEADBUTT, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Headbutt!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from no STAB to 1.5x STAB is a 1.5x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing into the same type gives that type 2x STAB", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_PSYCHIC, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Psychic!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 1.5x STAB to 2.0x STAB is a 1.33x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.33), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing into a different type with Adaptability gives 2.0x STAB", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_CRAWDAUNT) { Ability(ABILITY_ADAPTABILITY); TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEADBUTT, tera: tera); }
    } SCENE {
        MESSAGE("Crawdaunt used Headbutt!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from no STAB to 2.0x STAB is a 2.0x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing into the same type with Adaptability gives 2.25x STAB", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_CRAWDAUNT) { Ability(ABILITY_ADAPTABILITY); TeraType(TYPE_WATER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_PULSE, tera: tera); }
    } SCENE {
        MESSAGE("Crawdaunt used Water Pulse!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PULSE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 2x STAB to 2.25x STAB is a 1.125x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.125), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallizing boosts moves of the same type to 60 BP", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ABSORB].power == 20);
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_GRASS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ABSORB, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Absorb!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ABSORB, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 20 BP to 90 BP (60 * 1.5x) is a 4.5x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(4.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization's 60 BP floor occurs after Technician", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MEGA_DRAIN].power == 40);
        PLAYER(SPECIES_MR_MIME) { Ability(ABILITY_TECHNICIAN); TeraType(TYPE_GRASS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MEGA_DRAIN, tera: tera); }
    } SCENE {
        MESSAGE("Mr. Mime used Mega Drain!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEGA_DRAIN, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // This should be the same as a normal Tera boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization's 60 BP floor occurs after Technician", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_MR_MIME) { Ability(ABILITY_TECHNICIAN); TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STORED_POWER, tera: tera); }
    } SCENE {
        MESSAGE("Mr. Mime used Stored Power!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STORED_POWER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 45 BP (20 * 1.5x * 1.5x) to 120 BP (60 * 2.0x) is a 2.667x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.667), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization's 60 BP floor does not apply to multi-hit moves", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FURY_SWIPES, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Fury Swipes!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FURY_SWIPES, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization's 60 BP floor does not apply to priority moves", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Quick Attack!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

// Defensive Type Checks

SINGLE_BATTLE_TEST("(TERA) Terastallization changes type effectiveness", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_GRASS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, tera: tera); MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Water Gun!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization changes type effectiveness")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_FLYING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, tera: TRUE); MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Earthquake!");
        MESSAGE("It doesn't affect Wobbuffet…");
        NOT { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("(TERA) Terastallization persists across switches")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_FLYING); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, tera: TRUE); MOVE(opponent, MOVE_EARTHQUAKE); }
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        // turn 1
        MESSAGE("Foe Wobbuffet used Earthquake!");
        MESSAGE("It doesn't affect Wobbuffet…");
        NOT { HP_BAR(player); }
        // turn 4
        MESSAGE("Foe Wobbuffet used Earthquake!");
        MESSAGE("It doesn't affect Wobbuffet…");
        NOT { HP_BAR(player); }
    }
}

// Other Type Checks

SINGLE_BATTLE_TEST("(TERA) Terastallization changes the effect of Curse")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_GHOST); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE, tera: TRUE); }
    } SCENE {
        MESSAGE("Wobbuffet used Curse!");
        HP_BAR(player);
        MESSAGE("Wobbuffet cut its own HP and laid a CURSE on Foe Wobbuffet!");
        NOT { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
    }
}

SINGLE_BATTLE_TEST("(TERA) Roost does not remove the user's Flying type while Terastallized")
{
    GIVEN {
        PLAYER(SPECIES_ZAPDOS) { HP(1); TeraType(TYPE_FLYING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROOST, tera: TRUE); MOVE(opponent, MOVE_ICE_BEAM); }
    } SCENE {
        MESSAGE("Zapdos used Roost!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROOST, player);
        MESSAGE("Foe Wobbuffet used Ice Beam!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ICE_BEAM, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("(TERA) Type-changing moves fail against a Terastallized Pokemon")
{
    u16 move;
    PARAMETRIZE { move = MOVE_SOAK; }
    PARAMETRIZE { move = MOVE_FORESTS_CURSE; }
    PARAMETRIZE { move = MOVE_TRICK_OR_TREAT; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, tera: TRUE); MOVE(opponent, move); }
    } SCENE {
        if (move != MOVE_SOAK)
            NOT { ANIMATION(ANIM_TYPE_MOVE, move, opponent); }
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("(TERA) Reflect Type fails if used by a Terastallized Pokemon")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE, tera: TRUE); }
    } SCENE {
        MESSAGE("Wobbuffet used Reflect Type!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("(TERA) Reflect Type copies a Terastallized Pokemon's Tera Type")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_GHOST); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_CELEBRATE, tera: TRUE); }
        TURN { MOVE(opponent, MOVE_REFLECT_TYPE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        // turn 2
        MESSAGE("Foe Wobbuffet used Reflect Type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, opponent);
        // turn 3
        MESSAGE("Wobbuffet used Tackle!");
        MESSAGE("It doesn't affect Foe Wobbuffet…");
        NOT { HP_BAR(opponent); }
    }
}

SINGLE_BATTLE_TEST("(TERA) Synchronoise uses a Terastallized Pokemon's Tera Type")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_GHOST); }
        OPPONENT(SPECIES_WOBBUFFET) { TeraType(TYPE_GHOST); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SYNCHRONOISE); MOVE(player, MOVE_CELEBRATE, tera: TRUE); }
        TURN { MOVE(opponent, MOVE_SYNCHRONOISE, tera: TRUE); }
    } SCENE {
        // turn 1
        MESSAGE("Foe Wobbuffet used Synchronoise!");
        MESSAGE("It had no effect on Wobbuffet!");
        // turn 2
        MESSAGE("Foe Wobbuffet used Synchronoise!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYNCHRONOISE, opponent);
    }
}

SINGLE_BATTLE_TEST("(TERA) Revelation Dance uses a Terastallized Pokemon's Tera Type")
{
    GIVEN {
        ASSUME(P_GEN_7_POKEMON);
        PLAYER(SPECIES_ORICORIO) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_GENGAR);
    } WHEN {
        TURN { MOVE(player, MOVE_REVELATION_DANCE, tera: TRUE); }
    } SCENE {
        #if B_EXPANDED_MOVE_NAMES == TRUE
        MESSAGE("Oricorio used Revelation Dance!");
        #else
        MESSAGE("Oricorio used RvlationDnce!");
        #endif
        MESSAGE("It doesn't affect Foe Gengar…");
        NOT { HP_BAR(opponent); }
    }
}

// This tests that Tera STAB modifiers depend on the user's original types, too.
SINGLE_BATTLE_TEST("(TERA) Double Shock does not remove the user's Electric type while Terastallized, and changes STAB modifier depending on when it is used")
{
    s16 damage[4];
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DOUBLE_SHOCK].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE);
        PLAYER(SPECIES_PICHU) { TeraType(TYPE_ELECTRIC); }
        PLAYER(SPECIES_WOBBUFFET)
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); MOVE(opponent, MOVE_RECOVER); }
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK, tera: TRUE); MOVE(opponent, MOVE_RECOVER); }
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); MOVE(opponent, MOVE_RECOVER); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_RECOVER); }
        TURN { SWITCH(player, 0); MOVE(opponent, MOVE_RECOVER); }
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); MOVE(opponent, MOVE_RECOVER); }
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); }
    } SCENE {
        // turn 1 - regular STAB
        MESSAGE("Pichu used Double Shock!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        // turn 2 - lost Electric type, gained back from Tera
        MESSAGE("Pichu used Double Shock!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
        // turn 3 - retained Electric type
        MESSAGE("Pichu used Double Shock!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        // turn 6 - original type reset, regular STAB + Tera boost
        MESSAGE("Pichu used Double Shock!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        HP_BAR(opponent, captureDamage: &damage[2]);
        // turn 7 - regular STAB + Tera boost stays
        MESSAGE("Pichu used Double Shock!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        HP_BAR(opponent, captureDamage: &damage[3]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_MUL_EQ(damage[0], Q_4_12(1.333), damage[2]);
        EXPECT_EQ(damage[2], damage[3]);
    }
}

SINGLE_BATTLE_TEST("(TERA) Transform does not copy the target's Tera Type, and if the user is Terastallized it keeps its own Tera Type")
{
    KNOWN_FAILING; // Transform seems to be bugged in tests.
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE, MOVE_EARTHQUAKE); TeraType(TYPE_GHOST); }
        OPPONENT(SPECIES_DITTO) { TeraType(TYPE_FLYING); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, tera: TRUE); MOVE(opponent, MOVE_TRANSFORM); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
        // TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE, target: player, tera: TRUE); }
    } SCENE {
        // turn 2
        MESSAGE("Wobbuffet used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
        HP_BAR(opponent);
        // turn 3
        MESSAGE("Wobbuffet used Tackle!");
        MESSAGE("It doesn't affect Ditto…");
        NOT { HP_BAR(opponent); }
    }
}
