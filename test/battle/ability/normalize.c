#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_TACKLE) > 0);
    ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
    ASSUME(GetMovePower(MOVE_WATER_GUN));
}

SINGLE_BATTLE_TEST("Normalize boosts power of unaffected moves by 20% (Gen7+)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_NORMALIZE;      genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_NORMALIZE;      genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_SKITTY) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // Ate
        else
            EXPECT_EQ(results[1].damage, results[3].damage); // No boost
    }
}

SINGLE_BATTLE_TEST("Normalize boosts power of affected moves by 20% (Gen7+)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_CUTE_CHARM;     genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_NORMALIZE;      genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_NORMALIZE;      genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_SKITTY) { Ability(ability); Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.8), results[2].damage); // STAB + ate
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.5), results[3].damage); // STAB + no ate
    }
}

TO_DO_BATTLE_TEST("Normalize tuns a move into a Normal-type move");
TO_DO_BATTLE_TEST("Normalize affects status moves"); // Eg. Thunder Wave can affect Ground types
TO_DO_BATTLE_TEST("Normalize makes Flying Press do Normal/Flying damage");
TO_DO_BATTLE_TEST("Normalize still makes Freeze-Dry do super effective damage to Water-type Pokémon");
TO_DO_BATTLE_TEST("Normalize-affected moves become Electric-type under Electrify's effect");
TO_DO_BATTLE_TEST("Normalize-affected moves become Electric-type under Ion Deluge's effect");
TO_DO_BATTLE_TEST("Normalize doesn't affect Hidden Power's type");
TO_DO_BATTLE_TEST("Normalize doesn't affect Weather Ball's type");
TO_DO_BATTLE_TEST("Normalize doesn't affect Natural Gift's type");
TO_DO_BATTLE_TEST("Normalize doesn't affect Judgment/Techno Blast/Multi-Attack's type");
TO_DO_BATTLE_TEST("Normalize doesn't affect Terrain Pulse's type");
TO_DO_BATTLE_TEST("Normalize doesn't affect damaging Z-Move types");
