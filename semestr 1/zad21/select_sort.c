#include <stdio.h>
#include "sort.h"


void select_sort(void *base, size_t len, size_t width, int (*compar)(const void *, const void *))
{
    int temp = 0, index = 0;
    for (int i = 0; i < len; i++)
    {
        index = i;
        for(int x = i +1;x < len; x++)
        {
            if ((*compar)(base + (width * index), base + (width * x)) > 0)
                index = x;
        }
        // if (base[i] > base[index])
        if ((*compar)(base + (width * i), base + (width * index)) > 0)
        {
            swap(base + (width * i), base + (width * index),width);
        }
    }
}