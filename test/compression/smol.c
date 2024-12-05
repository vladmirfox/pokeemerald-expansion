#include "global.h"
#include "main.h"
#include "malloc.h"
#include "random.h"
#include "sprite.h"
#include "test/test.h"

TEST("Compression test: tileset")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.smol");
    u32 imageSize = GetDecompressedDataSize(compFile);
    u32 *compBuffer = Alloc(imageSize);
    LZDecompressWram(compFile, compBuffer);

    u32 val1 = 0;
    u32 val2 = 0;
    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        val1 = origFile[i];
        val2 = compBuffer[i];
        if (val1 != val2)
        {
            areEqual = FALSE;
            break;
        }
    }

    EXPECT_EQ(areEqual, TRUE);

    Free(compBuffer);
}

TEST("Compression test: tilesetLZ")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/tilesetTest.4bpp.lz");
    u32 imageSize = GetDecompressedDataSize(compFile);
    u32 *compBuffer = Alloc(imageSize);
    LZDecompressWram(compFile, compBuffer);

    u32 val1 = 0;
    u32 val2 = 0;
    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        val1 = origFile[i];
        val2 = compBuffer[i];
        if (val1 != val2)
        {
            areEqual = FALSE;
            break;
        }
    }

    EXPECT_EQ(areEqual, TRUE);

    Free(compBuffer);
}

TEST("Compression test: simple battle sprite")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/simple_battle_sprite.4bpp.smol");
    u32 imageSize = GetDecompressedDataSize(compFile);
    u32 *compBuffer = Alloc(imageSize);
    LZDecompressWram(compFile, compBuffer);

    u32 val1 = 0;
    u32 val2 = 0;
    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        val1 = origFile[i];
        val2 = compBuffer[i];
        if (val1 != val2)
        {
            areEqual = FALSE;
            break;
        }
    }

    EXPECT_EQ(areEqual, TRUE);

    Free(compBuffer);
}

TEST("Compression test: complex battle sprite")
{
    static const u32 origFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp");
    static const u32 compFile[] = INCBIN_U32("test/compression/complex_battle_sprite.4bpp.smol");
    u32 imageSize = GetDecompressedDataSize(compFile);
    u32 *compBuffer = Alloc(imageSize);
    LZDecompressWram(compFile, compBuffer);

    u32 val1 = 0;
    u32 val2 = 0;
    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        val1 = origFile[i];
        val2 = compBuffer[i];
        if (val1 != val2)
        {
            areEqual = FALSE;
            break;
        }
    }

    EXPECT_EQ(areEqual, TRUE);

    Free(compBuffer);
}

TEST("Compression test: palette")
{
    static const u32 origFile[] = INCBIN_U32("graphics/pokemon/gyarados/normal.gbapal");
    static const u32 compFile[] = INCBIN_U32("graphics/pokemon/gyarados/normal.gbapal.lz");
    u32 imageSize = GetDecompressedDataSize(compFile);
    u32 *compBuffer = Alloc(imageSize);
    CycleCountStart();
    LZDecompressWram(compFile, compBuffer);
    u32 timeTaken = CycleCountEnd();
    MgbaPrintf(MGBA_LOG_WARN, "Pal decompress time: %u", timeTaken);

    u32 val1 = 0;
    u32 val2 = 0;
    bool32 areEqual = TRUE;
    for (u32 i = 0; i < imageSize/4; i++)
    {
        val1 = origFile[i];
        val2 = compBuffer[i];
        if (val1 != val2)
        {
            areEqual = FALSE;
            break;
        }
    }

    EXPECT_EQ(areEqual, TRUE);

    Free(compBuffer);
}
