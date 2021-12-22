#include <stdio.h>
#include "matrix.h"

int m_printf(MATRIX *tab)
{
    int size = tab->x * tab->y;
    if (tab->x <= 0 || tab->y <= 0 || !tab->wsk)
        return 0;

    for (int x = 0; x < tab->x; x++)
    {
        for (int y = 0; y < tab->y; y++)
            printf("%d\t", tab->wsk[x * tab->y + y]);
        printf("\n");
    }
    printf("\n");

    return 1;
}