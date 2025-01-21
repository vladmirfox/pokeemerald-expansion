#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"

EWRAM_DATA ALIGNED(4) u8 gDecompressionBuffer[0x4000] = {0};

#define TABLE_TYPE u32

struct __attribute__((packed, aligned(4))) DecodeYK {
    u8 kVal;
    u8 yVal;
};

static IWRAM_DATA TABLE_TYPE sIwramYkTemplate[TANS_TABLE_SIZE] = {0};

//  Helper struct to build the tANS decode tables without having to do calculations at run-time
static const struct DecodeYK sYkTemplate[2*TANS_TABLE_SIZE] = {
    [0] = {0, 0},
    [1] = {6, (1 << 6) - 64},
    [2] = {5, (2 << 5) - 64},
    [3] = {5, (3 << 5) - 64},
    [4] = {4, (4 << 4) - 64},
    [5] = {4, (5 << 4) - 64},
    [6] = {4, (6 << 4) - 64},
    [7] = {4, (7 << 4) - 64},
    [8] = {3, (8 << 3) - 64},
    [9] = {3, (9 << 3) - 64},
    [10] = {3, (10 << 3) - 64},
    [11] = {3, (11 << 3) - 64},
    [12] = {3, (12 << 3) - 64},
    [13] = {3, (13 << 3) - 64},
    [14] = {3, (14 << 3) - 64},
    [15] = {3, (15 << 3) - 64},
    [16] = {2, (16 << 2) - 64},
    [17] = {2, (17 << 2) - 64},
    [18] = {2, (18 << 2) - 64},
    [19] = {2, (19 << 2) - 64},
    [20] = {2, (20 << 2) - 64},
    [21] = {2, (21 << 2) - 64},
    [22] = {2, (22 << 2) - 64},
    [23] = {2, (23 << 2) - 64},
    [24] = {2, (24 << 2) - 64},
    [25] = {2, (25 << 2) - 64},
    [26] = {2, (26 << 2) - 64},
    [27] = {2, (27 << 2) - 64},
    [28] = {2, (28 << 2) - 64},
    [29] = {2, (29 << 2) - 64},
    [30] = {2, (30 << 2) - 64},
    [31] = {2, (31 << 2) - 64},
    [32] = {1, (32 << 1) - 64},
    [33] = {1, (33 << 1) - 64},
    [34] = {1, (34 << 1) - 64},
    [35] = {1, (35 << 1) - 64},
    [36] = {1, (36 << 1) - 64},
    [37] = {1, (37 << 1) - 64},
    [38] = {1, (38 << 1) - 64},
    [39] = {1, (39 << 1) - 64},
    [40] = {1, (40 << 1) - 64},
    [41] = {1, (41 << 1) - 64},
    [42] = {1, (42 << 1) - 64},
    [43] = {1, (43 << 1) - 64},
    [44] = {1, (44 << 1) - 64},
    [45] = {1, (45 << 1) - 64},
    [46] = {1, (46 << 1) - 64},
    [47] = {1, (47 << 1) - 64},
    [48] = {1, (48 << 1) - 64},
    [49] = {1, (49 << 1) - 64},
    [50] = {1, (50 << 1) - 64},
    [51] = {1, (51 << 1) - 64},
    [52] = {1, (52 << 1) - 64},
    [53] = {1, (53 << 1) - 64},
    [54] = {1, (54 << 1) - 64},
    [55] = {1, (55 << 1) - 64},
    [56] = {1, (56 << 1) - 64},
    [57] = {1, (57 << 1) - 64},
    [58] = {1, (58 << 1) - 64},
    [59] = {1, (59 << 1) - 64},
    [60] = {1, (60 << 1) - 64},
    [61] = {1, (61 << 1) - 64},
    [62] = {1, (62 << 1) - 64},
    [63] = {1, (63 << 1) - 64},
    [64] = {0, 64 - 64},
    [65] = {0, 65 - 64},
    [66] = {0, 66 - 64},
    [67] = {0, 67 - 64},
    [68] = {0, 68 - 64},
    [69] = {0, 69 - 64},
    [70] = {0, 70 - 64},
    [71] = {0, 71 - 64},
    [72] = {0, 72 - 64},
    [73] = {0, 73 - 64},
    [74] = {0, 74 - 64},
    [75] = {0, 75 - 64},
    [76] = {0, 76 - 64},
    [77] = {0, 77 - 64},
    [78] = {0, 78 - 64},
    [79] = {0, 79 - 64},
    [80] = {0, 80 - 64},
    [81] = {0, 81 - 64},
    [82] = {0, 82 - 64},
    [83] = {0, 83 - 64},
    [84] = {0, 84 - 64},
    [85] = {0, 85 - 64},
    [86] = {0, 86 - 64},
    [87] = {0, 87 - 64},
    [88] = {0, 88 - 64},
    [89] = {0, 89 - 64},
    [90] = {0, 90 - 64},
    [91] = {0, 91 - 64},
    [92] = {0, 92 - 64},
    [93] = {0, 93 - 64},
    [94] = {0, 94 - 64},
    [95] = {0, 95 - 64},
    [96] = {0, 96 - 64},
    [97] = {0, 97 - 64},
    [98] = {0, 98 - 64},
    [99] = {0, 99 - 64},
    [100] = {0, 100 - 64},
    [101] = {0, 101 - 64},
    [102] = {0, 102 - 64},
    [103] = {0, 103 - 64},
    [104] = {0, 104 - 64},
    [105] = {0, 105 - 64},
    [106] = {0, 106 - 64},
    [107] = {0, 107 - 64},
    [108] = {0, 108 - 64},
    [109] = {0, 109 - 64},
    [110] = {0, 110 - 64},
    [111] = {0, 111 - 64},
    [112] = {0, 112 - 64},
    [113] = {0, 113 - 64},
    [114] = {0, 114 - 64},
    [115] = {0, 115 - 64},
    [116] = {0, 116 - 64},
    [117] = {0, 117 - 64},
    [118] = {0, 118 - 64},
    [119] = {0, 119 - 64},
    [120] = {0, 120 - 64},
    [121] = {0, 121 - 64},
    [122] = {0, 122 - 64},
    [123] = {0, 123 - 64},
    [124] = {0, 124 - 64},
    [125] = {0, 125 - 64},
    [126] = {0, 126 - 64},
    [127] = {0, 127 - 64},
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

//  Unpack packed tANS encoded data symbol frequences into their individual parts
static inline void UnpackFrequenciesLoop(const u32 *packedFreqs, u16 *freqs, u32 i)
{
    // Loop unpack
    freqs[i*5 + 0] = (packedFreqs[i] >> (6*0)) & PACKED_FREQ_MASK;
    freqs[i*5 + 1] = (packedFreqs[i] >> (6*1)) & PACKED_FREQ_MASK;
    freqs[i*5 + 2] = (packedFreqs[i] >> (6*2)) & PACKED_FREQ_MASK;
    freqs[i*5 + 3] = (packedFreqs[i] >> (6*3)) & PACKED_FREQ_MASK;
    freqs[i*5 + 4] = (packedFreqs[i] >> (6*4)) & PACKED_FREQ_MASK;

    freqs[15] += (packedFreqs[i] & PARTIAL_FREQ_MASK) >> (30 - 2*i);
}

static inline void UnpackFrequencies(const u32 *packedFreqs, u16 *freqs)
{
    freqs[15] = 0;

    UnpackFrequenciesLoop(packedFreqs, freqs, 0);
    UnpackFrequenciesLoop(packedFreqs, freqs, 1);
    UnpackFrequenciesLoop(packedFreqs, freqs, 2);
}

//  Build the tANS decompression table from the specified frequencies and the precomputed helper struct
static void BuildDecompressionTable(const u32 *packedFreqs, struct DecodeYK *table)
{
    u16 freqs[16];

    UnpackFrequencies(packedFreqs, freqs);

    TABLE_TYPE *tableAsU16 = (void *) table;

    for (u8 i = 0; i < 16; i++)
    {
        const TABLE_TYPE *srcTemplate;

        switch (freqs[i]) {
        case 0:
            break;
        default: {
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[freqs[i]]);
            for (u32 n = 0; n < freqs[i]; n++) {
                *tableAsU16++ = (*srcTemplate++) | (i << 3);
            }
            break;
        }
        case 1:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[1]);
            REP(0, 1, *tableAsU16++ = *srcTemplate++ | (i << 3);)
            break;
        case 2:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[2]);
            REP(0, 2, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        case 3:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[3]);
            REP(0, 3, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        case 4:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[4]);
            REP(0, 4, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        case 5:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[5]);
            REP(0, 5, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        case 6:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[6]);
            REP(0, 6, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        case 7:
            srcTemplate = (TABLE_TYPE *)(&sYkTemplate[7]);
            REP(0, 7, *tableAsU16++ = (*srcTemplate++) | (i << 3);)
            break;
        }
    }
}

