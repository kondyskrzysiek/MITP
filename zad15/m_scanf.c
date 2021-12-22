#include <stdio.h>
#include "matrix.h"

int m_scanf(MATRIX *mstruct)
{
    int i = 0;
    for (int x = 0; x < mstruct->x; x++)
    {
        for (int y = 0; y < mstruct->y; y++)
        {
            if (!scanf("%d", mstruct->wsk + (x * mstruct->y) + y))
                return 0;
        }
    }

    return 1;
}