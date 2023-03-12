#include <utility>

//
// Created by Issashu Greybeard on 12.03.23.
//

#ifndef HOMEWORK2_PPMFILEGENERATOR_H
#define HOMEWORK2_PPMFILEGENERATOR_H

class PpmFileGenerator{
public:
    PpmFileGenerator() = delete;

    PpmFileGenerator(int Width, int Height, int MaxColor, std::string fileName)
    : imageWidth(Width), imageHeight(Height), maxColorComponent(MaxColor), fileName(std::move(fileName)){};

    int GeneratePpmFile(uint8_t R, uint8_t G, uint8_t B) const;

private:
    int imageWidth;
    int imageHeight;
    int maxColorComponent;
    std::string fileName;
};
#endif //HOMEWORK2_PPMFILEGENERATOR_H
