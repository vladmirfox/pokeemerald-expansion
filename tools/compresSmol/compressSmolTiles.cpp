#include "compressSmolTiles.h"
#include <vector>

std::vector<unsigned short> readFileAsUS(std::string filePath)
{
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        fprintf(stderr, "Error: Couldn't open %s for reading bytes\n", filePath.c_str());
        return std::vector<unsigned short>(0);
    }
    iStream.ignore( std::numeric_limits<std::streamsize>::max() );
    std::streamsize size = iStream.gcount();
    iStream.clear();
    iStream.seekg( 0, std::ios_base::beg );
    std::vector<unsigned char> ucVec(size);
    iStream.read((char*)(&ucVec[0]), size);
    iStream.close();
    unsigned int *pUInt = reinterpret_cast<unsigned int *>(ucVec.data());
    std::vector<unsigned short> returnVec;
    for (size_t i = 0; i < ucVec.size()/4; i++)
        returnVec.push_back(pUInt[i]);
    return returnVec;
}

CompressionResult compressTileset(std::string fileName)
{
    CompressionResult result;
    result.tilemapSize = 0;
    std::vector<unsigned short> tiles = readFileAsUS(fileName);
    if (tiles.size() == 0)
        return result;
    result.tilemapSize = tiles.size()*2;
    std::vector<unsigned short> tileNums(tiles.size());
    std::vector<unsigned short> flips(tiles.size());
    std::vector<unsigned short> pals(tiles.size());
    for (size_t i = 0; i < tiles.size(); i++)
    {
        tileNums[i] = tiles[i] & 0b1111111111;
        flips[i] = (tiles[i] >> 10) & 0x3;
        pals[i] = tiles[i] >> 12;
    }
    std::vector<unsigned short> spares = tileNums;
    deltaEncodeTileNums(&tileNums);
    deltaDecodeTileNums(&tileNums);
    for (size_t i = 0; i < spares.size(); i++)
    {
        if (spares[i] != tileNums[i])
            printf("Fail\n");
    }
    result.tileVecs = compressVector(&tileNums);
    result.flipVecs = compressVector(&flips);
    result.palVecs = compressVector(&pals);
    result.compressedSize += result.tileVecs.loVec.size();
    result.compressedSize += result.tileVecs.symVec.size()*2;
    result.compressedSize += result.flipVecs.loVec.size();
    result.compressedSize += result.flipVecs.symVec.size()*2;
    result.compressedSize += result.palVecs.loVec.size();
    result.compressedSize += result.palVecs.symVec.size()*2;
    result.header = getHeader(result);
    return result;
}

void deltaEncodeTileNums(std::vector<unsigned short> *pTileNums)
{
    unsigned short prevVal = 0;
    for (size_t i = 0; i < pTileNums->size(); i++)
    {
        unsigned short current = (*pTileNums)[i];
        (*pTileNums)[i] = (current - prevVal) & 0b1111111111;
        prevVal = current;
    }
}

void deltaDecodeTileNums(std::vector<unsigned short> *pTileNums)
{
    unsigned short prevVal = 0;
    for (size_t i = 0; i < pTileNums->size(); i++)
    {
        unsigned short delta = (*pTileNums)[i];
        (*pTileNums)[i] = (delta + prevVal) & 0b1111111111;
        prevVal = (*pTileNums)[i];
    }
}

std::vector<unsigned short> decompressVector(std::vector<unsigned short> *pVec)
{
    std::vector<unsigned short> returnVec;
    for (size_t i = 0; i < pVec->size(); i+=3)
    {
        unsigned short length = (*pVec)[i];
        unsigned short offset = (*pVec)[i + 1];
        if (length != 0)
        {
            returnVec.push_back((*pVec)[i + 2]);
            for (size_t j = 0; j < length; j++)
                returnVec.push_back(returnVec[returnVec.size() - offset]);
        }
        else
        {
            returnVec.push_back((*pVec)[i + 2]);
        }
    }
    return returnVec;
}

