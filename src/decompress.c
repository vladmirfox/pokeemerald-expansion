#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"

//const u32 bigTestData[] = INCBIN_U32("test/bigTestImage.4bpp.smol");
//const u32 bigTestData[] = INCBIN_U32("graphics/bigTestImageNoANS.4bpp.smol");
//const u32 bigTestData[] = INCBIN_U32("data/tilesets/primary/general/tiles.4bpp.lz");

EWRAM_DATA ALIGNED(4) u8 gDecompressionBuffer[0x4000] = {0};

EWRAM_INIT struct DecodeYK ykTemplate[2*TANS_TABLE_SIZE] = {
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

void LZDecompressWram(const u32 *src, void *dest)
{
    //LZ77UnCompWram(src, dest);
    DecompressDataWram(src, dest);
}

void LZDecompressVram(const u32 *src, void *dest)
{
    //LZ77UnCompVram(src, dest);
    DecompressDataVram(src, dest);
}

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

    LZDecompressWram(src->data, gDecompressionBuffer);
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

    LZDecompressWram(template->images->data, gDecompressionBuffer);
    myImage.data = gDecompressionBuffer;
    myImage.size = size + offset;
    myTemplate.images = &myImage;
    myTemplate.tileTag = template->tileTag;

    return LoadSpriteSheetByTemplate(&myTemplate, 0, offset);
}

void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    LZDecompressWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
}

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;

    LZDecompressWram(src->data, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag)
{
    struct SpritePalette dest;

    LZDecompressWram(pal, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    LZDecompressWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZDecompressWram(src->data, buffer);
}

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality)
{
    LoadSpecialPokePic(dest, species, personality, isFrontPic);
}

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

void DecompressDataVram(const u32 *src, void *dest)
{
    struct CompressionHeader header;
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

void DecompressDataWram(const u32 *src, void *dest)
{
    struct CompressionHeader header;
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

//  For decompressing a single part of a multi-part spritesheet
/*
void DecompressSubFrame(const u32 *src, void *dest, u32 frameId)
{
    struct SpriteSheetHeader header;
    CpuCopy32(src, &header, 4);
    const u32 *offsets = &src[1];
}
*/

void BuildDecompressionTable(const u32 *packedFreqs, struct DecodeYK *table, u32 *symbolTable)
{
    u32 freqs[16];
    u32 currCol = 0;
    //CycleCountStart();
    UnpackFrequencies(packedFreqs, freqs);
    //u32 timeTaken = CycleCountEnd();
    //MgbaPrintf(MGBA_LOG_WARN, "Unpacking: %u", timeTaken);
    //CycleCountStart();
    for (u32 i = 0; i < 16; i++)
    {
        if (freqs[i] != 0)
        {
            memcpy(&table[currCol], &ykTemplate[freqs[i]], freqs[i]*sizeof(struct DecodeYK));
            //  Setting 8-bit array elements to a single symbol, IMPROVEMENT POSSIBLE
            //  Or it's not possible? Using CpuFill with 16-bit variables was worse
            for (u32 j = 0; j < freqs[i]; j++)
                symbolTable[currCol + j] = i;
            currCol += freqs[i];
        }
    }
    //timeTaken = CycleCountEnd();
    //MgbaPrintf(MGBA_LOG_WARN, "Building: %u", timeTaken);
}

static EWRAM_DATA u8 sBitIndex = 0;
static EWRAM_DATA u32 sReadIndex = 0;
static EWRAM_DATA u32 sCurrState = 0;

void DecodeLOtANS(const u32 *data, const u32 *pFreqs, u8 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = Alloc(TANS_TABLE_SIZE*sizeof(struct DecodeYK));
    u32 *symbolTable = Alloc(TANS_TABLE_SIZE * 4);
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);
    u32 currBits = data[sReadIndex];

    static const u8 maskTable[7] = {
        0,
        1,
        3,
        7,
        15,
        31,
        63
    };

    for (u32 currSym = 0; currSym < count; currSym++)
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 2; currNibble++)
        {
            symbol += symbolTable[sCurrState] << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal;
            u32 nextState = ykTable[sCurrState].yVal;
            //nextState += (currBits >> sBitIndex) & (0xff >> (8-currK));
            nextState += (currBits >> sBitIndex) & maskTable[currK];
            if (sBitIndex + currK < 32)
            {
                sBitIndex += currK;
            }
            else if (sBitIndex + currK == 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                sBitIndex = 0;
            }
            else if ((sBitIndex + currK) > 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                u32 remainder = sBitIndex + currK - 32;
                nextState += (data[sReadIndex] & ((1u << remainder) - 1)) << (currK - remainder);
                sBitIndex = remainder;
            }
            sCurrState = nextState-64;
        }
        resultVec[currSym] = symbol;
    }
    Free(ykTable);
    Free(symbolTable);
}

void DecodeSymtANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK ykTable[64];
    u32 symbolTable[64];
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);
    u32 currBits = data[sReadIndex];
    /*
    u8 maskTable[7] = {
        0,
        1,
        3,
        7,
        15,
        31,
        63
    };
    */
    for (u32 currSym = 0; currSym < count; currSym++)
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            symbol += symbolTable[sCurrState] << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal;
            u32 nextState = ykTable[sCurrState].yVal;
            nextState += (currBits >> sBitIndex) & (0xff >> (8-currK));
            //nextState += (currBits >> sBitIndex) & maskTable[currK];
            if (sBitIndex + currK < 32)
            {
                sBitIndex += currK;
            }
            else if (sBitIndex + currK == 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                sBitIndex = 0;
            }
            else if ((sBitIndex + currK) > 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                u32 remainder = sBitIndex + currK - 32;
                nextState += (currBits & ((1u << remainder) - 1)) << (currK - remainder);
                sBitIndex = remainder;
            }
            sCurrState = nextState - 64;
        }
        resultVec[currSym] = symbol;
    }
}

void DecodeSymDeltatANS(const u32 *data, const u32 *pFreqs, u16 *resultVec, u32 count)
{
    struct DecodeYK *ykTable = Alloc(TANS_TABLE_SIZE*sizeof(struct DecodeYK));
    u32 *symbolTable = Alloc(TANS_TABLE_SIZE * 4);
    BuildDecompressionTable(pFreqs, ykTable, symbolTable);
    u32 currBits = data[sReadIndex];
    u32 prevSymbol = 0;
    /*
    u8 maskTable[7] = {
        0,
        1,
        3,
        7,
        15,
        31,
        63
    };
    */
    for (u32 currSym = 0; currSym < count; currSym++)
    {
        u32 symbol = 0;
        for (u32 currNibble = 0; currNibble < 4; currNibble++)
        {
            u32 currSymbol = (prevSymbol + symbolTable[sCurrState]) & 0xf;
            prevSymbol = currSymbol;
            symbol += currSymbol << (currNibble*4);
            u32 currK = ykTable[sCurrState].kVal;
            u32 nextState = ykTable[sCurrState].yVal;
            nextState += (currBits >> sBitIndex) & (0xff >> (8-currK));
            //nextState += (currBits >> sBitIndex) & maskTable[currK];
            if (sBitIndex + currK < 32)
            {
                sBitIndex += currK;
            }
            else if (sBitIndex + currK == 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                sBitIndex = 0;
            }
            else if ((sBitIndex + currK) > 32)
            {
                sReadIndex += 1;
                currBits = data[sReadIndex];
                u32 remainder = sBitIndex + currK - 32;
                nextState += (currBits & ((1u << remainder) - 1)) << (currK - remainder);
                sBitIndex = remainder;
            }
            sCurrState = nextState - 64;
        }
        resultVec[currSym] = symbol;
    }
    Free(ykTable);
    Free(symbolTable);
}

