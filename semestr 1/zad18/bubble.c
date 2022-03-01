#include <stdio.h>
#include "sort.h"

int sort_bubble(MATRIX *ary)
{
    int h = 0;
    for (int x = 1; x < ary->y; x++)
    {
        for (int i = 0; i < ary->y - x; i++)
        {
            if (*(ary->ptr + i) > *(ary->ptr + i + 1))
            {
                h = *(ary->ptr + i + 1);
                int *address = ary->ptr + i + 1;
                *address = *(ary->ptr + i);
                int *adr = ary->ptr + i;
                *adr = h;
            }
        }
    }

    return 0;
}