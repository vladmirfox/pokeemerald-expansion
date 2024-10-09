#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"

EWRAM_DATA ALIGNED(4) u8 gDecompressionBuffer[0x4000] = {0};

EWRAM_INIT struct DecodeYK ykTemplate[128] = {
    [0] = {0, 0, 0},
    [1] = {1, 6, 0},
    [2] = {2, 5, 0},
    [3] = {3, 5, 0},
    [4] = {4, 4, 0},
    [5] = {5, 4, 0},
    [6] = {6, 4, 0},
    [7] = {7, 4, 0},
    [8] = {8, 3, 0},
    [9] = {9, 3, 0},
    [10] = {10, 3, 0},
    [11] = {11, 3, 0},
    [12] = {12, 3, 0},
    [13] = {13, 3, 0},
    [14] = {14, 3, 0},
    [15] = {15, 3, 0},
    [16] = {16, 2, 0},
    [17] = {17, 2, 0},
    [18] = {18, 2, 0},
    [19] = {19, 2, 0},
    [20] = {20, 2, 0},
    [21] = {21, 2, 0},
    [22] = {22, 2, 0},
    [23] = {23, 2, 0},
    [24] = {24, 2, 0},
    [25] = {25, 2, 0},
    [26] = {26, 2, 0},
    [27] = {27, 2, 0},
    [28] = {28, 2, 0},
    [29] = {29, 2, 0},
    [30] = {30, 2, 0},
    [31] = {31, 2, 0},
    [32] = {32, 1, 0},
    [33] = {33, 1, 0},
    [34] = {34, 1, 0},
    [35] = {35, 1, 0},
    [36] = {36, 1, 0},
    [37] = {37, 1, 0},
    [38] = {38, 1, 0},
    [39] = {39, 1, 0},
    [40] = {40, 1, 0},
    [41] = {41, 1, 0},
    [42] = {42, 1, 0},
    [43] = {43, 1, 0},
    [44] = {44, 1, 0},
    [45] = {45, 1, 0},
    [46] = {46, 1, 0},
    [47] = {47, 1, 0},
    [48] = {48, 1, 0},
    [49] = {49, 1, 0},
    [50] = {50, 1, 0},
    [51] = {51, 1, 0},
    [52] = {52, 1, 0},
    [53] = {53, 1, 0},
    [54] = {54, 1, 0},
    [55] = {55, 1, 0},
    [56] = {56, 1, 0},
    [57] = {57, 1, 0},
    [58] = {58, 1, 0},
    [59] = {59, 1, 0},
    [60] = {60, 1, 0},
    [61] = {61, 1, 0},
    [62] = {62, 1, 0},
    [63] = {63, 1, 0},
    [64] = {64, 0, 0},
    [65] = {65, 0, 0},
    [66] = {66, 0, 0},
    [67] = {67, 0, 0},
    [68] = {68, 0, 0},
    [69] = {69, 0, 0},
    [70] = {70, 0, 0},
    [71] = {71, 0, 0},
    [72] = {72, 0, 0},
    [73] = {73, 0, 0},
    [74] = {74, 0, 0},
    [75] = {75, 0, 0},
    [76] = {76, 0, 0},
    [77] = {77, 0, 0},
    [78] = {78, 0, 0},
    [79] = {79, 0, 0},
    [80] = {80, 0, 0},
    [81] = {81, 0, 0},
    [82] = {82, 0, 0},
    [83] = {83, 0, 0},
    [84] = {84, 0, 0},
    [85] = {85, 0, 0},
    [86] = {86, 0, 0},
    [87] = {87, 0, 0},
    [88] = {88, 0, 0},
    [89] = {89, 0, 0},
    [90] = {90, 0, 0},
    [91] = {91, 0, 0},
    [92] = {92, 0, 0},
    [93] = {93, 0, 0},
    [94] = {94, 0, 0},
    [95] = {95, 0, 0},
    [96] = {96, 0, 0},
    [97] = {97, 0, 0},
    [98] = {98, 0, 0},
    [99] = {99, 0, 0},
    [100] = {100, 0, 0},
    [101] = {101, 0, 0},
    [102] = {102, 0, 0},
    [103] = {103, 0, 0},
    [104] = {104, 0, 0},
    [105] = {105, 0, 0},
    [106] = {106, 0, 0},
    [107] = {107, 0, 0},
    [108] = {108, 0, 0},
    [109] = {109, 0, 0},
    [110] = {110, 0, 0},
    [111] = {111, 0, 0},
    [112] = {112, 0, 0},
    [113] = {113, 0, 0},
    [114] = {114, 0, 0},
    [115] = {115, 0, 0},
    [116] = {116, 0, 0},
    [117] = {117, 0, 0},
    [118] = {118, 0, 0},
    [119] = {119, 0, 0},
    [120] = {120, 0, 0},
    [121] = {121, 0, 0},
    [122] = {122, 0, 0},
    [123] = {123, 0, 0},
    [124] = {124, 0, 0},
    [125] = {125, 0, 0},
    [126] = {126, 0, 0},
    [127] = {127, 0, 0},
};

void LZDecompressWram(const u32 *src, void *dest)
{
    LZ77UnCompWram(src, dest);
}

void LZDecompressVram(const u32 *src, void *dest)
{
    LZ77UnCompVram(src, dest);
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

    LZ77UnCompWram(src->data, gDecompressionBuffer);
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

    LZ77UnCompWram(template->images->data, gDecompressionBuffer);
    myImage.data = gDecompressionBuffer;
    myImage.size = size + offset;
    myTemplate.images = &myImage;
    myTemplate.tileTag = template->tileTag;

    return LoadSpriteSheetByTemplate(&myTemplate, 0, offset);
}

