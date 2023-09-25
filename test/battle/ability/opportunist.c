#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].abilities[2] == ABILITY_OPPORTUNIST);
}

SINGLE_BATTLE_TEST("Opportunist only copies foe's positive stat changes in a turn", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_NONE; }
    PARAMETRIZE { ability = ABILITY_OPPORTUNIST; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(4); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_SMASH); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (ability == ABILITY_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SMASH, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            HP_BAR(player, captureDamage: &results[i].damage);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            HP_BAR(player, captureDamage: &results[i].damage);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        }
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        // stat boosts should be the same
        EXPECT_EQ(player->statStages[STAT_ATK], opponent->statStages[STAT_ATK]);
        EXPECT_EQ(player->statStages[STAT_SPATK], opponent->statStages[STAT_SPATK]);
        EXPECT_EQ(player->statStages[STAT_SPEED], opponent->statStages[STAT_SPEED]);
        // opportunist should not copy stat drops from shell smash
        EXPECT_LT(player->statStages[STAT_DEF], opponent->statStages[STAT_DEF]);
        EXPECT_LT(player->statStages[STAT_SPDEF], opponent->statStages[STAT_SPDEF]);
    }
}

