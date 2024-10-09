#ifndef GUARD_DECOMPRESS_H
#define GUARD_DECOMPRESS_H

#include "sprite.h"

extern u8 ALIGNED(4) gDecompressionBuffer[0x4000];

struct CompressionHeader {
    u32 lengthMod:4;
    u32 lz77Bit:1;
    u32 compressionMode:5;
    u32 initialState:6;
    u32 imageSize:16;
    u16 instructionCount;
    u16 symbolCount;
};

struct DecodeYK {
    u8 yVal;
    u8 kVal;
    u16 symbol;
};

extern struct DecodeYK ykTemplate[128];
void InitDecodeHelper();

void UnpackFrequencies(u32 *packedFreqs, u8 *freqs);

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
