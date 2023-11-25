#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_TACKLE].split == SPLIT_PHYSICAL);
}

SINGLE_BATTLE_TEST("Contrary raises Attack when Intimidated in a single battle", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_CONTRARY; }
    PARAMETRIZE { ability = ABILITY_TANGLED_FEET; }
    GIVEN {
        PLAYER(SPECIES_MIGHTYENA) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_SPINDA) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        if (ability == ABILITY_CONTRARY) {
            ABILITY_POPUP(opponent, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack rose!");
        }
        HP_BAR(player, captureDamage: &results[i].damage);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(2.25), results[0].damage);
    }
}

DOUBLE_BATTLE_TEST("Contrary raises Attack when Intimidated in a double battle", s16 damageLeft, s16 damageRight)
{
    u32 abilityLeft, abilityRight;

    PARAMETRIZE { abilityLeft = ABILITY_CONTRARY; abilityRight = ABILITY_CONTRARY; }
    PARAMETRIZE { abilityLeft = ABILITY_TANGLED_FEET; abilityRight = ABILITY_TANGLED_FEET; }
    PARAMETRIZE { abilityLeft = ABILITY_CONTRARY; abilityRight = ABILITY_TANGLED_FEET; }
    PARAMETRIZE { abilityLeft = ABILITY_TANGLED_FEET; abilityRight = ABILITY_CONTRARY; }

    GIVEN {
        PLAYER(SPECIES_MIGHTYENA) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SPINDA) { Ability(abilityLeft); }
        OPPONENT(SPECIES_SPINDA) { Ability(abilityRight); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(opponentRight, MOVE_TACKLE, target: playerRight); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        if (abilityLeft == ABILITY_CONTRARY) {
            ABILITY_POPUP(opponentLeft, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack rose!");
        } else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE(SPECIES_NAME(SPECIES_MIGHTYENA) "'s Intimidate cuts Foe " SPECIES_NAME(SPECIES_SPINDA) "'s attack!");
        }
        if (abilityRight == ABILITY_CONTRARY) {
            ABILITY_POPUP(opponentRight, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack rose!");
        } else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
            MESSAGE(SPECIES_NAME(SPECIES_MIGHTYENA) "'s Intimidate cuts Foe " SPECIES_NAME(SPECIES_SPINDA) "'s attack!");
        }
        HP_BAR(playerLeft, captureDamage: &results[i].damageLeft);
        HP_BAR(playerRight, captureDamage: &results[i].damageRight);
    } THEN {
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK],  (abilityLeft == ABILITY_CONTRARY)  ? DEFAULT_STAT_STAGE+1 : DEFAULT_STAT_STAGE-1);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], (abilityRight == ABILITY_CONTRARY) ? DEFAULT_STAT_STAGE+1 : DEFAULT_STAT_STAGE-1);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[1].damageLeft, Q_4_12(2.25), results[0].damageLeft);
        EXPECT_MUL_EQ(results[1].damageRight, Q_4_12(2.25), results[0].damageRight);
    }
}

SINGLE_BATTLE_TEST("Contrary raises stats after using a move which would normally lower them: Overheat", s16 damageBefore, s16 damageAfter)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_CONTRARY; }
    PARAMETRIZE { ability = ABILITY_TANGLED_FEET; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_OVERHEAT].effect == EFFECT_OVERHEAT);
        ASSUME(gBattleMoves[MOVE_OVERHEAT].split == SPLIT_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SPINDA) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_OVERHEAT); }
        TURN { MOVE(opponent, MOVE_OVERHEAT); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_OVERHEAT) "!");
        HP_BAR(player, captureDamage: &results[i].damageBefore);
        if (ability == ABILITY_CONTRARY) {
            // ABILITY_POPUP(opponent, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Sp. Atk sharply rose!");
        }
        else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Sp. Atk harshly fell!");
        }

        // MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_OVERHEAT) "!");
        HP_BAR(player, captureDamage: &results[i].damageAfter);
        if (ability == ABILITY_CONTRARY) {
            // ABILITY_POPUP(opponent, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Sp. Atk sharply rose!");
        }
        else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Sp. Atk harshly fell!");
        }
    }
    FINALLY {
        EXPECT_MUL_EQ(results[0].damageBefore, Q_4_12(2.0), results[0].damageAfter);
        EXPECT_MUL_EQ(results[1].damageBefore,  Q_4_12(0.5), results[1].damageAfter);
    }
}

SINGLE_BATTLE_TEST("Contrary lowers a stat after using a move which would normally raise it: Swords Dance", s16 damageBefore, s16 damageAfter)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_CONTRARY; }
    PARAMETRIZE { ability = ABILITY_TANGLED_FEET; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
        PLAYER(SPECIES_WOBBUFFET) { Defense(102); }
        OPPONENT(SPECIES_SPINDA) { Ability(ability); Attack(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_SWORDS_DANCE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_TACKLE) "!");
        HP_BAR(player, captureDamage: &results[i].damageBefore);

        //MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_SWORDS_DANCE) "!");
        if (ability == ABILITY_CONTRARY) {
            // ABILITY_POPUP(opponent, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack harshly fell!");
        }
        else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack sharply rose!");
        }

        // MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_TACKLE) "!");
        HP_BAR(player, captureDamage: &results[i].damageAfter);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[0].damageBefore, Q_4_12(0.5), results[0].damageAfter);
        EXPECT_MUL_EQ(results[1].damageBefore,  Q_4_12(2.0), results[1].damageAfter);
    }
}

SINGLE_BATTLE_TEST("Contrary raises a stat after using a move which would normally lower it: Growl", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_CONTRARY; }
    PARAMETRIZE { ability = ABILITY_TANGLED_FEET; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        OPPONENT(SPECIES_SPINDA) { Ability(ability); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_GROWL) "!");
        if (ability == ABILITY_CONTRARY) {
            // ABILITY_POPUP(opponent, ABILITY_CONTRARY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack rose!");
        }
        else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) "'s Attack fell!");
        }

        MESSAGE("Foe " SPECIES_NAME(SPECIES_SPINDA) " used " MOVE_NAME(MOVE_TACKLE) "!");
        HP_BAR(player, captureDamage: &results[i].damage);
    }
    FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(2.125), results[0].damage);
    }
}
