#include <stdlib.h>
#include "matrix.h"

MATRIX m_create(int x, int y)
{
    int size;
    struct MATRIX_S tab;
    tab.x = x;
    tab.y = y;
    size = x*y;
    tab.wsk = malloc(size * sizeof(*tab.wsk));

    return tab;
}