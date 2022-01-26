#include "sort.h"

void bubble_str(char *array[], int len_array)
{
    int check_change = 1;
    while (check_change)
    {
        check_change = 0;
        for (int i = 0; i < len_array - 1; i++)
        {
            if (strcmp(array[i], array[i + 1]) > 0)
            {
                char *temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                check_change = 1;
            }
        }
    }
}
