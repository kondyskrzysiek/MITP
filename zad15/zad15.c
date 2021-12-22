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
    if (tab.x <= 0 || tab.y <= 0 || tab.wsk == NULL)
        return 0;

    for (int x = 0; x < tab.x; x++)
    {
        for (int y = 0; y < tab.y; y++)
            printf("%d\t", tab.wsk[x * tab.y + y]);
        printf("\n");
    }
    printf("\n");

    return 1;
}

int m_get(MATRIX tab, int x, int y)
{
    if (x > tab.x || y > tab.y || tab.wsk == NULL)
        return 0;
    return *(tab.wsk + --x * tab.y + --y);
}

int m_put(MATRIX tab, int x, int y, int value)
{
    if (x <= 0 || y <= 0 || x > tab.x || y > tab.y)
        return 0;

    *(tab.wsk + --x * tab.y + --y) = value;
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

    if (!mstruct->wsk)
        return 0;

    mstruct->x = x;
    mstruct->y = y;

    return m_scanf(mstruct);
}

int main()
{
    MATRIX tab;
    int x = 0, y = 0;

    printf("tworzenie macierzy podaj x i y: ");
    scanf("%d %d", &tab.x, &tab.y);

    tab = m_create(tab.x, tab.y);

    printf("MACIERZ\n");
    if (!m_printf(tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // printf("zapis całej macierzy podaj wiersze i kolumny macierzy <<x y>>\n");
    // scanf("%d %d", &x, &y);

    // m_scanf_(&tab, x, y);

    // printf("MACIERZ\n");
    // m_printf(tab);

    // printf("Zmiana wartosci dla 3 poszczegolnych komorek, podaj wiersz kolumne i wartosc jaka wpisac << x y wartosc>> \n");
    // for (int i = 0; i < 3; i++)
    // {
    //     int value = 0;
    //     printf("%d: ", i + 1);
    //     scanf("%d %d %d", &x, &y, &value);
    //     if (!m_put(tab, x, y, value))
    //     {
    //         printf("ERROR\n");
    //         return 0;
    //     }
    // }

    // printf("MACIERZ\n");
    // m_printf(tab);

    // printf("Sprawdz 3 dowolne miejsca w macierzy\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     int a;
    //     printf("%d: ", i + 1);
    //     scanf("%d %d", &x, &y);
    //     a = m_get(tab, x, y);
    //     if (!a)
    //     {
    //         printf("ERROR\n");
    //         return 0;
    //     }
    //     printf(">>> %d\n",a);
    // }

    // printf("MACIERZ\n");
    // m_printf(tab);

    printf("usuwanie struktury MATRIX\n");

    if (!m_remove(&tab))
    {
        printf("ERROR\n");
        return 0;
    }
    else
        printf("CORRECT\n");

    printf("\nMACIERZ\n");
    if (!m_printf(tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    return 0;
}