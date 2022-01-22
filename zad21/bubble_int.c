#include "sort.h"
// qsort(array, size_array,sizeof(int),comp_int);
void bubble(void * base, size_t nel, size_t width, int (* compar)(const void *, const void *));
{
    int check_change = 1;
    while (check_change)
    {
        check_change = 0;
        for (int i = 0; i < size_array - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                check_change = 1;
            }
        }
    }

    return 0;
}