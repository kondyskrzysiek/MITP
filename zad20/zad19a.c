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

char parse_args(int argc, char *argv[])
{

    char mode = 0;
    if (argc >= 1 && argc <= 3 && argv[1][0] == '-' && argv[1][1] == 'n')
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

    if (!mode)
    {
        messege_to_the_user();
    }
    int len_array = 0;
    printf("Enter the number of items to be sorted >> ");
    scanf("%d", &len_array);

    char **array = (char **)malloc(sizeof(char **) * len_array);
    char string[] = "";
    int nextString = 0;
    
    int len = len_array;
    
    printf("%d\n",len_array);

    while (nextString < len)
    {   
        printf("\n%d < %d\n",nextString,len);
        scanf("%s", string);
        strcpy(array[nextString], string);
        nextString += 1;
    }
    printf("%d\n",len_array);
    len_array = len;
    printf("%d",len_array);
    printf("\nBefore sorted >> ");
    printf_array(array, len_array);


    return 0;
}    // if (mode == 'b')
    // {
    //     printf("\n[Bubble]\n");
    //     bubble_str(array, len_array);
    // }
    // else if (mode == 's')
    // {
    //     printf("\n[Select]\n");
    //     select_str(array, len_array);
    // }

    // printf("\nAfter sorted >> ");
    // printf_array(array, len_array);
    // printf("\n");

    // for (int i = 0; i < len_array; i++)
    //     free(array[i]);

    // free(array);
    // printf_array(array, len_array);