static IWRAM_DATA u8 sCurrSymbol = 0;
static IWRAM_DATA u8 sBitIndex = 0;
static IWRAM_DATA const u32 *sDataPtr = 0;
static IWRAM_DATA u32 sCurrState = 0;
//  Mask table for reading data from a bitstream for tANS decoding
static IWRAM_INIT u32 sMaskTable[] = {0, 1, 3, 7, 15, 31, 63};

struct DecodeHelperStruct
{
    void *resultVec; // u16 for SymDelta, u8 for LOtANS
    void *resultVecEnd;
    struct DecodeYK *ykTable;
};

extern void FastUnsafeCopy32(void *, const void *, u32 size);

//  Dark Egg magic
static inline void CopyFuncToIwram(void *funcBuffer, void *funcStartAddress, void *funcEndAdress)
{
    FastUnsafeCopy32(funcBuffer, funcStartAddress, funcEndAdress - funcStartAddress);
}

//  Inner loop of tANS decoding for Lengths and Offset data for decompression instructions, uses u8 data sizes
//  Basic process for decoding a tANS encoded value is to read the current symbol from the decoding table, then calculate the next state
//  from the y and k values for the current state and add the value read from the next k bits in the bitstream
// - O3 saves cycles
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void DecodeLOtANSLoop(const u32 *data, struct DecodeHelperStruct *decodeHelper)
{
    u32 currBits = *data++;
    u32 bitIndex = sBitIndex;
    u8 * resultVec = (u8*)(decodeHelper->resultVec);
    u16 *resultVec_u16 = (u16 *) resultVec;
    u8 * resultVecEnd = (u8*)(decodeHelper->resultVecEnd);

    do
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            TABLE_TYPE ykVals = *(TABLE_TYPE *)(&decodeHelper->ykTable[sCurrState]);
            symbol |= ((ykVals & 0xFF) >> 3) << (currNibble*4);
            u32 currK = ykVals & 7;
            sCurrState = ykVals >> 8;
            sCurrState += (currBits >> bitIndex) & sMaskTable[currK];
            bitIndex += currK;
            if (bitIndex >= 32)
            {
                currBits = *data++;
                bitIndex -= 32;
                if (bitIndex != 0)
                {
                    sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex);
                }
            }
        }
        *resultVec_u16++ = symbol;
    } while (resultVec_u16 < (u16 *) resultVecEnd);

    sBitIndex = bitIndex;
    sDataPtr = data - 1;
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((no_reorder)) static void SwitchToArmCallLOtANS(const u32 *data, struct DecodeHelperStruct *decodeHelper, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *decodeHelper))
{
    decodeFunction(data, decodeHelper);
}

