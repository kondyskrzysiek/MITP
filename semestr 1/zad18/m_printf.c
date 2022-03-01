#include <stdio.h>
#include "sort.h"

int m_printf(MATRIX *ary)
{
    int size = ary->x * ary->y;
    if (ary->x <= 0 || ary->y <= 0 || !ary->ptr)
        return 0;

    for (int x = 0; x < ary->x; x++)
    {
        for (int y = 0; y < ary->y; y++)
            printf("%d\t", ary->ptr[x * ary->y + y]);
        printf("\n");
    }
    printf("\n");

    return 1;
}