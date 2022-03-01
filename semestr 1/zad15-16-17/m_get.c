#include "matrix.h"

int m_get(MATRIX *tab, int x, int y)
{
    return *(tab->wsk + --x * tab->y + --y);
}