//  Function that decodes tANS encoded LO data, resulting data is u8 values
static void DecodeLOtANS(const u32 *data, const u32 *pFreqs, u8 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = (void *) sIwramYkTemplate;
    BuildDecompressionTable(pFreqs, ykTable);

    // We want to store in packs of 2, so count needs to be divisible by 2
    u32 remainingCount = count % 2;
    struct DecodeHelperStruct decodeHelper;
    decodeHelper.resultVec = resultVec;
    decodeHelper.ykTable = ykTable;
    decodeHelper.resultVecEnd = &resultVec[count - remainingCount];

    u32 funcBuffer[400];

    CopyFuncToIwram(funcBuffer, DecodeLOtANSLoop, SwitchToArmCallLOtANS);
    SwitchToArmCallLOtANS(data, &decodeHelper, (void *) funcBuffer);

    if (remainingCount)
    {
        u32 currBits = *sDataPtr;
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 2; currNibble++)
        {
            symbol |= ((ykTable[sCurrState].kVal & 0xFF) >> 3) << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal & 7;
            sCurrState = ykTable[sCurrState].yVal;
            sCurrState += (currBits >> sBitIndex) & sMaskTable[currK];
            sBitIndex += currK;
            if (sBitIndex >= 32)
            {
                currBits = *(++sDataPtr);
                sBitIndex -= 32;
                if (sBitIndex != 0)
                {
                    sCurrState += (currBits & ((1u << sBitIndex) - 1)) << (currK - sBitIndex);
                }
            }
        }
        resultVec[count - remainingCount] = symbol;
    }
}

