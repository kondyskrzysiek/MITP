#include <stdio.h>
#include "sort.h"

int minimum(MATRIX *ary, int start)
{
    int index = start;
    int liczba = *(ary->ptr + start);

    for (; start < ary->y; start++)
    {
        if (liczba > *(ary->ptr + start))
        {

            liczba = *(ary->ptr + start);
            index = start;
        }
    }

    return index;
}

int sort_select(MATRIX *ary)
{
    int h = 0, index;
    for (int i = 0; i < ary->y; i++)
    {
        index = minimum(ary, i + 1);
        if (*(ary->ptr + i) > *(ary->ptr + index))
        {
            h = *(ary->ptr + index);
            int *address = ary->ptr + index;
            *address = *(ary->ptr + i);
            int *adr = ary->ptr + i;
            *adr = h;
        }
    }
    return 0;
}