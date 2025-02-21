#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_TACKLE) > 0);
}

SINGLE_BATTLE_TEST("Pixilate turns a Normal-type move into a Fairy-type move")
{
    GIVEN {
        PLAYER(SPECIES_DRAGONITE);
        OPPONENT(SPECIES_ALTARIA) { Item(ITEM_ALTARIANITE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Pixilate boosts power of affected moves by 20% (Gen7+) or 30% (Gen6-)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_PIXILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_PIXILATE;       genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_SYLVEON) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.8), results[2].damage); // STAB + ate
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.95), results[3].damage); // STAB + ate
    }
}

TO_DO_BATTLE_TEST("Pixilate can not turn certain moves into Fairy type moves");
TO_DO_BATTLE_TEST("(DYNAMAX) Pixilate turns Max Strike into Max Starfall when not used by Gigantamax Alcremie");
TO_DO_BATTLE_TEST("(DYNAMAX) Pixilate doesn't turn Max Strike into Max Starfall when used by Gigantamax Alcremie, instead becoming G-Max Finale");

// Gen 6-7
TO_DO_BATTLE_TEST("Pixilate overrides Electrify (Gen6-7)");
TO_DO_BATTLE_TEST("Pixilate overrides Ion Deluge (Gen6-7)");
// Gen 8+
TO_DO_BATTLE_TEST("Pixilate doesn't override Electrify (Gen8+)");
//TO_DO_BATTLE_TEST("Pixilate doesn't override Ion Deluge (Gen8+)"); // Ion Deluge doesn't exist in Gen 8+, but we probably could assume it behaves similar to under Electrify. TODO: Test by hacking SV.