__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void DecodeSymtANSLoop(const u32 *data, struct DecodeHelperStruct *decodeHelper, u32 *maskTable)
{
    u32 currBits = *data++;
    u32 bitIndex = sBitIndex;

    u16 * resultVec_16 = (u16*)(decodeHelper->resultVec);
    u16 * resultVecEnd = (u16*)(decodeHelper->resultVecEnd);

    do
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            TABLE_TYPE ykVals = *(TABLE_TYPE *)(&decodeHelper->ykTable[sCurrState]);
            symbol |= ((ykVals & 0xFF) >> 3) << (currNibble*4);
            u32 currK = ykVals & 7;
            sCurrState = ykVals >> 8;
            sCurrState += (currBits >> bitIndex) & maskTable[currK];
            bitIndex += currK;
            if (bitIndex >= 32)
            {
                currBits = *data++;
                bitIndex -= 32;
                if (bitIndex != 0)
                {
                    sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex);
                }
            }
        }
        *resultVec_16++ = symbol;
    } while (resultVec_16 < resultVecEnd);

    sBitIndex = bitIndex;
    sDataPtr = data - 1;
}

__attribute__((target("arm"))) __attribute__((no_reorder)) static void SwitchToArmCallDecodeSymtANS(const u32 *data, struct DecodeHelperStruct *stuff, u32 *maskTable, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *stuff, u32 *maskTable))
{
    decodeFunction(data, stuff, maskTable);
}

static void DecodeSymtANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = (void *) sIwramYkTemplate;
    BuildDecompressionTable(pFreqs, ykTable);

    struct DecodeHelperStruct stuff;

    stuff.ykTable = ykTable;
    stuff.resultVec = resultVec;
    stuff.resultVecEnd = &resultVec[count];

    u32 funcBuffer[300];
    CopyFuncToIwram(funcBuffer, DecodeSymtANSLoop, SwitchToArmCallDecodeSymtANS);
    SwitchToArmCallDecodeSymtANS(data, &stuff, sMaskTable, (void *) funcBuffer);
}

