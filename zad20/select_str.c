#include <stdio.h>
#include <string.h>
#include "sortstr.h"

static int minimum_str(char *array[], int len_array,int dataStart)
{
    int index = dataStart-1;
    for(;dataStart < len_array;dataStart++)
    {
        if(strcmp(array[index],array[dataStart]) > 0)
            index = dataStart;
    }

    return index;
}

void select_str(char *array[], int len_array)
{
    
    for (int i = 0; i < len_array - 1; i++)
    {
        int index = minimum_str(array,len_array,i + 1);
        if (strcmp(array[i],array[index]) > 0)
        {
            char *temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}