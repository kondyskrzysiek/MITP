#include <stdio.h>
#include "matrix.h"

int m_scanf(MATRIX *mstruct)
{
    int i=0,j=0;
    for (int x = 0; x < mstruct->x; x++)
    {
        i = x + 1;
        for (int y = 0; y < mstruct->y; y++)
        {
            j = y + 1;
            printf("pole x:%d y:%d >> : ",i,j);
            if (!scanf("%d", mstruct->wsk + (x * mstruct->y) + y))
                return 0;
        }
    }

    return 1;
}