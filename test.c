#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
// #include "sortstr.h"

void printf_array(char *array[], int len_array)
{
    for (int i = 0; i < len_array; i++)
        printf("%s\t", array[i]);

    printf("\n");
}

int main()
{
    int len_array = 0;
    while(1)
    {
        printf("Enter the number of items to be sorted >> ");
        scanf("%d", &len_array);
        if(len_array>1)
            break;
        printf("[Length array > 1]\n");
    }

    char *array[len_array];
    char string[14];
    int nextString = 0;

    while (nextString < len_array)
    {
        printf("%d. ", nextString + 1);
        scanf("%s", string);
        array[nextString] = (char *)malloc(sizeof(char) * (strlen(string) + 1));
        strcpy(array[nextString], string);
        nextString += 1;
    }

    printf("\nBefore sorted >> ");

    printf_array(array, len_array);


    return 0;
}