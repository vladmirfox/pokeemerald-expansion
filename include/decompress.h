#ifndef GUARD_DECOMPRESS_H
#define GUARD_DECOMPRESS_H

#include "sprite.h"

extern u8 ALIGNED(4) gDecompressionBuffer[0x4000];

struct CompressionHeader {
    u32 lengthMod:4;
    u32 lz77Bit:1;
    u32 mode:5;
    u32 initialState:6;
    u32 imageSize:16;
    u16 instructionCount;
    u16 symbolCount;
};

struct DecodeYK {
    u8 yVal;
    u8 kVal;
};

enum CompressionMode {
    BASE_ONLY = 0,
    ENCODE_SYMS = 1,
    ENCODE_DELTA_SYMS = 2,
    ENCODE_LO = 3,
    ENCODE_BOTH = 4,
    ENCODE_BOTH_DELTA_SYMS = 5,
};

extern struct DecodeYK ykTemplate[128];

void UnpackFrequencies(const u32 *packedFreqs, u8 *freqs);

void DecompressData(const u32 *src, void *dest);

void SmolDecompressData(struct CompressionHeader *header, const u32 *data, void *dest);

void BuildDecompressionTable(u32 *freqs, struct DecodeYK *ykTable, u8 *symbolTable);

void DecodetANS(const u32 *data, u32 *readIndex, struct DecodeYK *ykTable, u8 *symbolTable, u8 *resultVec, u32 *state, u32 numSymbols);

void DecodeInstructions(struct CompressionHeader *header, u8 *loVec, u8 *symVec, void *dest);

//  Default Decompression functions are below here
void LZDecompressWram(const u32 *src, void *dest);
void LZDecompressVram(const u32 *src, void *dest);

u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize);

u16 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src);
u16 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset);
void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer);
bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src);

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src);
void LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag);
void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer);
bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src);

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer);

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality);

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic);

u32 GetDecompressedDataSize(const u32 *ptr);

#endif // GUARD_DECOMPRESS_H