//  Inner loop of tANS decoding for delta encoded symbol data, uses u16 data size
//  Basic process for decoding a tANS encoded value is to read the current symbol from the decoding table, then calculate the next state
//  from the y and k values for the current state and add the value read from the next k bits in the bitstream
// -O3 saves us almost 30k cycles compared to -O2
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void DecodeSymDeltatANSLoop(const u32 *data, struct DecodeHelperStruct *decodeHelper, u32 *maskTable)
{
    u32 currBits = *data++;
    u32 currSymbol = 0;
    u32 bitIndex = sBitIndex;
    u32 * resultVec_32 = (u32*)(decodeHelper->resultVec); // Since we're doing 2 symbols at one time we store as word which is faster than storing two halfwords.
    u16 * resultVecEnd = (u16*)(decodeHelper->resultVecEnd);

    do
    {
        u32 symbol = 0;

        for (u32 currNibble = 0; currNibble < 8; currNibble++)
        {
            TABLE_TYPE ykVals = *(TABLE_TYPE *)(&decodeHelper->ykTable[sCurrState]);
            u32 currK = ykVals & 7;
            currSymbol = (currSymbol + ((ykVals & 0xFF) >> 3)) & 0xf;
            symbol |= currSymbol << (currNibble*4);
            sCurrState = ykVals >> 8;
            sCurrState += ((currBits >> bitIndex) & maskTable[currK]);
            bitIndex += currK;

            if (bitIndex >= 32)
            {
                currBits = *data++;
                bitIndex -= 32;
                if (bitIndex != 0)
                {
                    sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex);
                }
            }
        }

        *resultVec_32++ = (symbol);

    } while (resultVec_32 < (u32 *) resultVecEnd);
    sBitIndex = bitIndex;
    sCurrSymbol = currSymbol;
    sDataPtr = data - 1;
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((no_reorder)) static void SwitchToArmCallSymDeltaANS(const u32 *data, struct DecodeHelperStruct *decodeHelper, u32 *maskTable, void (*decodeFunction)(const u32 *data, struct DecodeHelperStruct *decodeHelper, u32 *maskTable))
{
    decodeFunction(data, decodeHelper, maskTable);
}

static void DecodeSymDeltatANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = (void *) sIwramYkTemplate;
    BuildDecompressionTable(pFreqs, ykTable);

    // We want to store in packs of 2, so count needs to be divisible by 2
    u32 remainingCount = count % 2;
    struct DecodeHelperStruct decodeHelper;

    decodeHelper.ykTable = ykTable;
    decodeHelper.resultVec = resultVec;
    decodeHelper.resultVecEnd = &resultVec[count - remainingCount];

    u32 funcBuffer[400];
    CopyFuncToIwram(funcBuffer, DecodeSymDeltatANSLoop, SwitchToArmCallSymDeltaANS);
    SwitchToArmCallSymDeltaANS(data, &decodeHelper, sMaskTable, (void *) funcBuffer);

    if (remainingCount)
    {
        u32 currBits = *sDataPtr;
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            sCurrSymbol = (sCurrSymbol + ((ykTable[sCurrState].kVal & 0xFF) >> 3)) & 0xf;
            symbol |= sCurrSymbol << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal & 7;
            sCurrState = ykTable[sCurrState].yVal;
            sCurrState += (currBits >> sBitIndex) & sMaskTable[currK];
            sBitIndex += currK;
            if (sBitIndex >= 32)
            {
                currBits = *(++sDataPtr);
                sBitIndex -= 32;
                if (sBitIndex != 0)
                {
                    sCurrState += (currBits & ((1u << sBitIndex) - 1)) << (currK - sBitIndex);
                }
            }
        }
        resultVec[count - remainingCount] = symbol;
    }
}

static inline void Fill16(u16 value, u16 *_dst, u32 size)
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
__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void DecodeInstructions(u32 headerLoSize, u8 *loVec, u16 *symVec, u16 *dest)
{
    u8 *loVecEnd = loVec + headerLoSize;
    do
    {
        u32 currOffset, currLength;

        if (loVec[0] & CONTINUE_BIT)
        {
            currLength = (loVec[0] & FIRST_LO_MASK) | (loVec[1] << 7);
            currOffset = loVec[2] & FIRST_LO_MASK;
            if (loVec[2] & CONTINUE_BIT)
            {
                currOffset |= loVec[3] << 7;
                loVec += 4;
            }
            else
            {
                loVec += 3;
            }
        }
        else
        {
            currLength = loVec[0] & FIRST_LO_MASK;
            currOffset = loVec[1] & FIRST_LO_MASK;

            if (loVec[1] & CONTINUE_BIT)
            {
                currOffset |= (loVec[2] << 7);
                loVec += 3;
            }
            else
            {
                loVec += 2;
            }
        }

        if (currLength != 0)
        {
            *dest++ = *symVec;
            if (currOffset == 1)
            {
                Fill16(*symVec, dest, currLength);
                dest += currLength;
            }
            else
            {
                // Copy16 is slower in this case.
                u16 *from = dest - currOffset;
                u16 *to = dest + currLength;
                do {
                    *dest++ = *from++;
                } while (dest != to);
            }
            symVec++;
        }
        else
        {
            Copy16(symVec, dest, currOffset);
            dest += currOffset;
            symVec += currOffset;
        }
    } while (loVec < loVecEnd);
}