void DecodeInstructions(const struct CompressionHeader *header, u8 *loVec, u16 *symVec, void *dest)
{
    u32 loIndex = 0;
    u32 symIndex = 0;
    u32 totalInstructions = 0;
    while (loIndex < header->loSize)
    {
        totalInstructions++;
        u32 currLength = loVec[loIndex] & 0x7f;
        if ((loVec[loIndex] & 0x80) == 0x80)
        {
            currLength += loVec[loIndex+1] << 7;
            loIndex += 2;
        }
        else
        {
            loIndex++;
        }
        u32 currOffset = loVec[loIndex] & 0x7f;
        if ((loVec[loIndex] & 0x80) == 0x80)
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
            memcpy(dest, &symVec[symIndex], 2);
            dest = (void *)(dest + 2);
            if (currOffset == 1)
            {
                CpuFill16(symVec[symIndex], dest, 2*currLength);
                dest = (void *)(dest + currLength*2);
            }
            else
            {
                CpuCopy16((void *)(dest - currOffset*2), dest, currLength*2);
                dest = (void *)(dest + currLength*2);
            }
            symIndex++;
        }
        else
        {
            CpuCopy16(&symVec[symIndex], dest, currOffset*2);
            symIndex += currOffset;
            dest = (void *)(dest + currOffset*2);
        }
    }
}

void SmolDecompressData(const struct CompressionHeader *header, const u32 *data, void *dest)
{
    sReadIndex = 0;

    sCurrState = header->initialState;
    u8 *loVec = Alloc(header->loSize);
    u16 *symVec = Alloc(header->symSize*2);
    bool32 loEncoded = isModeLoEncoded(header->mode);
    bool32 symEncoded = isModeSymEncoded(header->mode);
    bool32 symDelta = isModeSymDelta(header->mode);
    u8 *leftoverPos = (u8 *)data;

    const u32 *pLoFreqs;
    const u32 *pSymFreqs;

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
    if (loEncoded)
    {
        DecodeLOtANS(data, pLoFreqs, loVec, header->loSize);
    }
    if (symEncoded)
    {
        if (symDelta)
            DecodeSymDeltatANS(data, pSymFreqs, symVec, header->symSize);
        else
            DecodeSymtANS(data, pSymFreqs, symVec, header->symSize);
    }

    if (loEncoded || symEncoded)
        leftoverPos += 4*header->bitstreamSize;

    if (symEncoded == FALSE)
    {
        memcpy(symVec, leftoverPos, header->symSize*2);
        leftoverPos += header->symSize*2;
    }

    if (loEncoded == FALSE)
    {
        memcpy(loVec, leftoverPos, header->loSize);
    }

    DecodeInstructions(header, loVec, symVec, dest);

    Free(loVec);
    Free(symVec);
}

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
        //CycleCountStart();
        //LZDecompressWram(bigTestData, &gDecompressionBuffer[0]);
        //u32 timeTaken = CycleCountEnd();
        //MgbaPrintf(MGBA_LOG_WARN, "LZ time: %u", timeTaken);
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].frontPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZDecompressWram(gSpeciesInfo[species].frontPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].frontPic != NULL)
            LZDecompressWram(gSpeciesInfo[species].frontPic, dest);
        else
            LZDecompressWram(gSpeciesInfo[SPECIES_NONE].frontPic, dest);
    }
    else
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].backPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZDecompressWram(gSpeciesInfo[species].backPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].backPic != NULL)
            LZDecompressWram(gSpeciesInfo[species].backPic, dest);
        else
            LZDecompressWram(gSpeciesInfo[SPECIES_NONE].backPic, dest);
    }

    if (species == SPECIES_SPINDA && isFrontPic)
    {
        DrawSpindaSpots(personality, dest, FALSE);
        DrawSpindaSpots(personality, dest, TRUE);
    }
}

void Unused_LZDecompressWramIndirect(const void **src, void *dest)
{
    LZDecompressWram(*src, dest);
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
    const struct CompressionHeader *header = (const struct CompressionHeader *)ptr;
    if (header->mode == MODE_LZ77)
    {
        const u8 *ptr8 = (const u8 *)ptr;
        return (ptr8[3] << 16) | (ptr8[2] << 8) | (ptr8[1]);
    }
    else
    {
        return header->imageSize*32;
    }
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZDecompressWram(src->data, buffer);

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

    buffer = AllocZeroed(src->data[0] >> 8);
    LZDecompressWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}
