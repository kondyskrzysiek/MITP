#include "sort.h"

void bubble_sort(void *base, size_t len, size_t width, int (*compar)(const void *, const void *))
{
    int check_change = 1;
    while (check_change)
    {
        check_change = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if ((*compar)(base + (width * i), base + (width * (i + 1))) > 0)
            {
                swap(base + (width * i), base + (width * (i + 1)),width);
                check_change = 1;
            }
        }
    }
}