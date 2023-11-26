#include "constants/trainers.h"
#include "data.h"

const u8 gTrainerBackPic_Brendan[] = INCBIN_U8("graphics/trainers/back_pics/brendan.4bpp");
const u32 gTrainerPalette_Brendan[] = INCBIN_U32("graphics/trainers/palettes/brendan.gbapal.lz");

const u8 gTrainerBackPic_May[] = INCBIN_U8("graphics/trainers/back_pics/may.4bpp");
const u32 gTrainerPalette_May[] = INCBIN_U32("graphics/trainers/palettes/may.gbapal.lz");

const u8 gTrainerBackPic_RubySapphireBrendan[] = INCBIN_U8("graphics/trainers/back_pics/brendan_rs.4bpp");
const u32 gTrainerPalette_RubySapphireBrendan[] = INCBIN_U32("graphics/trainers/palettes/brendan_rs.gbapal.lz");

const u8 gTrainerBackPic_RubySapphireMay[] = INCBIN_U8("graphics/trainers/back_pics/may_rs.4bpp");
const u32 gTrainerPalette_RubySapphireMay[] = INCBIN_U32("graphics/trainers/palettes/may_rs.gbapal.lz");

const u8 gTrainerBackPic_Wally[] = INCBIN_U8("graphics/trainers/back_pics/wally.4bpp");
const u32 gTrainerPalette_Wally[] = INCBIN_U32("graphics/trainers/palettes/wally.gbapal.lz");

const u8 gTrainerBackPic_Steven[] = INCBIN_U8("graphics/trainers/back_pics/steven.4bpp");
const u32 gTrainerPalette_Steven[] = INCBIN_U32("graphics/trainers/front_pics/steven.gbapal.lz");

const u8 gTrainerBackPic_Red[] = INCBIN_U8("graphics/trainers/back_pics/red.4bpp");
const u32 gTrainerBackPicPalette_Red[] = INCBIN_U32("graphics/trainers/back_pics/red.gbapal.lz");

const u8 gTrainerBackPic_Leaf[] = INCBIN_U8("graphics/trainers/back_pics/leaf.4bpp");
const u32 gTrainerBackPicPalette_Leaf[] = INCBIN_U32("graphics/trainers/back_pics/leaf.gbapal.lz");

static const union AnimCmd *const sAnims_Trainer[] ={
    sAnim_GeneralFrame0,
};

