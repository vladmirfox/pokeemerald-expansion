#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"

EWRAM_DATA ALIGNED(4) u8 gDecompressionBuffer[0x4000] = {0};

//  Helper struct to build the tANS decode tables without having to do calculations at run-time
ALIGNED(4) static const struct DecodeYK sYkTemplate[2*TANS_TABLE_SIZE] = {
    [0] = {0, 0},
    [1] = {1<<6, 6},
    [2] = {2<<5, 5},
    [3] = {3<<5, 5},
    [4] = {4<<4, 4},
    [5] = {5<<4, 4},
    [6] = {6<<4, 4},
    [7] = {7<<4, 4},
    [8] = {8<<3, 3},
    [9] = {9<<3, 3},
    [10] = {10<<3, 3},
    [11] = {11<<3, 3},
    [12] = {12<<3, 3},
    [13] = {13<<3, 3},
    [14] = {14<<3, 3},
    [15] = {15<<3, 3},
    [16] = {16<<2, 2},
    [17] = {17<<2, 2},
    [18] = {18<<2, 2},
    [19] = {19<<2, 2},
    [20] = {20<<2, 2},
    [21] = {21<<2, 2},
    [22] = {22<<2, 2},
    [23] = {23<<2, 2},
    [24] = {24<<2, 2},
    [25] = {25<<2, 2},
    [26] = {26<<2, 2},
    [27] = {27<<2, 2},
    [28] = {28<<2, 2},
    [29] = {29<<2, 2},
    [30] = {30<<2, 2},
    [31] = {31<<2, 2},
    [32] = {32<<1, 1},
    [33] = {33<<1, 1},
    [34] = {34<<1, 1},
    [35] = {35<<1, 1},
    [36] = {36<<1, 1},
    [37] = {37<<1, 1},
    [38] = {38<<1, 1},
    [39] = {39<<1, 1},
    [40] = {40<<1, 1},
    [41] = {41<<1, 1},
    [42] = {42<<1, 1},
    [43] = {43<<1, 1},
    [44] = {44<<1, 1},
    [45] = {45<<1, 1},
    [46] = {46<<1, 1},
    [47] = {47<<1, 1},
    [48] = {48<<1, 1},
    [49] = {49<<1, 1},
    [50] = {50<<1, 1},
    [51] = {51<<1, 1},
    [52] = {52<<1, 1},
    [53] = {53<<1, 1},
    [54] = {54<<1, 1},
    [55] = {55<<1, 1},
    [56] = {56<<1, 1},
    [57] = {57<<1, 1},
    [58] = {58<<1, 1},
    [59] = {59<<1, 1},
    [60] = {60<<1, 1},
    [61] = {61<<1, 1},
    [62] = {62<<1, 1},
    [63] = {63<<1, 1},
    [64] = {64, 0},
    [65] = {65, 0},
    [66] = {66, 0},
    [67] = {67, 0},
    [68] = {68, 0},
    [69] = {69, 0},
    [70] = {70, 0},
    [71] = {71, 0},
    [72] = {72, 0},
    [73] = {73, 0},
    [74] = {74, 0},
    [75] = {75, 0},
    [76] = {76, 0},
    [77] = {77, 0},
    [78] = {78, 0},
    [79] = {79, 0},
    [80] = {80, 0},
    [81] = {81, 0},
    [82] = {82, 0},
    [83] = {83, 0},
    [84] = {84, 0},
    [85] = {85, 0},
    [86] = {86, 0},
    [87] = {87, 0},
    [88] = {88, 0},
    [89] = {89, 0},
    [90] = {90, 0},
    [91] = {91, 0},
    [92] = {92, 0},
    [93] = {93, 0},
    [94] = {94, 0},
    [95] = {95, 0},
    [96] = {96, 0},
    [97] = {97, 0},
    [98] = {98, 0},
    [99] = {99, 0},
    [100] = {100, 0},
    [101] = {101, 0},
    [102] = {102, 0},
    [103] = {103, 0},
    [104] = {104, 0},
    [105] = {105, 0},
    [106] = {106, 0},
    [107] = {107, 0},
    [108] = {108, 0},
    [109] = {109, 0},
    [110] = {110, 0},
    [111] = {111, 0},
    [112] = {112, 0},
    [113] = {113, 0},
    [114] = {114, 0},
    [115] = {115, 0},
    [116] = {116, 0},
    [117] = {117, 0},
    [118] = {118, 0},
    [119] = {119, 0},
    [120] = {120, 0},
    [121] = {121, 0},
    [122] = {122, 0},
    [123] = {123, 0},
    [124] = {124, 0},
    [125] = {125, 0},
    [126] = {126, 0},
    [127] = {127, 0},
};

// Checks if `ptr` is likely LZ77 data
// Checks word-alignment, min/max size, and header byte
// Returns uncompressed size if true, 0 otherwise
u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize)
{
    const u8 *data = ptr;
    u32 size;
    // Compressed data must be word aligned
    if (((u32)ptr) & 3)
        return 0;
    // Check LZ77 header byte
    // See https://problemkaputt.de/gbatek.htm#biosdecompressionfunctions
    if (data[0] != 0x10)
        return 0;

    // Read 24-bit uncompressed size
    size = data[1] | (data[2] << 8) | (data[3] << 16);
    if (size >= minSize && size <= maxSize)
        return size;
    return 0;
}

