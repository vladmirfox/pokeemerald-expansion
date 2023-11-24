#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("Reflect Type fails if the user is Terastallized");
TO_DO_BATTLE_TEST("Reflect Type succeeds against a Terastallized target and copies its Tera type");

SINGLE_BATTLE_TEST("Reflect Type does not affect any of Arceus' forms")
{
    u32 j;
    static const u16 sArceusFormSpeciesIdTable[] = {
        SPECIES_ARCEUS,
        SPECIES_ARCEUS_FIGHTING,
        SPECIES_ARCEUS_FLYING,
        SPECIES_ARCEUS_POISON,
        SPECIES_ARCEUS_GROUND,
        SPECIES_ARCEUS_ROCK,
        SPECIES_ARCEUS_BUG,
        SPECIES_ARCEUS_GHOST,
        SPECIES_ARCEUS_STEEL,
        SPECIES_ARCEUS_FIRE,
        SPECIES_ARCEUS_WATER,
        SPECIES_ARCEUS_GRASS,
        SPECIES_ARCEUS_ELECTRIC,
        SPECIES_ARCEUS_PSYCHIC,
        SPECIES_ARCEUS_ICE,
        SPECIES_ARCEUS_DRAGON,
        SPECIES_ARCEUS_DARK,
        SPECIES_ARCEUS_FAIRY,
    };
    u16 species = SPECIES_NONE;

    for (j = 0; j < ARRAY_COUNT(sArceusFormSpeciesIdTable); j++)
    {
        PARAMETRIZE { species = sArceusFormSpeciesIdTable[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type does not affect any of Silvally's forms")
{
    u32 j;
    static const u16 sSilvallyFormSpeciesIdTable[] = {
        SPECIES_SILVALLY,
        SPECIES_SILVALLY_FIGHTING,
        SPECIES_SILVALLY_FLYING,
        SPECIES_SILVALLY_POISON,
        SPECIES_SILVALLY_GROUND,
        SPECIES_SILVALLY_ROCK,
        SPECIES_SILVALLY_BUG,
        SPECIES_SILVALLY_GHOST,
        SPECIES_SILVALLY_STEEL,
        SPECIES_SILVALLY_FIRE,
        SPECIES_SILVALLY_WATER,
        SPECIES_SILVALLY_GRASS,
        SPECIES_SILVALLY_ELECTRIC,
        SPECIES_SILVALLY_PSYCHIC,
        SPECIES_SILVALLY_ICE,
        SPECIES_SILVALLY_DRAGON,
        SPECIES_SILVALLY_DARK,
        SPECIES_SILVALLY_FAIRY,
    };
    u16 species = SPECIES_NONE;

    for (j = 0; j < ARRAY_COUNT(sSilvallyFormSpeciesIdTable); j++)
    {
        PARAMETRIZE { species = sSilvallyFormSpeciesIdTable[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type does not affect Pokémon with no types")
{
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[0] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[1] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_POLIWRATH].types[0] == TYPE_WATER);
    ASSUME(gSpeciesInfo[SPECIES_POLIWRATH].types[1] == TYPE_FIGHTING);
    GIVEN {
        PLAYER(SPECIES_ARCANINE);
        OPPONENT(SPECIES_POLIWRATH);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); MOVE(opponent, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Arcanine used " MOVE_NAME(MOVE_BURN_UP) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent);
        MESSAGE("Arcanine burned itself out!");
        MESSAGE("Foe Poliwrath used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Reflect Type copies a target's dual types")
{
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[0] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[1] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_POLIWRATH].types[0] == TYPE_WATER);
    ASSUME(gSpeciesInfo[SPECIES_POLIWRATH].types[1] == TYPE_FIGHTING);
    GIVEN {
        PLAYER(SPECIES_ARCANINE);
        OPPONENT(SPECIES_POLIWRATH);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Arcanine used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Arcanine's type changed to match the Foe Poliwrath's!");
    } THEN {
        EXPECT_EQ(player->type1, TYPE_WATER);
        EXPECT_EQ(player->type2, TYPE_FIGHTING);
        EXPECT_EQ(player->type3, TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Reflect Type copies a target's pure type")
{
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[0] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[1] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_SUDOWOODO].types[0] == TYPE_ROCK);
    ASSUME(gSpeciesInfo[SPECIES_SUDOWOODO].types[1] == TYPE_ROCK);
    GIVEN {
        PLAYER(SPECIES_ARCANINE);
        OPPONENT(SPECIES_SUDOWOODO);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        MESSAGE("Arcanine used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Arcanine's type changed to match the Foe Sudowoodo's!");
    } THEN {
        EXPECT_EQ(player->type1, TYPE_ROCK);
        EXPECT_EQ(player->type2, TYPE_ROCK);
        EXPECT_EQ(player->type3, TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Reflect Type defaults to Normal type for the user's type1 and type2 if the target only has a 3rd type")
{
    ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].types[0] == TYPE_PSYCHIC);
    ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].types[1] == TYPE_PSYCHIC);
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[0] == TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_ARCANINE].types[1] == TYPE_FIRE);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARCANINE);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_FORESTS_CURSE); }
        TURN { MOVE(player, MOVE_REFLECT_TYPE); }
    } SCENE {
        // Turn 1
        MESSAGE("Foe Arcanine used " MOVE_NAME(MOVE_BURN_UP) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, opponent);
        HP_BAR(player);
        MESSAGE("Foe Arcanine burned itself out!");
        // Turn 2
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_FORESTS_CURSE) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESTS_CURSE, player);
        MESSAGE("Grass type was added to Foe Arcanine!");
        // Turn 3
        MESSAGE("Wobbuffet used " MOVE_NAME(MOVE_REFLECT_TYPE) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT_TYPE, player);
        MESSAGE("Wobbuffet's type changed to match the Foe Arcanine's!");
    } THEN {
        EXPECT_EQ(player->type1, TYPE_NORMAL);
        EXPECT_EQ(player->type2, TYPE_NORMAL);
        EXPECT_EQ(player->type3, TYPE_GRASS);
    }
}
