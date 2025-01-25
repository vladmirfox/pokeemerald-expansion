#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <filesystem>
#include "compressSmolTiles.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Wrong number of inputs\n");
        return 1;
    }
    std::string inputName = argv[1];
    std::string outputName = argv[2];
    //std::filesystem::path filePath = "/home/hedara/Git/Pokemon/myRemotes/pokeemerald-expansion/graphics/";
    //std::string fileName = "/home/hedara/Git/Pokemon/myRemotes/pokeemerald-expansion/graphics/wonder_card/bg8.bin";
    CompressionResult compression = compressTileset(inputName);
    std::vector<unsigned int> writeVec = getWriteVecs(compression);
    std::ofstream fileOut(outputName, std::ios::out | std::ios::binary);
    fileOut.write(reinterpret_cast<const char *>(writeVec.data()), writeVec.size()*4);
    fileOut.close();
    /*
    std::string fileName;
    std::vector<std::string> fileList;
    //fileList.push_back(fileName);
    size_t longestTileNumber = 0;
    size_t longestFlip = 0;
    size_t longestPal = 0;
    for (const std::filesystem::directory_entry &dirEntry : std::filesystem::recursive_directory_iterator(filePath))
    {
        if (dirEntry.is_regular_file())
        {
            fileName = dirEntry.path().string();
            if (fileName.find(".bin.lz") == std::string::npos)
                continue;
        }
        else
        {
            continue;
        }
        fileList.push_back(fileName);
    }
    size_t totalSize = 0;
    size_t lzSize = 0;
    size_t rawSize = 0;
    for (std::string fullName : fileList)
    {
        std::string baseName = fullName;
        baseName.pop_back();
        baseName.pop_back();
        baseName.pop_back();
        CompressionResult compressedTilemap = compressTileset(baseName);
        size_t currSize = 0;
        size_t tileLength = compressedTilemap.tileVecs.loVec.size() + 2*compressedTilemap.tileVecs.symVec.size();
        size_t flipLength = compressedTilemap.flipVecs.loVec.size() + 2*compressedTilemap.flipVecs.symVec.size();
        size_t palLength = compressedTilemap.palVecs.loVec.size() + 2*compressedTilemap.palVecs.symVec.size();
        if (tileLength >longestTileNumber)
            longestTileNumber = tileLength;
        if (flipLength > longestFlip)
            longestFlip = flipLength;
        if (palLength > longestPal)
            longestPal = palLength;
        currSize += compressedTilemap.compressedSize;
        if (currSize !=0)
        {
            totalSize += currSize;
            lzSize += getFileSize(fullName);
            rawSize += getFileSize(baseName);
        }
        else
        {
            printf("%s\n", baseName.c_str());
        }
    }
    printf("Raw size: %zu\n", rawSize);
    printf("LZ  size: %zu\n", lzSize);
    printf("New size: %zu\n", totalSize);
    printf("Longest tile: %zu\n", longestTileNumber);
    printf("Longest flip: %zu\n", longestFlip);
    printf("Longest pal:  %zu\n", longestPal);
    */
    return 0;
}
