#include <stdlib.h>
#include "matrix.h"

int m_scanf_(MATRIX *mstruct, int x, int y)
{
    if (!mstruct)
        return 0;

    if (x != mstruct->x || y != mstruct->y)
    {
        if (!mstruct->wsk)
        {
            int size = x * y;
            mstruct->wsk = calloc(size, sizeof(int));
        }
        else
            mstruct->wsk = realloc(mstruct->wsk, sizeof(int) * x * y);
    }

    if (!mstruct->wsk)
        return 0;

    mstruct->x = x;
    mstruct->y = y;

    return m_scanf(mstruct);
}