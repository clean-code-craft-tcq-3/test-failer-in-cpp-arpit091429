#include <assert.h>

void testTshirtsSize()
{
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'S');
    assert(size(42) == 'M');
}
