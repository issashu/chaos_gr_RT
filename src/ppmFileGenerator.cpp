//
// Created by Issashu Greybeard on 12.03.23.
//

#include <fstream>
#include <sstream>
#include "ppmFileGenerator.h"

// TODO: Make RGB a single bit-field or at least a struct
int PpmFileGenerator::GeneratePpmFile(uint8_t R, uint8_t G, uint8_t B) const {
    std::ofstream ppmFileStream(this->fileName, std::ios::out | std::ios::binary);
    ppmFileStream << "P3\n";
    ppmFileStream << this->imageWidth << " " << this->imageHeight << "\n";
    ppmFileStream << this->maxColorComponent << "\n";

    for (int rowIdx = 0; rowIdx < this->imageHeight; ++rowIdx) {
        for (int colIdx = 0; colIdx < this->imageWidth; ++colIdx) {
            ppmFileStream << std::to_string(R) << " " << std::to_string(G) << " " << std::to_string(B) << "\t";
        }
        ppmFileStream << "\n";
    }
    ppmFileStream.close();

    return 0;
}
