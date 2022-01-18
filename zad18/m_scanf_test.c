#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

int m_scanf_test(MATRIX *ary)
{
    srand(time(0));
    for (int x = 0; x < ary->x; x++)
    {
        for (int y = 0; y < ary->y; y++)
        {
            int *adres = ary->ptr + (x * ary->y) + y;
            *adres = (rand() % 201);
        }
    }

    return 1;
}