u16 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;

    DecompressDataWithHeaderWram(src->data, gDecompressionBuffer);
    dest.data = gDecompressionBuffer;
    dest.size = src->size;
    dest.tag = src->tag;
    return LoadSpriteSheet(&dest);
}

// This can be used for either compressed or uncompressed sprite sheets
u16 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset)
{
    struct SpriteTemplate myTemplate;
    struct SpriteFrameImage myImage;
    u32 size;

    // Check for LZ77 header and read uncompressed size, or fallback if not compressed (zero size)
    if ((size = IsLZ77Data(template->images->data, TILE_SIZE_4BPP, sizeof(gDecompressionBuffer))) == 0)
        return LoadSpriteSheetByTemplate(template, 0, offset);

    DecompressDataWithHeaderWram(template->images->data, gDecompressionBuffer);
    myImage.data = gDecompressionBuffer;
    myImage.size = size + offset;
    myTemplate.images = &myImage;
    myTemplate.tileTag = template->tileTag;

    return LoadSpriteSheetByTemplate(&myTemplate, 0, offset);
}

void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    DecompressDataWithHeaderWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
}

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;

    DecompressDataWithHeaderWram(src->data, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag)
{
    struct SpritePalette dest;

    DecompressDataWithHeaderWram(pal, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    DecompressDataWithHeaderWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer)
{
    DecompressDataWithHeaderWram(src->data, buffer);
}

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality)
{
    LoadSpecialPokePic(dest, species, personality, isFrontPic);
}

//  Unpack packed tANS encoded data symbol frequences into their individual parts
static inline void UnpackFrequenciesLoop(const u32 *packedFreqs, u32 *freqs, u32 i)
{
    // Loop unpack
    freqs[i*5 + 0] = (packedFreqs[i] >> (6*0)) & PACKED_FREQ_MASK;
    freqs[i*5 + 1] = (packedFreqs[i] >> (6*1)) & PACKED_FREQ_MASK;
    freqs[i*5 + 2] = (packedFreqs[i] >> (6*2)) & PACKED_FREQ_MASK;
    freqs[i*5 + 3] = (packedFreqs[i] >> (6*3)) & PACKED_FREQ_MASK;
    freqs[i*5 + 4] = (packedFreqs[i] >> (6*4)) & PACKED_FREQ_MASK;

    freqs[15] += (packedFreqs[i] & PARTIAL_FREQ_MASK) >> (30 - 2*i);
}

void UnpackFrequencies(const u32 *packedFreqs, u32 *freqs)
{
    freqs[15] = 0;

    UnpackFrequenciesLoop(packedFreqs, freqs, 0);
    UnpackFrequenciesLoop(packedFreqs, freqs, 1);
    UnpackFrequenciesLoop(packedFreqs, freqs, 2);
}

//  Wrapper function for all decompression calls using formats with headers
//  calls the correct decompression function depending on the header
//  VRAM version
void DecompressDataWithHeaderVram(const u32 *src, void *dest)
{
    struct SmolHeader header;
    CpuCopy32(src, &header, 8);
    switch (header.mode)
    {
        case MODE_LZ77:
            LZ77UnCompVram(src, dest);
            break;
        default:
            SmolDecompressData(&header, &src[2], dest);
    }
}

//  Wrapper function for all decompression calls using formats with headers
//  calls the correct decompression function depending on the header
//  WRAM version
void DecompressDataWithHeaderWram(const u32 *src, void *dest)
{
    struct SmolHeader header;
    CpuCopy32(src, &header, 8);
    switch (header.mode)
    {
        case MODE_LZ77:
            LZ77UnCompWram(src, dest);
            break;
        default:
            SmolDecompressData(&header, &src[2], dest);
    }
}

#define REP0(X)
#define REP1(X) X
#define REP2(X) REP1(X) X
#define REP3(X) REP2(X) X
#define REP4(X) REP3(X) X
#define REP5(X) REP4(X) X
#define REP6(X) REP5(X) X
#define REP7(X) REP6(X) X
#define REP8(X) REP7(X) X
#define REP9(X) REP8(X) X
#define REP10(X) REP9(X) X

#define REP(TENS,ONES,X) \
  REP##TENS(REP10(X)) \
  REP##ONES(X)


