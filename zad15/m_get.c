#include "matrix.h"

int m_get(MATRIX *tab, int x, int y)
{
    if (x > tab->x || y > tab->y || !tab->wsk)
        return 0;
    return *(tab->wsk + --x * tab->y + --y);
}