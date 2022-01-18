#include <stdlib.h>
#include "sort.h"

MATRIX m_create(int x, int y)
{
    MATRIX ary;
    ary.x = x;
    ary.y = y;
    int size = x * y;
    ary.ptr = (int *)calloc(size, sizeof(int));
    
    return ary;
}