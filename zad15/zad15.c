#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    MATRIX tab;
    int x = 0, y = 0;

    printf("tworzenie macierzy podaj x i y: ");
    scanf("%d %d", &tab.x, &tab.y);

    //create matrices
    tab = m_create(tab.x, tab.y);

    //displaying matrices
    printf("\nMACIERZ\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // introducing variables to the matrix
    printf("zapis całej macierzy podaj wiersze i kolumny macierzy <<x y>>\n");
    scanf("%d %d", &x, &y);

    m_scanf_(&tab, x, y);


    //displaying matrices
    printf("\nMACIERZ\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // introducing variables to the matrix 
    printf("Zmiana wartosci dla 3 poszczegolnych komorek, podaj wiersz kolumne i wartosc jaka wpisac << x y wartosc>> \n");
    for (int i = 0; i < 3; i++)
    {
        int value = 0;
        printf("%d: ", i + 1);
        scanf("%d %d %d", &x, &y, &value);
        if (!m_put(&tab, x, y, value))
        {
            printf("ERROR\n");
            return 0;
        }
    }

    //displaying matrices
    printf("\nMACIERZ\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }
    
    // displaying any points in the matrix
    printf("Sprawdz 3 dowolne miejsca w macierzy\n");
    for (int i = 0; i < 3; i++)
    {
        int a;
        printf("%d: ", i + 1);
        scanf("%d %d", &x, &y);
        a = m_get(&tab, x, y);
        if (!a)
        {
            printf("ERROR\n");
            return 0;
        }
        printf(">>> %d\n",a);
    }

    //displaying matrices
    printf("\nMACIERZ\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // removing the MATRIX structure
    printf("usuwanie struktury MATRIX\n");
    if (!m_remove(&tab))
    {
        printf("ERROR DELETE\n");
        return 0;
    }
    else
        printf("CORRECT DELETE\n");



    //displaying matrices
    printf("\nMACIERZ\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    return 0;
}