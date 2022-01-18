#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int m_remove(MATRIX *ary)
{
    if (!ary || !ary->ptr)
        return 0;

    ary->x = 0;
    ary->y = 0;
    free(ary->ptr);
    ary->ptr = NULL;

    return 1;
}