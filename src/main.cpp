#include <iostream>
#include "ppmFileGenerator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    PpmFileGenerator Pixy(100, 100, 255, "test_file.ppm");
    Pixy.GeneratePpmFile(255, 0, 255);

    return 0;
}
