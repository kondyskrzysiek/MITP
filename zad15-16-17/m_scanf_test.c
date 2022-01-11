#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

int m_scanf_test(MATRIX *mstruct)
{
    srand(time(0));
    for (int x = 0; x < mstruct->x; x++)
    {
        for (int y = 0; y < mstruct->y; y++)
        {
            int *adres = mstruct->wsk + (x * mstruct->y) + y;
            *adres = (rand() % 201);
        }
    }

    return 1;
}