//  Build the tANS decompression table from the specified frequencies and the precomputed helper struct
void BuildDecompressionTable(const u32 *packedFreqs, struct DecodeYK *table, u8 *symbolTable)
{
    u32 freqs[16];

    UnpackFrequencies(packedFreqs, freqs);

    #define TABLE_TYPE u16

    TABLE_TYPE *tableAsU16 = (void *) table;

    //TestStr();

    for (u32 i = 0; i < 16; i++)
    {
        const TABLE_TYPE *srcTemplate;
        switch (freqs[i]) {
        case 0:
            break;
        case 1:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[1]);
            REP(0, 1, *tableAsU16++ = *srcTemplate++;)
            REP(0, 1, *symbolTable++ = i;);
            break;
        case 2:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[2]);
            REP(0, 2, *tableAsU16++ = *srcTemplate++;)
            REP(0, 2, *symbolTable++ = i;);
            break;
        case 3:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[3]);
            REP(0, 3, *tableAsU16++ = *srcTemplate++;)
            REP(0, 3, *symbolTable++ = i;);
            break;
        case 4:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[4]);
            REP(0, 4, *tableAsU16++ = *srcTemplate++;)
            REP(0, 4, *symbolTable++ = i;);
            break;
        case 5:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[5]);
            REP(0, 5, *tableAsU16++ = *srcTemplate++;)
            REP(0, 5, *symbolTable++ = i;);
            break;
        case 6:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[6]);
            REP(0, 6, *tableAsU16++ = *srcTemplate++;)
            REP(0, 6, *symbolTable++ = i;);
            break;
        case 7:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[7]);
            REP(0, 7, *tableAsU16++ = *srcTemplate++;)
            REP(0, 7, *symbolTable++ = i;);
            break;
        case 8:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[8]);
            REP(0, 8, *tableAsU16++ = *srcTemplate++;)
            REP(0, 8, *symbolTable++ = i;);
            break;
        case 9:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[9]);
            REP(0, 9, *tableAsU16++ = *srcTemplate++;)
            REP(0, 9, *symbolTable++ = i;);
            break;
        case 10:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[10]);
            REP(1, 0, *tableAsU16++ = *srcTemplate++;)
            REP(1, 0, *symbolTable++ = i;);
            break;
        case 11:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[11]);
            REP(1, 1, *tableAsU16++ = *srcTemplate++;)
            REP(1, 1, *symbolTable++ = i;);
            break;
        case 12:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[12]);
            REP(1, 2, *tableAsU16++ = *srcTemplate++;)
            REP(1, 2, *symbolTable++ = i;);
            break;
        case 13:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[13]);
            REP(1, 3, *tableAsU16++ = *srcTemplate++;)
            REP(1, 3, *symbolTable++ = i;);
            break;
        case 14:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[14]);
            REP(1, 4, *tableAsU16++ = *srcTemplate++;)
            REP(1, 4, *symbolTable++ = i;);
            break;
        case 15:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[15]);
            REP(1, 5, *tableAsU16++ = *srcTemplate++;)
            REP(1, 5, *symbolTable++ = i;);
            break;
        case 16:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[16]);
            REP(1, 6, *tableAsU16++ = *srcTemplate++;)
            REP(1, 6, *symbolTable++ = i;);
            break;
        case 17:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[17]);
            REP(1, 7, *tableAsU16++ = *srcTemplate++;)
            REP(1, 7, *symbolTable++ = i;);
            break;
        case 18:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[18]);
            REP(1, 8, *tableAsU16++ = *srcTemplate++;)
            REP(1, 8, *symbolTable++ = i;);
            break;
        case 19:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[19]);
            REP(1, 9, *tableAsU16++ = *srcTemplate++;)
            REP(1, 9, *symbolTable++ = i;);
            break;
        case 20:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[20]);
            REP(2, 0, *tableAsU16++ = *srcTemplate++;)
            REP(2, 0, *symbolTable++ = i;);
            break;
        case 21:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[21]);
            REP(2, 1, *tableAsU16++ = *srcTemplate++;)
            REP(2, 1, *symbolTable++ = i;);
            break;
        case 22:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[22]);
            REP(2, 2, *tableAsU16++ = *srcTemplate++;)
            REP(2, 2, *symbolTable++ = i;);
            break;
        case 23:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[23]);
            REP(2, 3, *tableAsU16++ = *srcTemplate++;)
            REP(2, 3, *symbolTable++ = i;);
            break;
        case 24:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[24]);
            REP(2, 4, *tableAsU16++ = *srcTemplate++;)
            REP(2, 4, *symbolTable++ = i;);
            break;
        case 25:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[25]);
            REP(2, 5, *tableAsU16++ = *srcTemplate++;)
            REP(2, 5, *symbolTable++ = i;);
            break;
        case 26:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[26]);
            REP(2, 6, *tableAsU16++ = *srcTemplate++;)
            REP(2, 6, *symbolTable++ = i;);
            break;
        case 27:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[27]);
            REP(2, 7, *tableAsU16++ = *srcTemplate++;)
            REP(2, 7, *symbolTable++ = i;);
            break;
        case 28:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[28]);
            REP(2, 8, *tableAsU16++ = *srcTemplate++;)
            REP(2, 8, *symbolTable++ = i;);
            break;
        case 29:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[29]);
            REP(2, 9, *tableAsU16++ = *srcTemplate++;)
            REP(2, 9, *symbolTable++ = i;);
            break;
        case 30:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[30]);
            REP(3, 0, *tableAsU16++ = *srcTemplate++;)
            REP(3, 0, *symbolTable++ = i;);
            break;
        case 31:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[31]);
            REP(3, 1, *tableAsU16++ = *srcTemplate++;)
            REP(3, 1, *symbolTable++ = i;);
            break;
        case 32:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[32]);
            REP(3, 2, *tableAsU16++ = *srcTemplate++;)
            REP(3, 2, *symbolTable++ = i;);
            break;
        case 33:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[33]);
            REP(3, 3, *tableAsU16++ = *srcTemplate++;)
            REP(3, 3, *symbolTable++ = i;);
            break;
        case 34:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[34]);
            REP(3, 4, *tableAsU16++ = *srcTemplate++;)
            REP(3, 4, *symbolTable++ = i;);
            break;
        case 35:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[35]);
            REP(3, 5, *tableAsU16++ = *srcTemplate++;)
            REP(3, 5, *symbolTable++ = i;);
            break;
        case 36:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[36]);
            REP(3, 6, *tableAsU16++ = *srcTemplate++;)
            REP(3, 6, *symbolTable++ = i;);
            break;
        case 37:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[37]);
            REP(3, 7, *tableAsU16++ = *srcTemplate++;)
            REP(3, 7, *symbolTable++ = i;);
            break;
        case 38:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[38]);
            REP(3, 8, *tableAsU16++ = *srcTemplate++;)
            REP(3, 8, *symbolTable++ = i;);
            break;
        case 39:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[39]);
            REP(3, 9, *tableAsU16++ = *srcTemplate++;)
            REP(3, 9, *symbolTable++ = i;);
            break;
        case 40:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[40]);
            REP(4, 0, *tableAsU16++ = *srcTemplate++;)
            REP(4, 0, *symbolTable++ = i;);
            break;
        case 41:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[41]);
            REP(4, 1, *tableAsU16++ = *srcTemplate++;)
            REP(4, 1, *symbolTable++ = i;);
            break;
        case 42:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[42]);
            REP(4, 2, *tableAsU16++ = *srcTemplate++;)
            REP(4, 2, *symbolTable++ = i;);
            break;
        case 43:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[43]);
            REP(4, 3, *tableAsU16++ = *srcTemplate++;)
            REP(4, 3, *symbolTable++ = i;);
            break;
        case 44:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[44]);
            REP(4, 4, *tableAsU16++ = *srcTemplate++;)
            REP(4, 4, *symbolTable++ = i;);
            break;
        case 45:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[45]);
            REP(4, 5, *tableAsU16++ = *srcTemplate++;)
            REP(4, 5, *symbolTable++ = i;);
            break;
        case 46:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[46]);
            REP(4, 6, *tableAsU16++ = *srcTemplate++;)
            REP(4, 6, *symbolTable++ = i;);
            break;
        case 47:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[47]);
            REP(4, 7, *tableAsU16++ = *srcTemplate++;)
            REP(4, 7, *symbolTable++ = i;);
            break;
        case 48:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[48]);
            REP(4, 8, *tableAsU16++ = *srcTemplate++;)
            REP(4, 8, *symbolTable++ = i;);
            break;
        case 49:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[49]);
            REP(4, 9, *tableAsU16++ = *srcTemplate++;)
            REP(4, 9, *symbolTable++ = i;);
            break;
        case 50:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[50]);
            REP(5, 0, *tableAsU16++ = *srcTemplate++;)
            REP(5, 0, *symbolTable++ = i;);
            break;
        case 51:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[51]);
            REP(5, 1, *tableAsU16++ = *srcTemplate++;)
            REP(5, 1, *symbolTable++ = i;);
            break;
        case 52:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[52]);
            REP(5, 2, *tableAsU16++ = *srcTemplate++;)
            REP(5, 2, *symbolTable++ = i;);
            break;
        case 53:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[53]);
            REP(5, 3, *tableAsU16++ = *srcTemplate++;)
            REP(5, 3, *symbolTable++ = i;);
            break;
        case 54:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[54]);
            REP(5, 4, *tableAsU16++ = *srcTemplate++;)
            REP(5, 4, *symbolTable++ = i;);
            break;
        case 55:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[55]);
            REP(5, 5, *tableAsU16++ = *srcTemplate++;)
            REP(5, 5, *symbolTable++ = i;);
            break;
        case 56:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[56]);
            REP(5, 6, *tableAsU16++ = *srcTemplate++;)
            REP(5, 6, *symbolTable++ = i;);
            break;
        case 57:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[57]);
            REP(5, 7, *tableAsU16++ = *srcTemplate++;)
            REP(5, 7, *symbolTable++ = i;);
            break;
        case 58:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[58]);
            REP(5, 8, *tableAsU16++ = *srcTemplate++;)
            REP(5, 8, *symbolTable++ = i;);
            break;
        case 59:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[59]);
            REP(5, 9, *tableAsU16++ = *srcTemplate++;)
            REP(5, 9, *symbolTable++ = i;);
            break;
        case 60:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[60]);
            REP(6, 0, *tableAsU16++ = *srcTemplate++;)
            REP(6, 0, *symbolTable++ = i;);
            break;
        case 61:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[61]);
            REP(6, 1, *tableAsU16++ = *srcTemplate++;)
            REP(6, 1, *symbolTable++ = i;);
            break;
        case 62:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[62]);
            REP(6, 2, *tableAsU16++ = *srcTemplate++;)
            REP(6, 2, *symbolTable++ = i;);
            break;
        case 63:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[63]);
            REP(6, 3, *tableAsU16++ = *srcTemplate++;)
            REP(6, 3, *symbolTable++ = i;);
            break;
        case 64:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[64]);
            REP(6, 4, *tableAsU16++ = *srcTemplate++;)
            REP(6, 4, *symbolTable++ = i;);
            break;
        }
    }

    #undef TABLE_TYPE
}

