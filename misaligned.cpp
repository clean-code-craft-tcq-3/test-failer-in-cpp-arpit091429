#include <assert.h>
#include <iostream>

void checkPairNumberValidity(int pair_number)
{
    assert(pair_no >= 1 && pair_no <= 25);
}

int printColorMap()
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int         i = 0, j = 0;
    int pair_number;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            pair_number = (i * 5 + j)+1;
            std::cout << pair_number << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            checkPairNumberValidity(pair_number);
        }
    }
    return i*j;
}

int main()
{
    printColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
