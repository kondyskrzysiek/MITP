#include <stdio.h>
#include "sortstr.h"

static int minimum_int(int *array, int size_array, int start)
{
    int liczba = array[start];
    int index = start;
    start++;
    for (; start < size_array; start++)
    {
        if (liczba > array[start])
        {
            liczba = array[start];
            index = start;
        }
    }

    return index;
}

int select_int(int *array, int size_array)
{
    int temp, index;
    for (int i = 0; i < size_array; i++)
    {
        index = minimum_int(array,size_array, i + 1);
        if (array[i] > array[index])
        {
            temp = array[index];
            array[index] = array[i];
            array[i] = temp;
        }
    }
    return 0;
}