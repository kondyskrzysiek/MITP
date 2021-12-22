#include "matrix.h"

int m_put(MATRIX *tab, int x, int y, int value)
{
    if (x <= 0 || y <= 0 || x > tab->x || y > tab->y)
        return 0;

    *(tab->wsk + --x * tab->y + --y) = value;
    return 1;
}