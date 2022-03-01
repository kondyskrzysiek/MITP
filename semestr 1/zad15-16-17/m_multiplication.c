#include "matrix.h"

int m_multiplication(MATRIX *tab, int num, MATRIX *result)
{
    for (int x = 0; x < (tab->y * tab->x); x++)
    {
        int *adres = result->wsk + x;
        *adres = *(tab->wsk + x) * num;
    }

    return 1;
}