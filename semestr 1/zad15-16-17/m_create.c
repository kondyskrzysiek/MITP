#include <stdlib.h>
#include "matrix.h"

MATRIX m_create(int x, int y)
{
    MATRIX tab;
    tab.x = x;
    tab.y = y;
    int size = x * y;
    tab.wsk = (int *)calloc(size, sizeof(int));
    
    return tab;
}