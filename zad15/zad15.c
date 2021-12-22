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
        *(tab.wsk + i) = i + 1;
    }
    return tab;
}

int m_printf(MATRIX tab)
{
    int size = tab.x * tab.y;
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\t", tab.wsk[i]);
    //     if ((i + 1) % tab.y == 0)
    //         printf("\n");
    // }

    for (int x = 0; x < tab.x; x++)
    {
        for (int y = 0; y < tab.y; y++)
            printf("%d\t", tab.wsk[x * tab.y + y]);
        printf("\n");
    }

    return 1;
}

int m_get(MATRIX tab, int x, int y)
{
    return *(tab.wsk + --x * tab.y + --y);
}

int m_put(MATRIX tab, int x, int y, int wart)
{
    if (x <=0 || y<=0 || x > tab.x || y > tab.y)
        return 0;

    *(tab.wsk + --x * tab.y + --y) = wart;
    return 1;
}

int m_remove(MATRIX *mstruct)
{
    if (!mstruct || !mstruct->wsk)
        return 0;

    mstruct->x = 0;
    mstruct->y = 0;
    free(mstruct->wsk);
    mstruct->wsk = NULL;

    return 1;
}

int m_scanf(MATRIX *mstruct)
{
    for (int x = 0; x < mstruct->x; x++)
    {
        for (int y = 0; y < mstruct->y; y++)
        {
            if (!scanf("%d", mstruct->wsk + (x * mstruct->y) + y))
                return 0;
        }
    }

    return 1;
}

int m_scanf_(MATRIX *mstruct, int x, int y)
{
    if (!mstruct)
        return 0;

    if (x != mstruct->x || y != mstruct->y)
    {
        if (!mstruct->wsk)
        {
            int size = x * y;
            mstruct->wsk = calloc(size, sizeof(int));
        }
        else
        {
            mstruct->wsk = realloc(mstruct->wsk, sizeof(int) * x * y);
        }
    }

    if(!mstruct->wsk)
        return 0;
    
    mstruct->x = x;
    mstruct->y = y;

    return m_scanf(mstruct);
}



int main()
{
    MATRIX tab;
    int a;
    tab.x = 3;
    tab.y = 3;
    tab = m_create(tab.x, tab.y);
    
    m_printf(tab);
    


    if (!m_put(tab,3,3,15))
        printf("ERROR\n");

    return 0;
}