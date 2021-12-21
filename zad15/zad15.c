#include <stdio.h>
#include <stdlib.h>
// #include "matrix.h"

typedef struct MATRIX_S
{
    int x;    /* liczba wierszy */
    int y;    /* liczba kolumn */
    int *wsk; /* adres tablicy x*y elementowej */
} MATRIX;

MATRIX m_create(int x, int y)
{
    MATRIX tab;
    tab.x = x;
    tab.y = y;
    // int tab;
    int size = x * y;
    // tab.wsk = (int *)calloc(size, sizeof(int));
    tab.wsk = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        *(tab.wsk + i) = i+1;
    }
    return tab;
}

int m_printf(MATRIX tab)
{
    int size = tab.x * tab.y;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", tab.wsk[i]);
        if ((i + 1) % tab.y == 0)
            printf("\n");
    }

    return 1;
}

int m_get(MATRIX tab,int x, int y)
{
    x -= 1;
    y -= 1;
    return *(tab.wsk + x * tab.y + y);
}

void m_put(MATRIX tab, int x, int y, int wart)
{
    x -= 1;
    y -= 1;
    *(tab.wsk + x * tab.y + y) = wart;
}

int m_remove(MATRIX *mstruct)
{

    return 1;
}

int main()
{
    MATRIX tab;
    int a;
    tab.x = 3;
    tab.y = 3;
    tab = m_create(tab.x, tab.y);
    m_put(tab,2,2,10);
    printf("--%d\n",m_get(tab,2,3));
    a = m_printf(tab);

    // for(int i =0;i<size;i++)
    // {
    //     printf("%d",tab.wsk[i]);
    // }

    return 0;
}