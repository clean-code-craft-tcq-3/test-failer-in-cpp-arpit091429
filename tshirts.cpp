#include "TestTshirtSize.h"
#include <iostream>

char size(int cms)
{
    char sizeName = '\0';
    if (cms <= 38)
    {
        sizeName = 'S';
    }
    else if (cms > 38 && cms <= 42)
    {
        sizeName = 'M';
    }
    else if (cms > 42)
    {
        sizeName = 'L';
    }
    return sizeName;
}

int main()
{
    testTshirtsSize(size);
    std::cout << "All is well (maybe!)\n";
    getchar();
    return 0;
}
