#include "global.h"
#include "test_battle.h"

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
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_PSYCHIC); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSION, tera: tera); }
    } SCENE {
        MESSAGE("Wobbuffet used Confusion!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSION, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 75 BP (50 * 1.5x) to 120 BP (60 * 2.0x) is a 1.6x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.6), results[1].damage);
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
        TURN { MOVE(player, MOVE_CONFUSION, tera: tera); }
    } SCENE {
        MESSAGE("Mr. Mime used Confusion!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSION, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // This should be the same as a normal Tera boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.333), results[1].damage);
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
        NOT { HP_BAR(player); }
        MESSAGE("It doesn't affect Wobbuffet…");
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
        NOT { HP_BAR(player); }
        MESSAGE("It doesn't affect Wobbuffet…");
        // turn 4
        MESSAGE("Foe Wobbuffet used Earthquake!");
        NOT { HP_BAR(player); }
        MESSAGE("It doesn't affect Wobbuffet…");
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

TO_DO_BATTLE_TEST("Soak fails against a Terastallized Pokemon");
TO_DO_BATTLE_TEST("Transform does not copy the target's Tera Type, and if the user is Terastallized it keeps its own Tera Type");
TO_DO_BATTLE_TEST("Reflect Type fails if the user is Terastallized");
TO_DO_BATTLE_TEST("Illusion copies a Terastallized party member's appearance as if it was not Terastallized");
TO_DO_BATTLE_TEST("Revelation Dance matches the user's Tera Type while Terastallized");
TO_DO_BATTLE_TEST("Double Shock does not remove the user's Electric type while Terastallized, and changes STAB modifier depending on when it is used");
TO_DO_BATTLE_TEST("STAB takes into consideration what the Pokemon's types were prior to Terastallizing if they were changed - switching out and back in while Terastallized resets the Pokemon's original types");
