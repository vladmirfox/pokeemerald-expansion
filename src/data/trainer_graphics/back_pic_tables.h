#define TRAINER_BACK_SPRITE_SHEET(trainerPic, sprite) [TRAINER_BACK_PIC_##trainerPic] = {(const u32 *)gTrainerBackPic_##sprite, TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_##sprite), TRAINER_BACK_PIC_##trainerPic}

// This table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    TRAINER_BACK_SPRITE_SHEET(BRENDAN, Brendan),
    TRAINER_BACK_SPRITE_SHEET(MAY, May),
    TRAINER_BACK_SPRITE_SHEET(RED, Red),
    TRAINER_BACK_SPRITE_SHEET(LEAF, Leaf),
    TRAINER_BACK_SPRITE_SHEET(RUBY_SAPPHIRE_BRENDAN, RubySapphireBrendan),
    TRAINER_BACK_SPRITE_SHEET(RUBY_SAPPHIRE_MAY, RubySapphireMay),
    TRAINER_BACK_SPRITE_SHEET(WALLY, Wally),
    TRAINER_BACK_SPRITE_SHEET(STEVEN, Steven),
};