CompressVectors compressVector(std::vector<unsigned short> *pVec)
{
    CompressVectors vecs;
    std::vector<ShortCopy> shortCopies = getShortCopies(*pVec, 2);
    if (!verifyShortCopies(&shortCopies, pVec))
    {
        fprintf(stderr, "Error getting tile-number compression\n");
        return vecs;
    }
    std::vector<ShortCompressionInstruction> shortInstructions = getShortInstructions(shortCopies, 0);
    std::vector<unsigned char> loVec = getLosFromInstructions(shortInstructions);
    std::vector<unsigned short> symVec = getSymsFromInstructions(shortInstructions);

    if (!verifyBytesShort(&loVec, &symVec, pVec))
    {
        fprintf(stderr, "Error verifying tile-number compression\n");
        return vecs;
    }
    vecs.loVec = loVec;
    vecs.symVec = symVec;

    return vecs;
}

size_t getTotalSize(std::vector<CompressVectors> *input)
{
    size_t totalSize = 0;
    for (size_t i = 0; i < 3; i++)
    {
        if ((*input)[i].loVec.size() == 0)
            return 0;
        if ((*input)[i].symVec.size() == 0)
            return 0;
        totalSize += (*input)[i].loVec.size();
        totalSize += (*input)[i].symVec.size();
    }
    return totalSize;
}

std::vector<unsigned short> decodeCompression(std::vector<CompressVectors> input)
{
    std::vector<unsigned short> decoded;
    std::vector<unsigned short> tileNums = decodeBytesShort(&(input[0].loVec), &(input[0].symVec));
    std::vector<unsigned short> flips = decodeBytesShort(&(input[1].loVec), &(input[1].symVec));
    std::vector<unsigned short> pals = decodeBytesShort(&(input[2].loVec), &(input[2].symVec));
    return decoded;
}

TileHeader getHeader(CompressionResult compression)
{
    TileHeader header;
    header.mode = IS_TILEMAP;
    header.tilemapSize = compression.tilemapSize;
    header.symbolSize = compression.tileVecs.symVec.size() + compression.flipVecs.symVec.size() + compression.palVecs.symVec.size();
    header.tileNumberSize = compression.tileVecs.loVec.size();
    header.flipSize = compression.flipVecs.loVec.size();
    header.palSize = compression.palVecs.loVec.size();
    header.header[0] = header.mode;
    header.header[0] |= header.tilemapSize << 4;
    header.header[0] |= header.symbolSize << 18;
    header.header[1] = header.tileNumberSize;
    header.header[1] |= header.flipSize << 11;
    header.header[1] |= header.palSize << 20;
    return header;
}

std::vector<unsigned int> getWriteVecs(CompressionResult compression)
{
    std::vector<unsigned int> returnVec;
    returnVec.push_back(compression.header.header[0]);
    returnVec.push_back(compression.header.header[1]);
    unsigned int tempInt = 0;
    bool containsData = false;
    std::vector<unsigned int> allSymbols;
    for (unsigned short val : compression.tileVecs.symVec)
        allSymbols.push_back(val);
    for (unsigned short val : compression.flipVecs.symVec)
        allSymbols.push_back(val);
    for (unsigned short val : compression.palVecs.symVec)
        allSymbols.push_back(val);
    for (size_t i = 0; i < compression.header.symbolSize; i++)
    {
        unsigned int currData = allSymbols[i];
        if (containsData)
            currData = currData << 16;
        tempInt += currData;
        containsData = true;
        if ((i+1) % 2 == 0)
        {
            returnVec.push_back(tempInt);
            tempInt = 0;
            containsData = false;
        }
    }
    if (containsData)
        returnVec.push_back(tempInt);
    containsData = false;
    tempInt = 0;
    std::vector<unsigned int> allLOs;
    for (unsigned short val : compression.tileVecs.loVec)
        allLOs.push_back(val);
    for (unsigned short val : compression.flipVecs.loVec)
        allLOs.push_back(val);
    for (unsigned short val : compression.palVecs.loVec)
        allLOs.push_back(val);
    printf("ReturnVec: %zu\n", returnVec.size());
    size_t totalLOs = compression.header.tileNumberSize + compression.header.flipSize + compression.header.palSize;
    for (size_t i = 0; i < totalLOs; i++)
    {
        unsigned int currData = allLOs[i] << (8*(i % 4));
        tempInt += currData;
        containsData = true;
        if ((i+1) % 4 == 0)
        {
            returnVec.push_back(tempInt);
            printf("%u\n", tempInt);
            tempInt = 0;
            containsData = false;
        }
    }
    if (containsData)
    {
        printf("%u\n", tempInt);
        returnVec.push_back(tempInt);
    }
    return returnVec;
}