static EWRAM_DATA u8 sCurrSymbol = 0;
static EWRAM_DATA u8 sBitIndex = 0;
static EWRAM_DATA u32 sReadIndex = 0;
static IWRAM_DATA u32 sCurrState = 0;
// Order of allocated memory- ykTable, symbolTable(these go first, because are always aligned), symSize, loSize(last, because not aligned)
static EWRAM_DATA void *sMemoryAllocated;

struct DecodeHelperStruct
{
    void *resultVec; // u16 for SymDelta, u8 for LOtANS
    u8 *symbolTable;
    struct DecodeYK *ykTable;
    u32 count;
};

//  Dark Egg magic
static inline void CopyFuncToIwram(void *funcBuffer, void *_funcStartAddress, void *_funcEndAdress)
{
    CpuCopy32(_funcStartAddress, funcBuffer, _funcEndAdress - _funcStartAddress);
}

//  Inner loop of tANS decoding for Lengths and Offset data for decompression instructions, uses u8 data sizes
//  Basic process for decoding a tANS encoded value is to read the current symbol from the decoding table, then calculate the next state
//  from the y and k values for the current state and add the value read from the next k bits in the bitstream
// - O3 saves cycles
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) void DecodeLOtANSLoop(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable)
{
    u32 readIndex = sReadIndex;
    u32 currBits = data[readIndex];
    u32 bitIndex = sBitIndex;
    u8 * resultVec = (u8*)(decodeHelper->resultVec);
    u8 * resultVecEnd = &resultVec[decodeHelper->count];

    do
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 2; currNibble++)
        {
            symbol += decodeHelper->symbolTable[sCurrState] << (currNibble*4);
            u32 currK = decodeHelper->ykTable[sCurrState].kVal;
            sCurrState = decodeHelper->ykTable[sCurrState].yVal - 64;
            sCurrState += (currBits >> bitIndex) & maskTable[currK];
            bitIndex += currK;
            if (bitIndex >= 32)
            {
                currBits = data[++readIndex];
                if (bitIndex == 32)
                {
                    bitIndex = 0;
                }
                else
                {
                    bitIndex -= 32;
                    sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex);
                }
            }
        }
        *resultVec++ = symbol;
    } while (resultVec < resultVecEnd);

    sBitIndex = bitIndex;
    sReadIndex = readIndex;
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) void SwitchToArmCallLOtANS(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable))
{
    decodeFunction(data, decodeHelper, maskTable);
}

