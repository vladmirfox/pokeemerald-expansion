#include "global.h"
#include "test/test.h"
#include "battle.h"
#include "battle_main.h"
#include "data.h"
#include "malloc.h"
#include "random.h"
#include "string_util.h"
#include "constants/item.h"
#include "constants/abilities.h"
#include "constants/trainers.h"
#include "constants/battle.h"

static const struct Trainer sTestTrainers[] =
{
#include "trainer_control.h"
};

TEST("CreateNPCTrainerPartyForTrainer generates customized Pokémon")
{
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    u8 nickBuffer[20];
    CreateNPCTrainerPartyFromTrainer(testParty, &sTestTrainers[0], TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(IsMonShiny(&testParty[0]));
    EXPECT(!IsMonShiny(&testParty[1]));
    EXPECT(!IsMonShiny(&testParty[2]));

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_POKEBALL), ITEM_MASTER_BALL);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_POKEBALL), ITEM_POKE_BALL);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_POKEBALL), ITEM_DUSK_BALL);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPECIES), SPECIES_WOBBUFFET);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPECIES), SPECIES_WOBBUFFET);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPECIES), SPECIES_WOBBUFFET);

    EXPECT_EQ(GetMonAbility(&testParty[0]), ABILITY_TELEPATHY);
    EXPECT_EQ(GetMonAbility(&testParty[1]), ABILITY_SHADOW_TAG);
    EXPECT_EQ(GetMonAbility(&testParty[2]), ABILITY_SHADOW_TAG);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_FRIENDSHIP), 42);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_FRIENDSHIP), 0);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_FRIENDSHIP), 0);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_HELD_ITEM), ITEM_ASSAULT_VEST);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_HELD_ITEM), ITEM_NONE);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_HELD_ITEM), ITEM_STICKY_BARB);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_HP_IV), 25);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_ATK_IV), 26);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_DEF_IV), 27);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPEED_IV), 28);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPATK_IV), 29);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPDEF_IV), 30);

    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_HP_IV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_ATK_IV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_DEF_IV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPEED_IV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPATK_IV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPDEF_IV), 0);

    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_HP_IV), 25);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_ATK_IV), 26);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_DEF_IV), 27);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPEED_IV), 28);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPATK_IV), 29);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPDEF_IV), 30);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_HP_EV), 252);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_ATK_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_DEF_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPEED_EV), 252);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPATK_EV), 4);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_SPDEF_EV), 0);

    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_HP_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_ATK_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_DEF_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPEED_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPATK_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_SPDEF_EV), 0);

    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_HP_EV), 252);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_ATK_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_DEF_EV), 0);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPEED_EV), 252);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPATK_EV), 4);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_SPDEF_EV), 0);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_LEVEL), 67);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_LEVEL), 5);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_LEVEL), 69);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_MOVE1), MOVE_AIR_SLASH);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_MOVE2), MOVE_BARRIER);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_MOVE3), MOVE_SOLAR_BEAM);
    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_MOVE4), MOVE_EXPLOSION);

    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_MOVE1), MOVE_AIR_SLASH);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_MOVE2), MOVE_BARRIER);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_MOVE3), MOVE_SOLAR_BEAM);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_MOVE4), MOVE_EXPLOSION);

    GetMonData(&testParty[0], MON_DATA_NICKNAME, nickBuffer);
    EXPECT_EQ(StringCompare(nickBuffer, COMPOUND_STRING("Bubbles")), 0);

    GetMonData(&testParty[1], MON_DATA_NICKNAME, nickBuffer);
    EXPECT_EQ(StringCompare(nickBuffer, COMPOUND_STRING("Wobbuffet")), 0);

    EXPECT_EQ(GetMonGender(&testParty[0]), MON_FEMALE);
    EXPECT_EQ(GetNature(&testParty[0]), NATURE_HASTY);
    EXPECT_EQ(GetNature(&testParty[0]), NATURE_HARDY);

    EXPECT_EQ(GetMonData(&testParty[0], MON_DATA_DYNAMAX_LEVEL), 5);
    EXPECT_EQ(GetMonData(&testParty[1], MON_DATA_DYNAMAX_LEVEL), 10);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_DYNAMAX_LEVEL), 0);

    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_IS_SHADOW), TRUE);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_HEART_VALUE), 3000);
    EXPECT_EQ(GetMonData(&testParty[2], MON_DATA_HEART_MAX), 3000);

    Free(testParty);
}

TEST("CreateNPCTrainerPartyForTrainer generates different personalities for different mons")
{
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, &sTestTrainers[0], TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(testParty[0].box.personality != testParty[1].box.personality);
    Free(testParty);
}

TEST("ModifyPersonalityForNature can set any nature")
{
    u32 personality = 0, nature = 0, j = 0, k = 0;
    for (j = 0; j < 64; j++)
    {
        for (k = 0; k < NUM_NATURES; k++)
        {
            PARAMETRIZE { personality = Random32(); nature = k; }
        }
    }
    ModifyPersonalityForNature(&personality, nature);
    EXPECT_EQ(GetNatureFromPersonality(personality), nature);
}
