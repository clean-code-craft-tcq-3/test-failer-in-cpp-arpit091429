#include <functional>
#include <iostream>
using namespace std;
#include <assert.h>

void testTshirtsSize(function<char(int)> func)
{
    assert(func(37) == 'S');
    assert(func(40) == 'M');
    assert(func(43) == 'L');
    assert(func(38) == 'S');
    assert(func(42) == 'M');
}