//  Mask table for reading data from a bitstream for tANS decoding
// fastest in IWRAM, all masks are assigned separately, because we don't want to waste time on memset
static inline void SetMaskTable(u8 *maskTable)
{
    maskTable[0] = 0;
    maskTable[1] = 1;
    maskTable[2] = 3;
    maskTable[3] = 7;
    maskTable[4] = 15;
    maskTable[5] = 31;
    maskTable[6] = 63;
    maskTable[7] = 0; // This mask doesn't really 'exist', but because the memory is aligned to 4 now, the compiler can generate 2 ldr/str instructions instead of strb/strh
}

//  Function that decodes tANS encoded LO data, resulting data is u8 values
void DecodeLOtANS(const u32 *data, const u32 *pFreqs, u8 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = sMemoryAllocated;
    u8 *symbolTable = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK));
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);

    u8 maskTable[8];
    SetMaskTable(maskTable);

    struct DecodeHelperStruct decodeHelper;
    decodeHelper.resultVec = resultVec;
    decodeHelper.ykTable = ykTable;
    decodeHelper.symbolTable = symbolTable;
    decodeHelper.count = count;

    u32 funcBuffer[200];

    CopyFuncToIwram(funcBuffer, DecodeLOtANSLoop, SwitchToArmCallLOtANS);
    SwitchToArmCallLOtANS(data, &decodeHelper, maskTable, (void *) funcBuffer);
}

__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) void DecodeSymtANSLoop(const u32 *data, struct DecodeHelperStruct *stuff, u8 *maskTable)
{
    u32 currBits = data[sReadIndex];
    u32 bitIndex = sBitIndex;

    u16 * resultVec_16 = (u16*)(stuff->resultVec);
    u16 * resultVecEnd = &resultVec_16[stuff->count];

    do
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            symbol += stuff->symbolTable[sCurrState] << (currNibble*4);
            u32 currK = stuff->ykTable[sCurrState].kVal;
            u32 nextState = stuff->ykTable[sCurrState].yVal;
            nextState += (currBits >> bitIndex) & (0xff >> (8-currK)); // Masktable is slower here for some reason.
            if (bitIndex + currK < 32)
            {
                bitIndex += currK;
            }
            else if (bitIndex + currK == 32)
            {
                currBits = data[++sReadIndex];
                bitIndex = 0;
            }
            else if ((bitIndex + currK) > 32)
            {
                currBits = data[++sReadIndex];
                u32 remainder = bitIndex + currK - 32;
                nextState += (currBits & ((1u << remainder) - 1)) << (currK - remainder);
                bitIndex = remainder;
            }
            sCurrState = nextState - 64;
        }
        *resultVec_16++ = symbol;
    } while (resultVec_16 < resultVecEnd);

    sBitIndex = bitIndex;
}

__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) void SwitchToArmCallDecodeSymtANS(const u32 *data, struct DecodeHelperStruct *stuff, u8 *maskTable, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *stuff, u8 *maskTable))
{
    decodeFunction(data, stuff, maskTable);
}

void DecodeSymtANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = sMemoryAllocated;
    u8 *symbolTable = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK));
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);

    u8 maskTable[8];
    SetMaskTable(maskTable);

    struct DecodeHelperStruct stuff;

    stuff.ykTable = ykTable;
    stuff.symbolTable = symbolTable;
    stuff.count = count;
    stuff.resultVec = resultVec;

    u32 funcBuffer[300];
    CopyFuncToIwram(funcBuffer, DecodeSymtANSLoop, SwitchToArmCallDecodeSymtANS);
    SwitchToArmCallDecodeSymtANS(data, &stuff, maskTable, (void *) funcBuffer);
}

