#include <stdio.h>
#include <string.h>
#include "sort.h"

#define ERROR_PRINTF(a) if (!(a)) {printf("ERROR : Macierz nie istnieje\n");return 0;}
#define REMOVE_MATRIX_CHECK_ERROR(a) if (!(a)) {printf("ERROR DELETE\n");return 0;} else {printf("CORRECT DELETE\n");}
#define ERROR_CHECK(a) if (!(a)) {printf("ERROR ?? \n");return 0;}

void messege_to_the_user()
{
    printf("\nusage: ./zad18 -nvalue\n\n");
    printf("Possible values:\n");
    printf("bubble - for bubble sort\n");
    printf("select - for select sort\n\n");
}

int sort_array(int mode)
{
    MATRIX ary;
    ary.x = 1;
    ary.y = 6;
    ary = m_create(ary.x, ary.y);

    m_scanf_test(&ary);
    printf("Array to sort  >>\t");
    ERROR_PRINTF(m_printf(&ary));

    if(mode == 11)
        sort_bubble(&ary);
    else if (mode == 22)
        sort_select(&ary);

    printf("Sorted array   >>\t");
    ERROR_PRINTF(m_printf(&ary));

    REMOVE_MATRIX_CHECK_ERROR(m_remove(&ary));
    ERROR_PRINTF(m_printf(&ary));

    return 1;
}


int main(int argc, char *argv[])
{
    if (argc > 1 && argc <= 3)
    {
        if (strcmp(argv[1], "-nbubble") == 0 || (argc == 3 && strcmp(argv[2], "bubble") == 0))
        {
            sort_array(11); //bubble = 11 mode
            return 0;
        }
        else if (strcmp(argv[1], "-nselect") == 0 || (argc == 3 && strcmp(argv[2], "select") == 0))
        {
            sort_array(22); //bubble = 22 mode
            return 0;
        }
    }

    messege_to_the_user();

    return 0;
}