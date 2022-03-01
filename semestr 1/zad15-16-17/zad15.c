#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    MATRIX tab;
    MATRIX result_mulitiplications;
    int num, x = 0, y = 0;

    printf("Tworzenie macierzy : wymiar <<x y>>: ");
    scanf("%d %d", &tab.x, &tab.y);

    //create matrices
    tab = m_create(tab.x, tab.y);

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // introducing variables to the matrix
    printf("Napisz cala macierz podaj wiersze i kolumny macierzy jaka chesz zapisac <<x y>>\n");
    scanf("%d %d", &x, &y);

    m_scanf_(&tab, x, y);

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    MATRIX tabB;
    printf("Tworzenie drugiej macierzy do wymnozenia: wymiar <<x y>>: ");
    scanf("%d %d", &tabB.x, &tabB.y);

    //create matrices
    tabB = m_create(tabB.x, tabB.y);

    //matrix notation
    printf("Uzupelnianie macierzy liczbami\n");
    m_scanf(&tabB);

    printf("\ntabB\n");
    if (!m_printf(&tabB))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }


    
    result_mulitiplications.x = tab.x;
    result_mulitiplications.y = tabB.y;
    result_mulitiplications = m_create(result_mulitiplications.x, result_mulitiplications.y);

    m_multiplication_mxm(&tab,&tabB, &result_mulitiplications);

    printf("\nresult_mulitiplications\n");
    if (!m_printf(&result_mulitiplications))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }




    if ((tab.x == tab.y) && tab.x >= 2) //there is no matrix determinant
        printf("Wyznacznik macierzy %d x %d = %d\n\n", tab.x, tab.y, m_determinant(&tab));
    else
        printf("Macierz %d x %d nie jest macierza kwadratowa, jej wyznacznik nie jest zdefiniowany \n\n", tab.x, tab.y);
    
    
    //creating the result of multiplication of a matrix by a scalar

    printf("Pomnoz macierz przez skalar >> ");
    scanf("%d", &num);

    result_mulitiplications.x = tab.x;
    result_mulitiplications.y = tab.y;
    result_mulitiplications = m_create(result_mulitiplications.x, result_mulitiplications.y);

    m_multiplication(&tab, num, &result_mulitiplications);

    printf("\nWYNIK MNOZENIA MACIERZY PRZEZ SKALAR\n");
    if (!m_printf(&result_mulitiplications))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }


    // introducing variables to the matrix
    printf("Zmien wartosc dla 3 pojedynczych komorek, podaj wiersz, kolumne i wartosc do wprowadzenia << x y wartosc>> \n");
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
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    // displaying any points in the matrix
    printf("Sprawdz dowolne 3 miejsca w matrycy\n");
    for (int i = 0; i < 3; i++)
    {
        int a;
        printf("%d: ", i + 1);
        scanf("%d %d", &x, &y);
        printf(">>> %d\n", m_get(&tab, x, y));
    }

    //displaying matrices
    printf("\nMATRIX\n");
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
    
    if (!m_remove(&tabB))
    {
        printf("ERROR DELETE\n");
        return 0;
    }
    else
        printf("CORRECT DELETE\n");

    if (!m_remove(&result_mulitiplications))
    {
        printf("ERROR DELETE\n");
        return 0;
    }
    else
        printf("CORRECT DELETE\n");

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : Macierz nie istnieje\n");
        return 0;
    }

    return 0;
}