//  Inner loop of tANS decoding for delta encoded symbol data, uses u16 data size
//  Basic process for decoding a tANS encoded value is to read the current symbol from the decoding table, then calculate the next state
//  from the y and k values for the current state and add the value read from the next k bits in the bitstream
// -O3 saves us almost 30k cycles compared to -O2
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) void DecodeSymDeltatANSLoop(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable)
{
    data += sReadIndex;
    const u32 *dataCmpPtr = data;

    u32 currBits = *data++;
    u32 currSymbol = 0;
    u32 bitIndex = sBitIndex;
    u16 * resultVec_16 = (u16*)(decodeHelper->resultVec);
    u32 * resultVec_32 = (u32*)(decodeHelper->resultVec); // Since we're doing 2 symbols at one time we store as word which is faster than storing two halfwords.
    u16 * resultVecEnd = &resultVec_16[decodeHelper->count];

    do
    {
        u32 symbol = 0;

        for (u32 currNibble = 0; currNibble < 8; currNibble++)
        {
            currSymbol = (currSymbol + decodeHelper->symbolTable[sCurrState]) & 0xf;
            symbol |= currSymbol << (currNibble*4);
            u32 currK = decodeHelper->ykTable[sCurrState].kVal;
            sCurrState = decodeHelper->ykTable[sCurrState].yVal - 64;
            sCurrState += (currBits >> bitIndex) & maskTable[currK];
            bitIndex += currK;
            if (bitIndex > 32)
            {
                currBits = *data++;
                bitIndex -= 32;
                sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex);
            }
            else if (bitIndex == 32)
            {
                currBits = *data++;
                bitIndex = 0;
            }
        }

        *resultVec_32++ = (symbol);

    } while (resultVec_32 < (u32 *) resultVecEnd);
    sBitIndex = bitIndex;
    sCurrSymbol = currSymbol;
    sReadIndex += ((data - 1) - dataCmpPtr);
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) void SwitchToArmCallSymDeltaANS(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *decodeHelper, u8 *maskTable))
{
    decodeFunction(data, decodeHelper, maskTable);
}

void DecodeSymDeltatANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = sMemoryAllocated;
    u8 *symbolTable = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK));
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);

    u8 maskTable[8];
    SetMaskTable(maskTable);

    // We want to store in packs of 2, so count needs to be divisible by 2
    u32 remainingCount = count % 2;
    struct DecodeHelperStruct decodeHelper;

    decodeHelper.ykTable = ykTable;
    decodeHelper.symbolTable = symbolTable;
    decodeHelper.count = count - remainingCount;
    decodeHelper.resultVec = resultVec;

    u32 funcBuffer[400];
    CopyFuncToIwram(funcBuffer, DecodeSymDeltatANSLoop, SwitchToArmCallSymDeltaANS);
    SwitchToArmCallSymDeltaANS(data, &decodeHelper, maskTable, (void *) funcBuffer);

    u32 currBits = data[sReadIndex];
    for (int i = 0; i < remainingCount; i++)
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            sCurrSymbol = (sCurrSymbol + symbolTable[sCurrState]) & 0xf;
            symbol += sCurrSymbol << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal;
            u32 nextState = ykTable[sCurrState].yVal;
            nextState += (currBits >> sBitIndex) & maskTable[currK];
            if (sBitIndex + currK < 32)
            {
                sBitIndex += currK;
            }
            else if (sBitIndex + currK == 32)
            {
                currBits = data[++sReadIndex];
                sBitIndex = 0;
            }
            else if ((sBitIndex + currK) > 32)
            {
                currBits = data[++sReadIndex];
                u32 remainder = sBitIndex + currK - 32;
                nextState += (currBits & ((1u << remainder) - 1)) << (currK - remainder);
                sBitIndex = remainder;
            }
            sCurrState = nextState - 64;
        }
        resultVec[count - remainingCount + i] = symbol;
    }
}

static inline void Fill16(u16 value, void *_dst, u32 size)
{
    u16 *dst = _dst;
    for (u32 i = 0; i < size; i++) {
        dst[i] = value;
    }
}