//  Dark Egg magic
__attribute__((target("arm"))) __attribute__((no_reorder)) static void SwitchToArmCallDecodeInstructions(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest, void (*decodeFunction)(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest))
{
    decodeFunction(headerLoSize, loVec, symVec, dest);
}

//  Dark Egg magic
static void DecodeInstructionsIwram(u32 headerLoSize, u8 *loVec, u16 *symVec, void *dest)
{
    u32 funcBuffer[350];

    CopyFuncToIwram(funcBuffer, DecodeInstructions, SwitchToArmCallDecodeInstructions);
    SwitchToArmCallDecodeInstructions(headerLoSize, loVec, symVec, dest, (void *) funcBuffer);
}

//  Entrance point for smol compressed data
void SmolDecompressData(const struct SmolHeader *header, const u32 *data, void *dest)
{
    //  This is apparently needed due to Game Freak sending bullshit down the decompression pipeline
    if (header->loSize == 0 || header->symSize == 0)
        return;
    const u8 *leftoverPos = (u8 *)data;

    sCurrState = header->initialState;

    u32 headerLoSize = header->loSize;
    u32 headerSymSize = header->symSize;
    u32 alignedLoSize = header->loSize % 2 == 1 ? headerLoSize + 1 : headerLoSize;
    u32 alignedSymSize = header->symSize % 2 == 1 ? headerSymSize + 1 : headerSymSize;
    // Everything needs to be aligned.
    void *memoryAlloced = Alloc((alignedSymSize*2) + alignedLoSize);
    u16 *symVec = memoryAlloced;
    u8 *loVec = memoryAlloced + alignedSymSize*2;
    bool32 loEncoded = isModeLoEncoded(header->mode);
    bool32 symEncoded = isModeSymEncoded(header->mode);
    bool32 symDelta = isModeSymDelta(header->mode);

    const u32 *pLoFreqs;
    const u32 *pSymFreqs;

    //  Use different decoding flows depending on which mode the data is compressed with
    switch (header->mode)
    {
        case ENCODE_LO:
            pLoFreqs = &data[0];
            sDataPtr = &data[3];
            break;
        case ENCODE_DELTA_SYMS:
        case ENCODE_SYMS:
            pSymFreqs = &data[0];
            sDataPtr = &data[3];
            break;
        case ENCODE_BOTH:
        case ENCODE_BOTH_DELTA_SYMS:
            pLoFreqs = &data[0];
            pSymFreqs = &data[3];
            sDataPtr = &data[6];
            break;
    }

    sBitIndex = 0;
    //  Decode tANS encoded LO data, mode 3, 4 and 5
    if (loEncoded)
    {
        DecodeLOtANS(sDataPtr, pLoFreqs, loVec, headerLoSize);
        leftoverPos += 12;
    }
    //  Decode tANS encoded symbol data, mode 1, 2, 4 and 5
    if (symEncoded)
    {
        //  Symbols are delta encoded, mode 2 and 5
        if (symDelta)
            DecodeSymDeltatANS(sDataPtr, pSymFreqs, symVec, headerSymSize);
        //  Symbols are not delta encoded, mode 1 and 4
        else
            DecodeSymtANS(sDataPtr, pSymFreqs, symVec, headerSymSize);
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

    Free(memoryAlloced);
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
