#include "global.h"
#include "test/battle.h"

// From https://bulbapedia.bulbagarden.net/wiki/Damage#Example

SINGLE_BATTLE_TEST("Damage calculation matches Gen5+")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 196; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 184; }
    PARAMETRIZE { expectedDamage = 184; }
    PARAMETRIZE { expectedDamage = 184; }
    PARAMETRIZE { expectedDamage = 180; }
    PARAMETRIZE { expectedDamage = 180; }
    PARAMETRIZE { expectedDamage = 180; }
    PARAMETRIZE { expectedDamage = 172; }
    PARAMETRIZE { expectedDamage = 172; }
    PARAMETRIZE { expectedDamage = 172; }
    PARAMETRIZE { expectedDamage = 168; }
    PARAMETRIZE { expectedDamage = 168; }
    PARAMETRIZE { expectedDamage = 168; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ICE_FANG].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_GLACEON) { Level(75); Attack(123); }
        OPPONENT(SPECIES_GARCHOMP) { Defense(163); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_ICE_FANG, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
        }
    }
    SCENE {
        MESSAGE("Glaceon used Ice Fang!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}

SINGLE_BATTLE_TEST("Damage calculation matches Gen5+ (Muscle Band, crit)")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 324; }
    PARAMETRIZE { expectedDamage = 316; }
    PARAMETRIZE { expectedDamage = 312; }
    PARAMETRIZE { expectedDamage = 312; }
    PARAMETRIZE { expectedDamage = 304; }
    PARAMETRIZE { expectedDamage = 304; }
    PARAMETRIZE { expectedDamage = 300; }
    PARAMETRIZE { expectedDamage = 300; }
    PARAMETRIZE { expectedDamage = 292; }
    PARAMETRIZE { expectedDamage = 292; }
    PARAMETRIZE { expectedDamage = 288; }
    PARAMETRIZE { expectedDamage = 288; }
    PARAMETRIZE { expectedDamage = 280; }
    PARAMETRIZE { expectedDamage = 276; }
    PARAMETRIZE { expectedDamage = 276; }
    PARAMETRIZE { expectedDamage = 268; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ICE_FANG].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_GLACEON) { Level(75); Attack(123); Item(ITEM_MUSCLE_BAND); }
        OPPONENT(SPECIES_GARCHOMP) { Defense(163); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_ICE_FANG, WITH_RNG(RNG_DAMAGE_MODIFIER, i), criticalHit: TRUE);
        }
    }
    SCENE {
        MESSAGE("Glaceon used Ice Fang!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}

SINGLE_BATTLE_TEST("Damage calculation matches Gen5+ (Marshadow vs Mawile)")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 145; }
    PARAMETRIZE { expectedDamage = 144; }
    PARAMETRIZE { expectedDamage = 142; }
    PARAMETRIZE { expectedDamage = 141; }
    PARAMETRIZE { expectedDamage = 139; }
    PARAMETRIZE { expectedDamage = 138; }
    PARAMETRIZE { expectedDamage = 136; }
    PARAMETRIZE { expectedDamage = 135; }
    PARAMETRIZE { expectedDamage = 133; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 130; }
    PARAMETRIZE { expectedDamage = 129; }
    PARAMETRIZE { expectedDamage = 127; }
    PARAMETRIZE { expectedDamage = 126; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 123; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPECTRAL_THIEF].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_MARSHADOW) { Level(100); Attack(286); }
        OPPONENT(SPECIES_MAWILE) { Level(100); Defense(226); HP(241); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_SPECTRAL_THIEF, WITH_RNG(RNG_DAMAGE_MODIFIER, i), criticalHit: FALSE);
        }
    }
    SCENE{
        MESSAGE("Marshadow used Spectral Thief!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN{
        EXPECT_EQ(expectedDamage, dmg);
    }
}

DOUBLE_BATTLE_TEST("A spread move will do correct damage to the second mon if the first target faints from first hit of the spread move")
{
    s16 damage[6];
    GIVEN {
        PLAYER(SPECIES_REGIROCK);
        PLAYER(SPECIES_REGIROCK);
        OPPONENT(SPECIES_WOBBUFFET) { HP(200); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROCK_SLIDE); }
        TURN { MOVE(playerLeft, MOVE_ROCK_SLIDE); MOVE(playerRight, MOVE_ROCK_SLIDE); }
        TURN { MOVE(playerLeft, MOVE_ROCK_SLIDE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage[0]);
        HP_BAR(opponentRight, captureDamage: &damage[1]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage[2]);
        HP_BAR(opponentRight, captureDamage: &damage[3]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerRight);
        HP_BAR(opponentRight, captureDamage: &damage[4]);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, playerLeft);
        HP_BAR(opponentRight, captureDamage: &damage[5]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_EQ(damage[1], damage[3]);
        EXPECT_MUL_EQ(damage[5], UQ_4_12(0.75), damage[3]);
        EXPECT_EQ(damage[4], damage[5]);
    }
}