static inline void Copy16(const void *_src, void *_dst, u32 size)
{
    const u16 *src = _src;
    u16 *dst = _dst;
    for (u32 i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

//  Function to decode the instructions into the actual decompressed data
//  Basic process:
//  Read length from the loVec, 1 or 2 bytes as indicated by the last bit in the first byte
//  Read offset from the loVec, 1 or 2 bytes as indicated by the last bit in the first byte
//  If length is not 0 and offset is not 1:
//      Insert the current value from the Symbol vector into current result position and advance symbol vector by 1
//      Copy <length> values from <offset> values back in the result vector
//  If length is not 0 and offser is 1:
//      Insert the current value from the Symbol vector into current result position <length> times, then advance symbol vector by 1
//  If length is 0:
//      Insert <offset> number of symbols from the symbol vector into the result vector and advance the symbol vector position by <offset>
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) void DecodeInstructions(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest)
{
    u32 loIndex = 0;
    u32 symIndex = 0;
    while (loIndex < headerLoSize)
    {
        u32 currLength = loVec[loIndex] & FIRST_LO_MASK;
        if (loVec[loIndex] & CONTINUE_BIT)
        {
            currLength += loVec[loIndex+1] << 7;
            loIndex += 2;
        }
        else
        {
            loIndex++;
        }

        u32 currOffset = loVec[loIndex] & FIRST_LO_MASK;
        if (loVec[loIndex] & CONTINUE_BIT)
        {
            currOffset += loVec[loIndex+1] << 7;
            loIndex += 2;
        }
        else
        {
            loIndex++;
        }

        if (currLength != 0)
        {
            *(u16 *)(dest) = symVec[symIndex];
            dest = (void *)(dest + 2);
            if (currOffset == 1)
            {
                Fill16(symVec[symIndex], dest, currLength);
                dest = (void *)(dest + currLength*2);
            }
            else
            {
                Copy16((void *)(dest - currOffset*2), dest, currLength);
                dest = (void *)(dest + currLength*2);
            }
            symIndex++;
        }
        else
        {
            Copy16(&symVec[symIndex], dest, currOffset);
            dest = (void *)(dest + currOffset*2);
            symIndex += currOffset;
        }
    }
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) void SwitchToArmCallDecodeInstructions(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest, void (*decodeFunction)(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest))
{
    decodeFunction(headerLoSize, loVec, symVec, dest);
}

//  Dark Egg magic
void DecodeInstructionsIwram(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest)
{
    u32 funcBuffer[200];

    CopyFuncToIwram(funcBuffer, DecodeInstructions, SwitchToArmCallDecodeInstructions);
    SwitchToArmCallDecodeInstructions(headerLoSize, loVec, symVec, dest, (void *) funcBuffer);
}

//  Entrance point for smol compressed data
void SmolDecompressData(const struct SmolHeader *header, const u32 *data, void *dest)
{
    //  This is apparently needed due to Game Freak sending bullshit down the decompression pipeline
    if (header->loSize == 0 || header->symSize == 0)
        return;
    u8 *leftoverPos = (u8 *)data;

    sCurrState = header->initialState;
    // Allocate also for ykTable and symbolTable
    u32 headerLoSize = header->loSize;
    u32 headerSymSize = header->symSize;
    u32 alignedLoSize = header->loSize % 2 == 1 ? headerLoSize + 1 : headerLoSize;
    // LoSize HAS TO go last, because it is NOT aligned
    sMemoryAllocated = Alloc((TANS_TABLE_SIZE*sizeof(struct DecodeYK) + (TANS_TABLE_SIZE * 4)) + (headerSymSize*2) + alignedLoSize);
    u16 *symVec = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK) + (TANS_TABLE_SIZE * 4));
    u8 *loVec = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK) + (TANS_TABLE_SIZE * 4)) + headerSymSize*2;
    bool32 loEncoded = isModeLoEncoded(header->mode);
    bool32 symEncoded = isModeSymEncoded(header->mode);
    bool32 symDelta = isModeSymDelta(header->mode);

    const u32 *pLoFreqs;
    const u32 *pSymFreqs;

    sReadIndex = 0;
    //  Use different decoding flows depending on which mode the data is compressed with
    switch (header->mode)
    {
        case ENCODE_LO:
            pLoFreqs = &data[sReadIndex];
            sReadIndex += 3;
            break;
        case ENCODE_DELTA_SYMS:
        case ENCODE_SYMS:
            pSymFreqs = &data[sReadIndex];
            sReadIndex += 3;
            break;
        case ENCODE_BOTH:
        case ENCODE_BOTH_DELTA_SYMS:
            pLoFreqs = &data[sReadIndex];
            pSymFreqs = &data[sReadIndex + 3];
            sReadIndex += 6;
            break;
    }

    sBitIndex = 0;
    //  Decode tANS encoded LO data, mode 3, 4 and 5
    if (loEncoded)
    {
        DecodeLOtANS(data, pLoFreqs, loVec, headerLoSize);
        leftoverPos += 12;
    }
    //  Decode tANS encoded symbol data, mode 1, 2, 4 and 5
    if (symEncoded)
    {
        //  Symbols are delta encoded, mode 2 and 5
        if (symDelta)
            DecodeSymDeltatANS(data, pSymFreqs, symVec, headerSymSize);
        //  Symbols are not delta encoded, mode 1 and 4
        else
            DecodeSymtANS(data, pSymFreqs, symVec, headerSymSize);
        leftoverPos += 12;
    }

    //  If not both of lo and sym data are tANS encoded, data that isn't entropy encoded exists
    //  This is stored after the 32-bit aligned bitstream
    if (loEncoded || symEncoded)
        leftoverPos += 4*header->bitstreamSize;

    //  Copy the not entropy encoded symbol data to the symbol buffer
    //  Symbol data is u16 aligned
    if (symEncoded == FALSE)
    {
        DmaCopy16(3, leftoverPos, symVec, headerSymSize*2);
        leftoverPos += headerSymSize*2;
    }

    //  Copy the not entropy encoded lo data to the lo buffer
    //  Despite the individual lo values being u8 aligned, the entire vector for the u8 values is u16 aligned
    if (loEncoded == FALSE)
    {
        DmaCopy16(3, leftoverPos, loVec, alignedLoSize);
    }

    //  Actually decode the final data from loVec and symVec
    DecodeInstructionsIwram(headerLoSize, loVec, symVec, dest);

    Free(sMemoryAllocated);
}

//  Helper functions for determining modes
bool32 isModeLoEncoded(enum CompressionMode mode)
{
    if (mode == ENCODE_LO
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

bool32 isModeSymEncoded(enum CompressionMode mode)
{
    if (mode == ENCODE_SYMS
     || mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

bool32 isModeSymDelta(enum CompressionMode mode)
{
    if (mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);

    if (isFrontPic)
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].frontPicFemale != NULL && IsPersonalityFemale(species, personality))
            DecompressDataWithHeaderWram(gSpeciesInfo[species].frontPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].frontPic != NULL)
            DecompressDataWithHeaderWram(gSpeciesInfo[species].frontPic, dest);
        else
            DecompressDataWithHeaderWram(gSpeciesInfo[SPECIES_NONE].frontPic, dest);
    }
    else
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].backPicFemale != NULL && IsPersonalityFemale(species, personality))
            DecompressDataWithHeaderWram(gSpeciesInfo[species].backPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].backPic != NULL)
            DecompressDataWithHeaderWram(gSpeciesInfo[species].backPic, dest);
        else
            DecompressDataWithHeaderWram(gSpeciesInfo[SPECIES_NONE].backPic, dest);
    }

    if (species == SPECIES_SPINDA && isFrontPic)
    {
        DrawSpindaSpots(personality, dest, FALSE);
        DrawSpindaSpots(personality, dest, TRUE);
    }
}