TileHeader readTileHeader(unsigned int *data)
{
    TileHeader header;
    header.mode = (CompressionMode)(data[0] & 0xf);
    header.tilemapSize = (data[0] >> 4) & 0x3fff;
    header.symbolSize = (data[0] >> 18) & 0x3fff;
    header.tileNumberSize = data[1] & 0b11111111111;
    header.flipSize = (data[1] >> 11) & 0b111111111;
    header.palSize = (data[1] >> 20) & 0b1111111111;
    return header;
}

bool verifyTileCompression(std::vector<unsigned int> compression, std::vector<unsigned short> input)
{
    TileHeader header = readTileHeader(compression.data());
    std::vector<unsigned short> tileNumbers;
    std::vector<unsigned short> flips;
    std::vector<unsigned short> palIds;
    std::vector<unsigned short> symVec;
    std::vector<unsigned char> loVec;
    for (size_t i = 2; i < compression.size(); i++)
    {
        symVec.push_back(compression[i] & 0xffff);
        symVec.push_back(compression[i] >> 16);
        loVec.push_back(compression[i] & 0xff);
        loVec.push_back((compression[i] >> 8) & 0xff);
        loVec.push_back((compression[i] >> 16) & 0xff);
        loVec.push_back((compression[i] >> 24) & 0xff);
    }
    size_t loCount = 0;
    size_t symIndex = 0;
    size_t loStartIndex = header.symbolSize*2 + (header.symbolSize % 2) * 2;
    while (loCount < header.tileNumberSize)
    {
        size_t currLength = loVec[loStartIndex + loCount];
        loCount++;
        if (currLength & LO_CONTINUE_BIT)
        {
            currLength -= LO_CONTINUE_BIT;
            currLength += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        size_t currOffset = loVec[loStartIndex + loCount];
        loCount++;
        if (currOffset & LO_CONTINUE_BIT)
        {
            currOffset -= LO_CONTINUE_BIT;
            currOffset += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        if (currLength != 0)
        {
            tileNumbers.push_back(symVec[symIndex]);
            symIndex++;
            for (size_t i = 0; i < currLength; i++)
                tileNumbers.push_back(tileNumbers[tileNumbers.size() - currOffset]);
        }
        else
        {
            for (size_t i = 0; i < currOffset; i++)
            {
                tileNumbers.push_back(symVec[symIndex]);
                symIndex++;
            }
        }
    }
    loStartIndex += loCount;
    loCount = 0;
    while (loCount < header.flipSize)
    {
        size_t currLength = loVec[loStartIndex + loCount];
        loCount++;
        if (currLength & LO_CONTINUE_BIT)
        {
            currLength -= LO_CONTINUE_BIT;
            currLength += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        size_t currOffset = loVec[loStartIndex + loCount];
        loCount++;
        if (currOffset & LO_CONTINUE_BIT)
        {
            currOffset -= LO_CONTINUE_BIT;
            currOffset += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        if (currLength != 0)
        {
            flips.push_back(symVec[symIndex]);
            symIndex++;
            for (size_t i = 0; i < currLength; i++)
                flips.push_back(flips[flips.size() - currOffset]);
        }
        else
        {
            for (size_t i = 0; i < currOffset; i++)
            {
                flips.push_back(symVec[symIndex]);
                symIndex++;
            }
        }
    }
    loStartIndex += loCount;
    loCount = 0;
    while (loCount < header.palSize)
    {
        size_t currLength = loVec[loStartIndex + loCount];
        loCount++;
        if (currLength & LO_CONTINUE_BIT)
        {
            currLength -= LO_CONTINUE_BIT;
            currLength += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        size_t currOffset = loVec[loStartIndex + loCount];
        loCount++;
        if (currOffset & LO_CONTINUE_BIT)
        {
            currOffset -= LO_CONTINUE_BIT;
            currOffset += loVec[loStartIndex + loCount] << 7;
            loCount++;
        }
        if (currLength != 0)
        {
            palIds.push_back(symVec[symIndex]);
            symIndex++;
            for (size_t i = 0; i < currLength; i++)
                palIds.push_back(palIds[palIds.size() - currOffset]);
        }
        else
        {
            for (size_t i = 0; i < currOffset; i++)
            {
                palIds.push_back(symVec[symIndex]);
                symIndex++;
            }
        }
    }
    loStartIndex += loCount;
    loCount = 0;
    return true;
}
