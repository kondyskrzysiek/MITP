#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sortstr.h"

void messege_to_the_user()
{
    printf("\nusage: ./zad18 -nvalue\n\n");
    printf("Possible values:\n");
    printf("bubble - for bubble sort\n");
    printf("select - for select sort\n\n");
}

void printf_array(char *array[], int len_array)
{
    for (int i = 0; i < len_array; i++)
        printf("%s\t", array[i]);

    printf("\n");
}

char parse_args(int argc, char *argv[], int *dataStart)
{

    char mode = 0;
    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'n')
    {
        if (strcmp(argv[1], "-nbubble") == 0)
        {
            (*dataStart) = 2;
            mode = 'b';
        }
        else if (argc >= 3 && strcmp(argv[2], "bubble") == 0)
        {
            (*dataStart) = 3;
            mode = 'b';
        }
        else if (strcmp(argv[1], "-nselect") == 0)
        {
            (*dataStart) = 2;
            mode = 's';
        }
        else if (argc >= 3 && strcmp(argv[2], "select") == 0)
        {
            (*dataStart) = 3;
            mode = 's';
        }
    }

    return mode;
}

int main(int argc, char *argv[])
{
    char mode = 0;
    int dataStart;

    mode = parse_args(argc, argv, &dataStart);

    if (!mode)
    {
        messege_to_the_user();
    }
    int len_array = argc - dataStart;

    char **array = (char **)malloc(sizeof(char **) * len_array);

    for (int i = dataStart; i < argc; i++)
        array[i - dataStart] = argv[i];

    printf("\nBefore sorted >> ");
    printf_array(array, len_array);

    if (mode == 'b')
    {
        printf("\n[Bubble]\n");
        bubble_str(array, len_array);
    }
    else if (mode == 's')
    {
        printf("\n[Select]\n");
        select_str(array, len_array);
    }

    printf("\nAfter sorted >> ");
    printf_array(array, len_array);
    printf("\n");
    return 0;
}