void Unused_DecompressDataWithHeaderWramIndirect(const void **src, void *dest)
{
    DecompressDataWithHeaderWram(*src, dest);
}

static void UNUSED StitchObjectsOn8x8Canvas(s32 object_size, s32 object_count, u8 *src_tiles, u8 *dest_tiles)
{
    /*
      This function appears to emulate behaviour found in the GB(C) versions regarding how the Pokemon images
      are stitched together to be displayed on the battle screen.
      Given "compacted" tiles, an object count and a bounding box/object size, place the tiles in such a way
      that the result will have each object centered in a 8x8 tile canvas.
    */
    s32 i, j, k, l;
    u8 *src = src_tiles, *dest = dest_tiles;
    u8 bottom_off;

    if (object_size & 1)
    {
        // Object size is odd
        bottom_off = (object_size >> 1) + 4;
        for (l = 0; l < object_count; l++)
        {
            // Clear all unused rows of tiles plus the half-tile required due to centering
            for (j = 0; j < 8-object_size; j++)
            {
                for (k = 0; k < 8; k++)
                {
                    for (i = 0; i < 16; i++)
                    {
                        if (j % 2 == 0)
                        {
                            // Clear top half of top tile and bottom half of bottom tile when on even j
                            ((dest+i) + (k << 5))[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                        }
                        else
                        {
                            // Clear bottom half of top tile and top half of tile following bottom tile when on odd j
                            ((dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 256)[((j >> 1) << 8)] = 0;
                        }
                    }
                }
            }

            // Clear the columns to the left and right that wont be used completely
            // Unlike the previous loops, this will clear the later used space as well
            for (j = 0; j < 2; j++)
            {
                for (i = 0; i < 8; i++)
                {
                    for (k = 0; k < 32; k++)
                    {
                        // Left side
                        ((dest+k) + (i << 8))[(j << 5)] = 0;
                        // Right side
                        ((dest+k) + (i << 8))[(j << 5)+192] = 0;
                    }
                }
            }

            // Skip the top row and first tile on the second row for objects of size 5
            if (object_size == 5) dest += 0x120;

            // Copy tile data
            for (j = 0; j < object_size; j++)
            {
                for (k = 0; k < object_size; k++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        // Offset the tile by +4px in both x and y directions
                        (dest + (i << 2))[18] = (src + (i << 2))[0];
                        (dest + (i << 2))[19] = (src + (i << 2))[1];
                        (dest + (i << 2))[48] = (src + (i << 2))[2];
                        (dest + (i << 2))[49] = (src + (i << 2))[3];

                        (dest + (i << 2))[258] = (src + (i << 2))[16];
                        (dest + (i << 2))[259] = (src + (i << 2))[17];
                        (dest + (i << 2))[288] = (src + (i << 2))[18];
                        (dest + (i << 2))[289] = (src + (i << 2))[19];
                    }
                    src += 32;
                    dest += 32;
                }

                // At the end of a row, skip enough tiles to get to the beginning of the next row
                if (object_size == 7) dest += 0x20;
                else if (object_size == 5) dest += 0x60;
            }

            // Skip remaining unused space to go to the beginning of the next object
            if (object_size == 7) dest += 0x100;
            else if (object_size == 5) dest += 0x1e0;
        }
    }
    else
    {
        // Object size is even
        for (i = 0; i < object_count; i++)
        {
            // For objects of size 6, the first and last row and column will be cleared
            // While the remaining space will be filled with actual data
            if (object_size == 6)
            {
                for (k = 0; k < 256; k++)
                {
                    *dest = 0;
                    dest++;
                }
            }

            for (j = 0; j < object_size; j++)
            {
                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++)
                    {
                        *dest = 0;
                        dest++;
                    }
                }

                // Copy tile data
                for (k = 0; k < 32 * object_size; k++)
                {
                    *dest = *src;
                    src++;
                    dest++;
                }

                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++)
                    {
                        *dest = 0;
                        dest++;
                    }
                }
            }

            if (object_size == 6)
            {
                for (k = 0; k < 256; k++)
                {
                    *dest = 0;
                    dest++;
                }
            }
        }
    }
}

u32 GetDecompressedDataSize(const u32 *ptr)
{
    union CompressionHeader *header = (union CompressionHeader *)ptr;
    switch (header->smol.mode)
    {
        case MODE_LZ77:
            return header->lz77.size;
        default:
            return header->smol.imageSize*SMOL_IMAGE_SIZE_MULTIPLIER;
    }
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(GetDecompressedDataSize(&src->data[0]));
    DecompressDataWithHeaderWram(src->data, buffer);

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;

    LoadSpriteSheet(&dest);
    Free(buffer);
    return FALSE;
}

bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;
    void *buffer;

    buffer = AllocZeroed(GetDecompressedDataSize(&src->data[0]));
    DecompressDataWithHeaderWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}
