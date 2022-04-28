#include <assert.h>
#include <iostream>

void checkPairNumberValidity(int i, int j)
{
    int pair_number = i * 5 + j;
    std::cout << pair_number + 1;
    assert(pair_no >= 1 && pair_no <= 25);
}

void printColorMap()
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int         i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            checkPairNumberValidity(i,j);
        }
    }
}

int main()
{
    printColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