#define TRAINER_PIC(trainerPic, spriteFile, paletteFile, anims)                                      \
    [TRAINER_PIC_##trainerPic] =                                                                     \
    {                                                                                                \
        .y_offset = 8,                                                                               \
        .frontPic = {(const u32[]) INCBIN_##spriteFile, TRAINER_PIC_SIZE, TRAINER_PIC_##trainerPic}, \
        .palette = {(const u32[]) INCBIN_##paletteFile, TRAINER_PIC_##trainerPic},                   \
        .animation = sAnims_##anims,                                                                 \
    }

const struct TrainerSprite gTrainerSprites[] =
{
    TRAINER_PIC(HIKER, U32("graphics/trainers/front_pics/hiker.4bpp.lz"), U32("graphics/trainers/front_pics/hiker.gbapal.lz"), Trainer),
    TRAINER_PIC(AQUA_GRUNT_M, U32("graphics/trainers/front_pics/aqua_grunt_m.4bpp.lz"), U32("graphics/trainers/front_pics/aqua_grunt_m.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEMON_BREEDER_F, U32("graphics/trainers/front_pics/pokemon_breeder_f.4bpp.lz"), U32("graphics/trainers/front_pics/pokemon_breeder_f.gbapal.lz"), Trainer),
    TRAINER_PIC(COOLTRAINER_M, U32("graphics/trainers/front_pics/cooltrainer_m.4bpp.lz"), U32("graphics/trainers/front_pics/cooltrainer_m.gbapal.lz"), Trainer),
    TRAINER_PIC(BIRD_KEEPER, U32("graphics/trainers/front_pics/bird_keeper.4bpp.lz"), U32("graphics/trainers/front_pics/bird_keeper.gbapal.lz"), Trainer),
    TRAINER_PIC(COLLECTOR, U32("graphics/trainers/front_pics/collector.4bpp.lz"), U32("graphics/trainers/front_pics/collector.gbapal.lz"), Trainer),
    TRAINER_PIC(AQUA_GRUNT_F, U32("graphics/trainers/front_pics/aqua_grunt_f.4bpp.lz"), U32("graphics/trainers/front_pics/aqua_grunt_f.gbapal.lz"), Trainer),
    TRAINER_PIC(SWIMMER_M, U32("graphics/trainers/front_pics/swimmer_m.4bpp.lz"), U32("graphics/trainers/front_pics/swimmer_m.gbapal.lz"), Trainer),
    TRAINER_PIC(MAGMA_GRUNT_M, U32("graphics/trainers/front_pics/magma_grunt_m.4bpp.lz"), U32("graphics/trainers/front_pics/magma_grunt_m.gbapal.lz"), Trainer),
    TRAINER_PIC(EXPERT_M, U32("graphics/trainers/front_pics/expert_m.4bpp.lz"), U32("graphics/trainers/front_pics/expert_m.gbapal.lz"), Trainer),
    TRAINER_PIC(AQUA_ADMIN_M, U32("graphics/trainers/front_pics/aqua_admin_m.4bpp.lz"), U32("graphics/trainers/front_pics/aqua_admin_m.gbapal.lz"), Trainer),
    TRAINER_PIC(BLACK_BELT, U32("graphics/trainers/front_pics/black_belt.4bpp.lz"), U32("graphics/trainers/front_pics/black_belt.gbapal.lz"), Trainer),
    TRAINER_PIC(AQUA_ADMIN_F, U32("graphics/trainers/front_pics/aqua_admin_f.4bpp.lz"), U32("graphics/trainers/front_pics/aqua_admin_f.gbapal.lz"), Trainer),
    TRAINER_PIC(AQUA_LEADER_ARCHIE, U32("graphics/trainers/front_pics/aqua_leader_archie.4bpp.lz"), U32("graphics/trainers/front_pics/aqua_leader_archie.gbapal.lz"), Trainer),
    TRAINER_PIC(HEX_MANIAC, U32("graphics/trainers/front_pics/hex_maniac.4bpp.lz"), U32("graphics/trainers/front_pics/hex_maniac.gbapal.lz"), Trainer),
    TRAINER_PIC(AROMA_LADY, U32("graphics/trainers/front_pics/aroma_lady.4bpp.lz"), U32("graphics/trainers/front_pics/aroma_lady.gbapal.lz"), Trainer),
    TRAINER_PIC(RUIN_MANIAC, U32("graphics/trainers/front_pics/ruin_maniac.4bpp.lz"), U32("graphics/trainers/front_pics/ruin_maniac.gbapal.lz"), Trainer),
    TRAINER_PIC(INTERVIEWER, U32("graphics/trainers/front_pics/interviewer.4bpp.lz"), U32("graphics/trainers/front_pics/interviewer.gbapal.lz"), Trainer),
    TRAINER_PIC(TUBER_F, U32("graphics/trainers/front_pics/tuber_f.4bpp.lz"), U32("graphics/trainers/front_pics/tuber_f.gbapal.lz"), Trainer),
    TRAINER_PIC(TUBER_M, U32("graphics/trainers/front_pics/tuber_m.4bpp.lz"), U32("graphics/trainers/front_pics/tuber_m.gbapal.lz"), Trainer),
    TRAINER_PIC(COOLTRAINER_F, U32("graphics/trainers/front_pics/cooltrainer_f.4bpp.lz"), U32("graphics/trainers/front_pics/cooltrainer_f.gbapal.lz"), Trainer),
    TRAINER_PIC(LADY, U32("graphics/trainers/front_pics/lady.4bpp.lz"), U32("graphics/trainers/front_pics/lady.gbapal.lz"), Trainer),
    TRAINER_PIC(BEAUTY, U32("graphics/trainers/front_pics/beauty.4bpp.lz"), U32("graphics/trainers/front_pics/beauty.gbapal.lz"), Trainer),
    TRAINER_PIC(RICH_BOY, U32("graphics/trainers/front_pics/rich_boy.4bpp.lz"), U32("graphics/trainers/front_pics/rich_boy.gbapal.lz"), Trainer),
    TRAINER_PIC(EXPERT_F, U32("graphics/trainers/front_pics/expert_f.4bpp.lz"), U32("graphics/trainers/front_pics/expert_f.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEMANIAC, U32("graphics/trainers/front_pics/pokemaniac.4bpp.lz"), U32("graphics/trainers/front_pics/pokemaniac.gbapal.lz"), Trainer),
    TRAINER_PIC(MAGMA_GRUNT_F, U32("graphics/trainers/front_pics/magma_grunt_f.4bpp.lz"), U32("graphics/trainers/front_pics/magma_grunt_f.gbapal.lz"), Trainer),
    TRAINER_PIC(GUITARIST, U32("graphics/trainers/front_pics/guitarist.4bpp.lz"), U32("graphics/trainers/front_pics/guitarist.gbapal.lz"), Trainer),
    TRAINER_PIC(KINDLER, U32("graphics/trainers/front_pics/kindler.4bpp.lz"), U32("graphics/trainers/front_pics/kindler.gbapal.lz"), Trainer),
    TRAINER_PIC(CAMPER, U32("graphics/trainers/front_pics/camper.4bpp.lz"), U32("graphics/trainers/front_pics/camper.gbapal.lz"), Trainer),
    TRAINER_PIC(PICNICKER, U32("graphics/trainers/front_pics/picnicker.4bpp.lz"), U32("graphics/trainers/front_pics/picnicker.gbapal.lz"), Trainer),
    TRAINER_PIC(BUG_MANIAC, U32("graphics/trainers/front_pics/bug_maniac.4bpp.lz"), U32("graphics/trainers/front_pics/bug_maniac.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEMON_BREEDER_M, U32("graphics/trainers/front_pics/pokemon_breeder_m.4bpp.lz"), U32("graphics/trainers/front_pics/pokemon_breeder_m.gbapal.lz"), Trainer),
    TRAINER_PIC(PSYCHIC_M, U32("graphics/trainers/front_pics/psychic_m.4bpp.lz"), U32("graphics/trainers/front_pics/psychic_m.gbapal.lz"), Trainer),
    TRAINER_PIC(PSYCHIC_F, U32("graphics/trainers/front_pics/psychic_f.4bpp.lz"), U32("graphics/trainers/front_pics/psychic_f.gbapal.lz"), Trainer),
    TRAINER_PIC(GENTLEMAN, U32("graphics/trainers/front_pics/gentleman.4bpp.lz"), U32("graphics/trainers/front_pics/gentleman.gbapal.lz"), Trainer),
    TRAINER_PIC(ELITE_FOUR_SIDNEY, U32("graphics/trainers/front_pics/elite_four_sidney.4bpp.lz"), U32("graphics/trainers/front_pics/elite_four_sidney.gbapal.lz"), Trainer),
    TRAINER_PIC(ELITE_FOUR_PHOEBE, U32("graphics/trainers/front_pics/elite_four_phoebe.4bpp.lz"), U32("graphics/trainers/front_pics/elite_four_phoebe.gbapal.lz"), Trainer),
    TRAINER_PIC(ELITE_FOUR_GLACIA, U32("graphics/trainers/front_pics/elite_four_glacia.4bpp.lz"), U32("graphics/trainers/front_pics/elite_four_glacia.gbapal.lz"), Trainer),
    TRAINER_PIC(ELITE_FOUR_DRAKE, U32("graphics/trainers/front_pics/elite_four_drake.4bpp.lz"), U32("graphics/trainers/front_pics/elite_four_drake.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_ROXANNE, U32("graphics/trainers/front_pics/leader_roxanne.4bpp.lz"), U32("graphics/trainers/front_pics/leader_roxanne.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_BRAWLY, U32("graphics/trainers/front_pics/leader_brawly.4bpp.lz"), U32("graphics/trainers/front_pics/leader_brawly.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_WATTSON, U32("graphics/trainers/front_pics/leader_wattson.4bpp.lz"), U32("graphics/trainers/front_pics/leader_wattson.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_FLANNERY, U32("graphics/trainers/front_pics/leader_flannery.4bpp.lz"), U32("graphics/trainers/front_pics/leader_flannery.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_NORMAN, U32("graphics/trainers/front_pics/leader_norman.4bpp.lz"), U32("graphics/trainers/front_pics/leader_norman.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_WINONA, U32("graphics/trainers/front_pics/leader_winona.4bpp.lz"), U32("graphics/trainers/front_pics/leader_winona.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_TATE_AND_LIZA, U32("graphics/trainers/front_pics/leader_tate_and_liza.4bpp.lz"), U32("graphics/trainers/front_pics/leader_tate_and_liza.gbapal.lz"), Trainer),
    TRAINER_PIC(LEADER_JUAN, U32("graphics/trainers/front_pics/leader_juan.4bpp.lz"), U32("graphics/trainers/front_pics/leader_juan.gbapal.lz"), Trainer),
    TRAINER_PIC(SCHOOL_KID_M, U32("graphics/trainers/front_pics/school_kid_m.4bpp.lz"), U32("graphics/trainers/front_pics/school_kid_m.gbapal.lz"), Trainer),
    TRAINER_PIC(SCHOOL_KID_F, U32("graphics/trainers/front_pics/school_kid_f.4bpp.lz"), U32("graphics/trainers/front_pics/school_kid_f.gbapal.lz"), Trainer),
    TRAINER_PIC(SR_AND_JR, U32("graphics/trainers/front_pics/sr_and_jr.4bpp.lz"), U32("graphics/trainers/front_pics/sr_and_jr.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEFAN_M, U32("graphics/trainers/front_pics/pokefan_m.4bpp.lz"), U32("graphics/trainers/front_pics/pokefan_m.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEFAN_F, U32("graphics/trainers/front_pics/pokefan_f.4bpp.lz"), U32("graphics/trainers/front_pics/pokefan_f.gbapal.lz"), Trainer),
    TRAINER_PIC(YOUNGSTER, U32("graphics/trainers/front_pics/youngster.4bpp.lz"), U32("graphics/trainers/front_pics/youngster.gbapal.lz"), Trainer),
    TRAINER_PIC(CHAMPION_WALLACE, U32("graphics/trainers/front_pics/champion_wallace.4bpp.lz"), U32("graphics/trainers/front_pics/champion_wallace.gbapal.lz"), Trainer),
    TRAINER_PIC(FISHERMAN, U32("graphics/trainers/front_pics/fisherman.4bpp.lz"), U32("graphics/trainers/front_pics/fisherman.gbapal.lz"), Trainer),
    TRAINER_PIC(CYCLING_TRIATHLETE_M, U32("graphics/trainers/front_pics/cycling_triathlete_m.4bpp.lz"), U32("graphics/trainers/front_pics/cycling_triathlete_m.gbapal.lz"), Trainer),
    TRAINER_PIC(CYCLING_TRIATHLETE_F, U32("graphics/trainers/front_pics/cycling_triathlete_f.4bpp.lz"), U32("graphics/trainers/front_pics/cycling_triathlete_f.gbapal.lz"), Trainer),
    TRAINER_PIC(RUNNING_TRIATHLETE_M, U32("graphics/trainers/front_pics/running_triathlete_m.4bpp.lz"), U32("graphics/trainers/front_pics/running_triathlete_m.gbapal.lz"), Trainer),
    TRAINER_PIC(RUNNING_TRIATHLETE_F, U32("graphics/trainers/front_pics/running_triathlete_f.4bpp.lz"), U32("graphics/trainers/front_pics/running_triathlete_f.gbapal.lz"), Trainer),
    TRAINER_PIC(SWIMMING_TRIATHLETE_M, U32("graphics/trainers/front_pics/swimming_triathlete_m.4bpp.lz"), U32("graphics/trainers/front_pics/swimming_triathlete_m.gbapal.lz"), Trainer),
    TRAINER_PIC(SWIMMING_TRIATHLETE_F, U32("graphics/trainers/front_pics/swimming_triathlete_f.4bpp.lz"), U32("graphics/trainers/front_pics/swimming_triathlete_f.gbapal.lz"), Trainer),
    TRAINER_PIC(DRAGON_TAMER, U32("graphics/trainers/front_pics/dragon_tamer.4bpp.lz"), U32("graphics/trainers/front_pics/dragon_tamer.gbapal.lz"), Trainer),
    TRAINER_PIC(NINJA_BOY, U32("graphics/trainers/front_pics/ninja_boy.4bpp.lz"), U32("graphics/trainers/front_pics/ninja_boy.gbapal.lz"), Trainer),
    TRAINER_PIC(BATTLE_GIRL, U32("graphics/trainers/front_pics/battle_girl.4bpp.lz"), U32("graphics/trainers/front_pics/battle_girl.gbapal.lz"), Trainer),
    TRAINER_PIC(PARASOL_LADY, U32("graphics/trainers/front_pics/parasol_lady.4bpp.lz"), U32("graphics/trainers/front_pics/parasol_lady.gbapal.lz"), Trainer),
    TRAINER_PIC(SWIMMER_F, U32("graphics/trainers/front_pics/swimmer_f.4bpp.lz"), U32("graphics/trainers/front_pics/swimmer_f.gbapal.lz"), Trainer),
    TRAINER_PIC(TWINS, U32("graphics/trainers/front_pics/twins.4bpp.lz"), U32("graphics/trainers/front_pics/twins.gbapal.lz"), Trainer),
    TRAINER_PIC(SAILOR, U32("graphics/trainers/front_pics/sailor.4bpp.lz"), U32("graphics/trainers/front_pics/sailor.gbapal.lz"), Trainer),
    TRAINER_PIC(MAGMA_ADMIN, U32("graphics/trainers/front_pics/magma_admin.4bpp.lz"), U32("graphics/trainers/front_pics/magma_admin.gbapal.lz"), Trainer),
    TRAINER_PIC(WALLY, U32("graphics/trainers/front_pics/wally.4bpp.lz"), U32("graphics/trainers/palettes/wally.gbapal.lz"), Trainer),
    TRAINER_PIC(BRENDAN, U32("graphics/trainers/front_pics/brendan.4bpp.lz"), U32("graphics/trainers/palettes/brendan.gbapal.lz"), Trainer),
    TRAINER_PIC(MAY, U32("graphics/trainers/front_pics/may.4bpp.lz"), U32("graphics/trainers/palettes/may.gbapal.lz"), Trainer),
    TRAINER_PIC(BUG_CATCHER, U32("graphics/trainers/front_pics/bug_catcher.4bpp.lz"), U32("graphics/trainers/front_pics/bug_catcher.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEMON_RANGER_M, U32("graphics/trainers/front_pics/pokemon_ranger_m.4bpp.lz"), U32("graphics/trainers/front_pics/pokemon_ranger_m.gbapal.lz"), Trainer),
    TRAINER_PIC(POKEMON_RANGER_F, U32("graphics/trainers/front_pics/pokemon_ranger_f.4bpp.lz"), U32("graphics/trainers/front_pics/pokemon_ranger_f.gbapal.lz"), Trainer),
    TRAINER_PIC(MAGMA_LEADER_MAXIE, U32("graphics/trainers/front_pics/magma_leader_maxie.4bpp.lz"), U32("graphics/trainers/front_pics/magma_leader_maxie.gbapal.lz"), Trainer),
    TRAINER_PIC(LASS, U32("graphics/trainers/front_pics/lass.4bpp.lz"), U32("graphics/trainers/front_pics/lass.gbapal.lz"), Trainer),
    TRAINER_PIC(YOUNG_COUPLE, U32("graphics/trainers/front_pics/young_couple.4bpp.lz"), U32("graphics/trainers/front_pics/young_couple.gbapal.lz"), Trainer),
    TRAINER_PIC(OLD_COUPLE, U32("graphics/trainers/front_pics/old_couple.4bpp.lz"), U32("graphics/trainers/front_pics/old_couple.gbapal.lz"), Trainer),
    TRAINER_PIC(SIS_AND_BRO, U32("graphics/trainers/front_pics/sis_and_bro.4bpp.lz"), U32("graphics/trainers/front_pics/sis_and_bro.gbapal.lz"), Trainer),
    TRAINER_PIC(STEVEN, U32("graphics/trainers/front_pics/steven.4bpp.lz"), U32("graphics/trainers/front_pics/steven.gbapal.lz"), Trainer),
    TRAINER_PIC(SALON_MAIDEN_ANABEL, U32("graphics/trainers/front_pics/salon_maiden_anabel.4bpp.lz"), U32("graphics/trainers/front_pics/salon_maiden_anabel.gbapal.lz"), Trainer),
    TRAINER_PIC(DOME_ACE_TUCKER, U32("graphics/trainers/front_pics/dome_ace_tucker.4bpp.lz"), U32("graphics/trainers/front_pics/dome_ace_tucker.gbapal.lz"), Trainer),
    TRAINER_PIC(PALACE_MAVEN_SPENSER, U32("graphics/trainers/front_pics/palace_maven_spenser.4bpp.lz"), U32("graphics/trainers/front_pics/palace_maven_spenser.gbapal.lz"), Trainer),
    TRAINER_PIC(ARENA_TYCOON_GRETA, U32("graphics/trainers/front_pics/arena_tycoon_greta.4bpp.lz"), U32("graphics/trainers/front_pics/arena_tycoon_greta.gbapal.lz"), Trainer),
    TRAINER_PIC(FACTORY_HEAD_NOLAND, U32("graphics/trainers/front_pics/factory_head_noland.4bpp.lz"), U32("graphics/trainers/front_pics/factory_head_noland.gbapal.lz"), Trainer),
    TRAINER_PIC(PIKE_QUEEN_LUCY, U32("graphics/trainers/front_pics/pike_queen_lucy.4bpp.lz"), U32("graphics/trainers/front_pics/pike_queen_lucy.gbapal.lz"), Trainer),
    TRAINER_PIC(PYRAMID_KING_BRANDON, U32("graphics/trainers/front_pics/pyramid_king_brandon.4bpp.lz"), U32("graphics/trainers/front_pics/pyramid_king_brandon.gbapal.lz"), Trainer),
    TRAINER_PIC(RED, U32("graphics/trainers/front_pics/red.4bpp.lz"), U32("graphics/trainers/front_pics/red.gbapal.lz"), Trainer),
    TRAINER_PIC(LEAF, U32("graphics/trainers/front_pics/leaf.4bpp.lz"), U32("graphics/trainers/front_pics/leaf.gbapal.lz"), Trainer),
    TRAINER_PIC(RS_BRENDAN, U32("graphics/trainers/front_pics/brendan_rs.4bpp.lz"), U32("graphics/trainers/palettes/brendan_rs.gbapal.lz"), Trainer),
    TRAINER_PIC(RS_MAY, U32("graphics/trainers/front_pics/may_rs.4bpp.lz"), U32("graphics/trainers/palettes/may_rs.gbapal.lz"), Trainer),
};