SINGLE_BATTLE_TEST("Punching Glove vs Muscle Band Damage calculation")
{
    s16 dmgPlayer, dmgOpponent;
    s16 expectedDamagePlayer, expectedDamageOpponent;
    PARAMETRIZE { expectedDamagePlayer = 204, expectedDamageOpponent = 201; }
    PARAMETRIZE { expectedDamagePlayer = 201, expectedDamageOpponent = 198; }
    PARAMETRIZE { expectedDamagePlayer = 199, expectedDamageOpponent = 196; }
    PARAMETRIZE { expectedDamagePlayer = 196, expectedDamageOpponent = 193; }
    PARAMETRIZE { expectedDamagePlayer = 195, expectedDamageOpponent = 192; }
    PARAMETRIZE { expectedDamagePlayer = 193, expectedDamageOpponent = 190; }
    PARAMETRIZE { expectedDamagePlayer = 190, expectedDamageOpponent = 187; }
    PARAMETRIZE { expectedDamagePlayer = 189, expectedDamageOpponent = 186; }
    PARAMETRIZE { expectedDamagePlayer = 187, expectedDamageOpponent = 184; }
    PARAMETRIZE { expectedDamagePlayer = 184, expectedDamageOpponent = 181; }
    PARAMETRIZE { expectedDamagePlayer = 183, expectedDamageOpponent = 180; }
    PARAMETRIZE { expectedDamagePlayer = 181, expectedDamageOpponent = 178; }
    PARAMETRIZE { expectedDamagePlayer = 178, expectedDamageOpponent = 175; }
    PARAMETRIZE { expectedDamagePlayer = 177, expectedDamageOpponent = 174; }
    PARAMETRIZE { expectedDamagePlayer = 174, expectedDamageOpponent = 172; }
    PARAMETRIZE { expectedDamagePlayer = 172, expectedDamageOpponent = 169; }
    GIVEN {
        PLAYER(SPECIES_MAKUHITA) { Item(ITEM_PUNCHING_GLOVE); }
        OPPONENT(SPECIES_MAKUHITA) { Item(ITEM_MUSCLE_BAND); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_DRAIN_PUNCH, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
            MOVE(opponent, MOVE_DRAIN_PUNCH, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
        }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAIN_PUNCH, player);
        HP_BAR(opponent, captureDamage: &dmgPlayer);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAIN_PUNCH, opponent);
        HP_BAR(player, captureDamage: &dmgOpponent);
    }
    THEN {
        EXPECT_EQ(expectedDamagePlayer, dmgPlayer);
        EXPECT_EQ(expectedDamageOpponent, dmgOpponent);
    }
}

SINGLE_BATTLE_TEST("Gem boosted Damage calculation")
{
    KNOWN_FAILING; // Round error
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 240; }
    PARAMETRIZE { expectedDamage = 237; }
    PARAMETRIZE { expectedDamage = 234; }
    PARAMETRIZE { expectedDamage = 232; }
    PARAMETRIZE { expectedDamage = 229; }
    PARAMETRIZE { expectedDamage = 228; }
    PARAMETRIZE { expectedDamage = 225; }
    PARAMETRIZE { expectedDamage = 222; }
    PARAMETRIZE { expectedDamage = 220; }
    PARAMETRIZE { expectedDamage = 217; }
    PARAMETRIZE { expectedDamage = 216; }
    PARAMETRIZE { expectedDamage = 213; }
    PARAMETRIZE { expectedDamage = 210; }
    PARAMETRIZE { expectedDamage = 208; }
    PARAMETRIZE { expectedDamage = 205; }
    PARAMETRIZE { expectedDamage = 204; }
    GIVEN {
        PLAYER(SPECIES_MAKUHITA) { Item(ITEM_FIGHTING_GEM); }
        OPPONENT(SPECIES_MAKUHITA);
    } WHEN {
        TURN {
            MOVE(player, MOVE_DRAIN_PUNCH, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
        }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAIN_PUNCH, player);
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}
