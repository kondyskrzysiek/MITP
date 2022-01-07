#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int m_remove(MATRIX *mstruct)
{
    if (!mstruct || !mstruct->wsk)
        return 0;

    mstruct->x = 0;
    mstruct->y = 0;
    free(mstruct->wsk);
    mstruct->wsk = NULL;

    return 1;
}