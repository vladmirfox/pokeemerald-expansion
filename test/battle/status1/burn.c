#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Burn deals 1/16th damage per turn")
{
    u32 j;
    GIVEN {
        ASSUME(B_BURN_DAMAGE >= GEN_LATEST);
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < 4; j++)
            TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        for (j = 0; j < 4; j++)
            HP_BAR(player, damage: maxHP / 16);
    }
}

SINGLE_BATTLE_TEST("Burn reduces Attack by 50%", s16 damage)
{
    bool32 burned;
    PARAMETRIZE { burned = FALSE; }
    PARAMETRIZE { burned = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET) { if (burned) Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Will-o-Wisp burns the target")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WILL_O_WISP].category == DAMAGE_CATEGORY_STATUS);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        MESSAGE("Wobbuffet used Will-o-Wisp!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
        STATUS_ICON(opponent, burn: TRUE);
    }
}
