#include <iostream>

void printUserManual()
{
    std::cout << "<-- Printing User Manual -->" << std::endl;
    std::cout << "Pair Number "
              << " Color Pair" << std::endl;

    for (int pairNum = 1; pairNum <= (numberOfMajorColors * numberOfMinorColors); pairNum++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::getColorFromPairNumber(pairNum);
        std::cout << pairNum << "            " << colorPair.toString() << std::endl;
    }
}
