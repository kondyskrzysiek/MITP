#include <stdio.h>
#include "matrix.h"

int m_multiplication_mxm(MATRIX *tabA, MATRIX *tabB, MATRIX *result)
{
    int num;
    int msc = 0;
    
    if (tabB->x != tabA->y)
        return 0;

    for (int x = 0; x < tabA->x; x++)
    {
        for (int i = 0; i < tabB->y; i++)
        {
            num = 0;
            for (int y = 0; y < tabA->y; y++)
            {
                num += *(tabA->wsk + x * tabA->y + y) * *(tabB->wsk + y * tabB->y + i);
            }
            int *adres = result->wsk + msc;
            *adres = num;
            msc += 1;
        }
    }

    return 1;
}