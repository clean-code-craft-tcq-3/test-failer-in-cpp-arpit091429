#include "misaligned.h"
#include "misalignedTest.h"
#include <iomanip>
#include <iostream>

const char* MajorColorNames[]   = {"White", "Red", "Black", "Yellow", "Violet"};
int         numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[]   = {"Blue", "Orange", "Green", "Brown", "Slate"};
int         numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair::ColorPair(MajorColor major, MinorColor minor) : m_majorColor(major), m_minorColor(minor) {}

std::string ColorPair::ToString()
{
    std::string colorPairStr = MajorColorNames[m_majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[m_minorColor];
    return colorPairStr;
}

MajorColor ColorPair::getMajor() { return m_majorColor; }

MinorColor ColorPair::getMinor() { return m_minorColor; }

ColorPair ConvertPairNumberstoColor(int pairNumber)
{
    int        zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor          = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor          = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);

    return ColorPair(majorColor, minorColor);
}
void printColorCodeMap()
{
    std::cout << " Color Code MAP " << std::endl;
    std::cout << "PairNumber | MajorColor | MinorColor " << std::endl;

    int maxPairCount = numberOfMajorColors * numberOfMinorColors;

    for (int pairNumber = 1; pairNumber <= maxPairCount; ++pairNumber)
    {
        ColorPair colorPair = ConvertPairNumberstoColor(pairNumber);
        std::cout << std::setw(6) << pairNumber << " \t   | \t " << colorPair.ToString().c_str() << std::endl;
    }
}

int main()
{
    printColorCodeMap();
    testNumberToPair(1, WHITE, BLUE);
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    std::cout << "All is well (maybe!)\n";
    getchar();
    return 0;
}
