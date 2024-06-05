#if OW_MON_POKEBALLS

#define POKEBALL_PIC_FRAMES(name)                              \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 0),    \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 1),    \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 2),    \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 3),    \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 4),    \
    overworld_frame(gObjectEventPic_##name##Ball, 2, 4, 0)

static const struct SpriteFrameImage sPicTable_Ball_MASTER[] = {
    POKEBALL_PIC_FRAMES(Master),
};
static const struct SpriteFrameImage sPicTable_Ball_ULTRA[] = {
    POKEBALL_PIC_FRAMES(Ultra),
};
static const struct SpriteFrameImage sPicTable_Ball_GREAT[] = {
    POKEBALL_PIC_FRAMES(Great),
};
static const struct SpriteFrameImage sPicTable_Ball_SAFARI[] = {
    POKEBALL_PIC_FRAMES(Safari),
};
static const struct SpriteFrameImage sPicTable_Ball_NET[] = {
    POKEBALL_PIC_FRAMES(Net),
};
static const struct SpriteFrameImage sPicTable_Ball_DIVE[] = {
    POKEBALL_PIC_FRAMES(Dive),
};
static const struct SpriteFrameImage sPicTable_Ball_NEST[] = {
    POKEBALL_PIC_FRAMES(Nest),
};
static const struct SpriteFrameImage sPicTable_Ball_REPEAT[] = {
    POKEBALL_PIC_FRAMES(Repeat),
};
static const struct SpriteFrameImage sPicTable_Ball_TIMER[] = {
    POKEBALL_PIC_FRAMES(Timer),
};
static const struct SpriteFrameImage sPicTable_Ball_LUXURY[] = {
    POKEBALL_PIC_FRAMES(Luxury),
};
static const struct SpriteFrameImage sPicTable_Ball_PREMIER[] = {
    POKEBALL_PIC_FRAMES(Premier),
};
static const struct SpriteFrameImage sPicTable_Ball_DUSK[] = {
    POKEBALL_PIC_FRAMES(Dusk),
};
static const struct SpriteFrameImage sPicTable_Ball_HEAL[] = {
    POKEBALL_PIC_FRAMES(Heal),
};
static const struct SpriteFrameImage sPicTable_Ball_QUICK[] = {
    POKEBALL_PIC_FRAMES(Quick),
};
static const struct SpriteFrameImage sPicTable_Ball_CHERISH[] = {
    POKEBALL_PIC_FRAMES(Cherish),
};
static const struct SpriteFrameImage sPicTable_Ball_PARK[] = {
    POKEBALL_PIC_FRAMES(Park),
};
static const struct SpriteFrameImage sPicTable_Ball_FAST[] = {
    POKEBALL_PIC_FRAMES(Fast),
};
static const struct SpriteFrameImage sPicTable_Ball_LEVEL[] = {
    POKEBALL_PIC_FRAMES(Level),
};
static const struct SpriteFrameImage sPicTable_Ball_LURE[] = {
    POKEBALL_PIC_FRAMES(Lure),
};
static const struct SpriteFrameImage sPicTable_Ball_HEAVY[] = {
    POKEBALL_PIC_FRAMES(Heavy),
};
static const struct SpriteFrameImage sPicTable_Ball_LOVE[] = {
    POKEBALL_PIC_FRAMES(Love),
};
static const struct SpriteFrameImage sPicTable_Ball_FRIEND[] = {
    POKEBALL_PIC_FRAMES(Friend),
};
static const struct SpriteFrameImage sPicTable_Ball_MOON[] = {
    POKEBALL_PIC_FRAMES(Moon),
};
static const struct SpriteFrameImage sPicTable_Ball_SPORT[] = {
    POKEBALL_PIC_FRAMES(Sport),
};
static const struct SpriteFrameImage sPicTable_Ball_DREAM[] = {
    POKEBALL_PIC_FRAMES(Dream),
};
static const struct SpriteFrameImage sPicTable_Ball_BEAST[] = {
    POKEBALL_PIC_FRAMES(Beast),
};
#ifdef ITEM_STRANGE_BALL
static const struct SpriteFrameImage sPicTable_Ball_STRANGE[] = {
    POKEBALL_PIC_FRAMES(Strange),
};
#endif

#define POKEBALL_GFX_INFO(NAME)                                     \
    [BALL_##NAME] = {                                               \
        .tileTag = TAG_NONE,                                        \
        .paletteTag = OBJ_EVENT_PAL_TAG_BALL_##NAME,                \
        .size = 256,                                                \
        .width = 16,                                                \
        .height = 32,                                               \
        .shadowSize = SHADOW_SIZE_M,                                \
        .inanimate = TRUE,                                          \
        .oam = &gObjectEventBaseOam_16x32,                          \
        .subspriteTables = sOamTables_16x32,                        \
        .anims = sAnimTable_Following,                              \
        .images = sPicTable_Ball_##NAME,                            \
        .affineAnims = gDummySpriteAffineAnimTable,                 \
    }


const struct ObjectEventGraphicsInfo gPokeballGraphics[POKEBALL_COUNT] = {
    // Vanilla
    POKEBALL_GFX_INFO(MASTER),
    POKEBALL_GFX_INFO(ULTRA),
    POKEBALL_GFX_INFO(GREAT),
    POKEBALL_GFX_INFO(SAFARI),
    POKEBALL_GFX_INFO(NET),
    POKEBALL_GFX_INFO(DIVE),
    POKEBALL_GFX_INFO(NEST),
    POKEBALL_GFX_INFO(REPEAT),
    POKEBALL_GFX_INFO(TIMER),
    POKEBALL_GFX_INFO(LUXURY),
    POKEBALL_GFX_INFO(PREMIER),
    // Gen IV/Sinnoh pokeballs
    POKEBALL_GFX_INFO(DUSK),
    POKEBALL_GFX_INFO(HEAL),
    POKEBALL_GFX_INFO(QUICK),
    POKEBALL_GFX_INFO(CHERISH),
    POKEBALL_GFX_INFO(PARK),
    // Gen II/Johto Apricorn pokeballs
    POKEBALL_GFX_INFO(FAST),
    POKEBALL_GFX_INFO(LEVEL),
    POKEBALL_GFX_INFO(LURE),
    POKEBALL_GFX_INFO(HEAVY),
    POKEBALL_GFX_INFO(LOVE),
    POKEBALL_GFX_INFO(FRIEND),
    POKEBALL_GFX_INFO(MOON),
    POKEBALL_GFX_INFO(SPORT),
    // Gen V
    POKEBALL_GFX_INFO(DREAM),
    // Gen VII
    POKEBALL_GFX_INFO(BEAST),
    // Gen VIII
    #ifdef ITEM_STRANGE_BALL
    POKEBALL_GFX_INFO(STRANGE),
    #endif
};
#endif