void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
}

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag)
{
    struct SpritePalette dest;

    LZ77UnCompWram(pal, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZ77UnCompWram(src->data, buffer);
}

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality)
{
    LoadSpecialPokePic(dest, species, personality, isFrontPic);
}

struct SmolHead {
    u32 loEncoded:1;
    u32 symEncoded:1;
    u32 loDelta:1;
    u32 symDelta:1;
    u32 lengthMod:4;
    u32 loLength:12;
    u32 symLength:12;
};

void UnpackFrequencies(u32 *packedFreqs, u8 *freqs)
{
    freqs[15] = 0;
    for (u32 i = 0; i < 3; i++)
    {
        for (u32 j = 0; j < 5; j++)
        {
            freqs[i*5 + j] = (packedFreqs[i] >> (6*j)) & 0x3f;
        }
        freqs[15] += (packedFreqs[i] & 0xC0000000) >> (30 - 2*i);
    }
}

//  Compression modes
/*
    instruct tANS
    symbol tANS
    symbol delta
    something?
    something?
*/

void DecompressData(void *src, void *dst)
{
    bool32 isVram;
    if ((u32)dst > 0x06000000)
        isVram = TRUE;
    else
        isVram = false;

}

void SmolUnCompWram(const u32 *src, void *dest)
{
    CycleCountStart();
    struct SmolHead header;
    memcpy(&header, src, 4);
    u8 *allU8s = Alloc(header.loLength + header.symLength);

    CpuCopy32(&src[1], allU8s, header.loLength + header.symLength);
    u8 *loVec = &allU8s[0];
    u8 *symVec = &allU8s[header.loLength];

    u16 loIndex = 0;
    u16 symIndex = 0;
    u16 currLength = 0;
    u16 currOffset = 0;
    u32 imageIndex = 0;
    u8 *image = Alloc(4096);

    while (loIndex < header.loLength)
    {
        currLength = loVec[loIndex] & 0x7f;
        loIndex++;
        u32 currRepeat = 1;
        while ((loVec[loIndex-1] & 0x80) == 0x80)
        {
            currLength += (loVec[loIndex] & 0x7f) << (7*currRepeat);
            loIndex++;
        }
        currOffset = loVec[loIndex] & 0x7f;
        loIndex++;
        currRepeat = 1;
        while ((loVec[loIndex-1] & 0x80) == 0x80)
        {
            currOffset += (loVec[loIndex] & 0x7f) << (7*currRepeat);
            currRepeat++;
            loIndex++;
        }

        if (currLength != 0)
        {
            currLength += header.lengthMod + 2;
            if (currOffset == 1)
            {
                //CpuFastFill8(symVec[symIndex], &image[imageIndex], currLength + 1);
                //symIndex++;
                //imageIndex += currLength + 1;
                /*
                for (u32 i = 0; i <= currLength; i++)
                {
                    image[imageIndex + i] = symVec[symIndex];
                }
                */
                imageIndex += currLength +1;
                symIndex++;
            }
            else
            {
                image[imageIndex] = symVec[symIndex];
                imageIndex++;
                symIndex++;
                for (u32 i = 0; i < currLength; i++)
                {
                    image[imageIndex] = image[imageIndex - currOffset];
                    imageIndex++;
                }
            }
        }
        else
        {
            memcpy(&image[imageIndex], &symVec[symIndex], currOffset);
            imageIndex += currOffset;
            symIndex += currOffset;
        }
    }

    CpuCopy32(image, dest, 4096);

    Free(allU8s);
    Free(image);
    u32 totalTime = CycleCountEnd();
    MgbaPrintf(MGBA_LOG_WARN, "Time: %u", totalTime);
}

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);

    if (isFrontPic)
    {
        if (gSpeciesInfo[species].frontPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZ77UnCompWram(gSpeciesInfo[species].frontPicFemale, dest);
        else if (gSpeciesInfo[species].frontPic != NULL)
        {
            if (species != SPECIES_LUVDISC)
            {
                LZ77UnCompWram(gSpeciesInfo[species].frontPic, dest);
            }
            else
            {
                SmolUnCompWram(gSpeciesInfo[species].frontPic, dest);
            }
        }
        else
            LZ77UnCompWram(gSpeciesInfo[SPECIES_NONE].frontPic, dest);
    }
    else
    {
        if (gSpeciesInfo[species].backPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZ77UnCompWram(gSpeciesInfo[species].backPicFemale, dest);
        else if (gSpeciesInfo[species].backPic != NULL)
            LZ77UnCompWram(gSpeciesInfo[species].backPic, dest);
        else
            LZ77UnCompWram(gSpeciesInfo[SPECIES_NONE].backPic, dest);
    }

    if (species == SPECIES_SPINDA && isFrontPic)
    {
        DrawSpindaSpots(personality, dest, FALSE);
        DrawSpindaSpots(personality, dest, TRUE);
    }
}

void Unused_LZDecompressWramIndirect(const void **src, void *dest)
{
    LZ77UnCompWram(*src, dest);
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
    const u8 *ptr8 = (const u8 *)ptr;
    return (ptr8[3] << 16) | (ptr8[2] << 8) | (ptr8[1]);
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZ77UnCompWram(src->data, buffer);

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
    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}
