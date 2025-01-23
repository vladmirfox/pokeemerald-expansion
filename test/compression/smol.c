#include "global.h"
#include "main.h"
#include "malloc.h"
#include "random.h"
#include "sprite.h"
#include "test/test.h"

enum
{
    COMPRESSION_SMOL,
    COMPRESSION_FASTSMOL,
    COMPRESSION_LZ,
    COMPRESSION_FASTLZ,
};

extern void FastLZ77UnCompWram(const u32 *src, void *dest);

static bool32 DecompressImgPrintResults(const u32 *img, const u32 *orgImg, const char *imgName, s32 mode, s32 size)
{
    u32 imageSize = GetDecompressedDataSize(img);
    u32 *compBuffer = Alloc(imageSize);
    CycleCountStart();
    if (mode == COMPRESSION_FASTLZ)
        FastLZ77UnCompWram(img, compBuffer);
    else
        DecompressDataWithHeaderWram(img, compBuffer);
    s32 timeTaken = CycleCountEnd();

    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        if (orgImg[i] != compBuffer[i])
        {
            areEqual = FALSE;
            break;
        }
    }

    Free(compBuffer);

    const char *compModeStr;
    if (mode == COMPRESSION_SMOL) compModeStr = "Smol";
    else if (mode == COMPRESSION_FASTSMOL) compModeStr = "fastSmol";
    else if (mode == COMPRESSION_LZ) compModeStr = "LZ";
    else compModeStr = "fastLZ";

    DebugPrintf("Time %s %s: %d         Size: %d", imgName, compModeStr, timeTaken, size);
    return areEqual;
}

TEST("Compression test: tileset smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Tileset", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: tileset LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Tileset", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: tileset fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Tileset", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: tileset fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Tileset", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: simple battle sprite smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "simple battle sprite", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: simple battle sprite LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "simple battle sprite", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: simple battle sprite fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "simple battle sprite", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: simple battle sprite fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "simple battle sprite", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: complex battle sprite smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "complex battle sprite", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: complex battle sprite LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "complex battle sprite", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: complex battle sprite fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "complex battle sprite", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: complex battle sprite fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "complex battle sprite", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Gossifleur Smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/gossifleur.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/gossifleur.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Gossifleur", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Gossifleur LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/gossifleur.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/gossifleur.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Gossifleur", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Gossifleur fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/gossifleur.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/gossifleur.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Gossifleur", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Gossifleur fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/gossifleur.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/gossifleur.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Gossifleur", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Ledian Smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/ledian.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/ledian.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Ledian", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Ledian LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/ledian.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/ledian.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Ledian", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Ledian fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/ledian.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/ledian.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Ledian", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Ledian fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/ledian.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/ledian.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Ledian", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Mr. Mime Smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/mr_mime.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/mr_mime.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Mr. Mime", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Mr. Mime LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/mr_mime.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/mr_mime.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Mr. Mime", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Mr. Mime fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/mr_mime.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/mr_mime.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Mr. Mime", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: Mr. Mime fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/mr_mime.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/mr_mime.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "Mr. Mime", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: bubbles Smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "bubbles", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: bubbles LZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "bubbles", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: bubbles fastLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "bubbles", COMPRESSION_FASTLZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: bubbles fastSmol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_bubbles.4bpp.fastSmol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "bubbles", COMPRESSION_FASTSMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 0 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_0.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 0", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 0 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_0.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 0", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 0 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_0.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 0", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 0 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_0.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 0", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 0 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_0.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 0", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 0 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_0.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_0.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 0", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 1 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_1.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 1", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 1 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_1.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 1", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 1 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_1.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 1", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 1 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_1.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 1", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 1 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_1.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 1", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 1 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_1.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 1", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 2 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_2.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 2", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 2 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_2.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 2", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 2 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_2.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 2", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 2 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_2.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 2", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 2 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_2.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 2", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 2 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_2.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 2", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 3 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_3.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 3", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 3 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_3.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 3", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 3 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_3.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 3", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 3 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_3.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 3", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 3 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_3.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 3", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 3 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_3.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 3", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 4 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_4.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 4", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 4 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_4.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 4", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 4 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_4.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 4", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 4 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_4.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 4", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 4 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_4.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 4", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 4 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_4.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 4", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: small mode 5 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_5.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 5", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: small mode 5 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/small_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/small_mode_5.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "small mode 5", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: medium mode 5 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_5.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 5", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: medium mode 5 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/medium_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/medium_mode_5.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "medium mode 5", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: large mode 5 smol")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_5.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 5", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}
TEST("Compression test: large mode 5 lz")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/large_mode_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/large_mode_5.4bpp.lz");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "large mode 5", COMPRESSION_LZ, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 63 1")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_63_1.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_63_1.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 62 2")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_62_2.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_62_2.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 61 3")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_61_3.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_61_3.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 60 4")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_60_4.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_60_4.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 59 5")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_59_5.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_59_5.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 58 6")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_58_6.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_58_6.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 57 7")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_57_7.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_57_7.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 56 8")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_56_8.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_56_8.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 55 9")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_55_9.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_55_9.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 54 10")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_54_10.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_54_10.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 53 11")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_53_11.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_53_11.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 52 12")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_52_12.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_52_12.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 51 13")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_51_13.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_51_13.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 50 14")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_50_14.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_50_14.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 49 15")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_49_15.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_49_15.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 48 16")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_48_16.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_48_16.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 47 17")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_47_17.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_47_17.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 46 18")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_46_18.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_46_18.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 45 19")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_45_19.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_45_19.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 44 20")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_44_20.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_44_20.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 43 21")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_43_21.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_43_21.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 42 22")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_42_22.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_42_22.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 41 23")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_41_23.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_41_23.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 40 24")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_40_24.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_40_24.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 39 25")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_39_25.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_39_25.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 38 26")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_38_26.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_38_26.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 37 27")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_37_27.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_37_27.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 36 28")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_36_28.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_36_28.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 35 29")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_35_29.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_35_29.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 34 30")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_34_30.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_34_30.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 33 31")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_33_31.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_33_31.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

TEST("Compression test: table generation 32 32")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/table_32_32.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/table_32_32.4bpp.smol");

    bool32 areEqual = DecompressImgPrintResults(compFile, origFile, "", COMPRESSION_SMOL, sizeof(compFile));
    EXPECT_EQ(areEqual, TRUE);
}

