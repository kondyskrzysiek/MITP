#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sort.h"

void messege_to_the_user()
{
    printf("\nusage: ./zad18a -nvalue\n\n");
    printf("Possible values:\n");
    printf("bubble - for bubble sort\n");
    printf("select - for select sort\n\n");
}

int printf_array(int array[], int size_array)
{
    for (int i = 0; i < size_array; i++)
        printf("%d\t", array[i]);

    printf("\n");
    return 0;
}

int comp_int(const void * ad1, const void * ad2) {
    return *(const int *) ad1 - *(const int *) ad2;
}

char parse_args(int argc, char *argv[])
{

    char mode = 0;
    if (argc > 1 && argc <= 3 && argv[1][0] == '-' && argv[1][1] == 'n')
    {
        if (strcmp(argv[1], "-nbubble") == 0)
        {
            mode = 'b';
        }
        else if (strcmp(argv[1], "-nselect") == 0)
        {
            mode = 's';
        }
        else if (argc >= 3 && strcmp(argv[2], "select") == 0)
        {
            mode = 's';
        }
        else if (argc >= 3 && strcmp(argv[2], "bubble") == 0)
        {
            mode = 'b';
        }
    }
    
    return mode;
}

int main(int argc, char *argv[])
{
    char mode = 0;

    mode = parse_args(argc, argv);

    if (mode == 0)
    {
        messege_to_the_user();
        return 0;
    }
    int size_array = 0;

    while(1)
    {
        printf("Enter the number of items to be sorted >> ");
        scanf("%d", &size_array);
        if(size_array>1)
            break;
        printf("[Length array > 1]\n");
    }

    int *array = (int*)malloc(sizeof(int) * size_array);
    int num;
    int nextNumber = 0;

    for(int counter = 0;counter < size_array;counter++)
    {
        printf("%d.  ",counter+1);
        scanf("%d",&num);
        array[counter] = num;
    }

    printf("\nBefore sorted >> ");

    printf_array(array, size_array);

    // qsort(array, size_array,sizeof(int),comp_int);

    if (mode == 'b')
    {
        printf("\n[Bubble]\n");
        bubble_int(array, size_array);
    }
    // else if (mode == 's')
    // {
    //     printf("\n[Select]\n");
    //     select_int(array, size_array);
    // }

    printf("\nAfter sorted  >> ");
    printf_array(array, size_array);
    printf("\n");



    free(array);
    // printf_array(array, size_array);
    return 0;
}