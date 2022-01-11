#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

#define ERROR_M_PRINTF(a) if (!(a)) {printf("ERROR : Macierz nie istnieje\n");return 0;}
#define REMOVE_MATRIX_CHECK_ERROR(a) if (!(a)) {printf("ERROR DELETE\n");return 0;} else {printf("CORRECT DELETE\n");}
#define ERROR_CHECK(a) if (!(a)) {printf("ERROR\n");return 0;}

int main()
{
    MATRIX tab;
    
    srand(time(0));
    int num, x = 0, y = 0;

    //create matrices
    tab.x = (rand() % 10) + 1;
    tab.y = (rand() % 10) + 1;

    printf("Tworzenie macierzy : wymiar %d x %d\n",tab.x,tab.y);
    tab = m_create(tab.x, tab.y);
    
    //displaying matrices
    printf("\nMATRIX\n");
    ERROR_M_PRINTF(m_printf(&tab));

    //matrix notation
    printf("Uzupelnianie macierzy liczbami\n");
    m_scanf_test(&tab);

     //displaying matrices
    printf("\nMATRIX\n");
    ERROR_M_PRINTF(m_printf(&tab));

    printf("Pomnozenie 2 macierzy\n ");

    //displaying matrices
    printf("\nMATRIX\n");
    ERROR_M_PRINTF(m_printf(&tab));

    MATRIX tabB;
    tabB.y = (rand() % 10) + 1;
    // tabB.y = 3;
    tabB.x = tab.y;
    tabB = m_create(tabB.x, tabB.y);

    //matrix notation
    printf("Uzupelnianie macierzy liczbami\n");
    m_scanf_test(&tabB);

    printf("\ntabB\n");
    ERROR_M_PRINTF(m_printf(&tabB));

    
    MATRIX result_mulitiplications;
    result_mulitiplications.x = tab.x;
    result_mulitiplications.y = tabB.y;
    result_mulitiplications = m_create(result_mulitiplications.x, result_mulitiplications.y);

    m_multiplication_mxm(&tab,&tabB, &result_mulitiplications);

    printf("\nresult_mulitiplications\n");
    ERROR_M_PRINTF(m_printf(&result_mulitiplications));

    if ((tab.x == tab.y) && tab.x >= 2) //there is no matrix determinant
        printf("Wyznacznik macierzy %d x %d = %d\n\n", tab.x, tab.y, m_determinant(&tab));
    else
        printf("Macierz %d x %d nie jest macierza kwadratowa, jej wyznacznik nie jest zdefiniowany \n\n", tab.x, tab.y);

    //creating the result of multiplication of a matrix by a scalar
    printf("Pomnoz macierz przez skalar >> ");
    num = (rand() % 10) + 1;
    printf("%d\n",num);
    result_mulitiplications.x = tab.x;
    result_mulitiplications.y = tab.y;
    result_mulitiplications = m_create(result_mulitiplications.x, result_mulitiplications.y);
    m_multiplication(&tab, num, &result_mulitiplications);

    printf("\nWYNIK MNOZENIA MACIERZY PRZEZ SKALAR\n");
    ERROR_M_PRINTF(m_printf(&result_mulitiplications));

    // introducing variables to the matrix
    printf("Zmien wartosc dla 3 pojedynczych komorek, podaj wiersz, kolumne i wartosc do wprowadzenia << x y wartosc>> \n");
    for (int i = 0; i < 3; i++)
    {
        int value = 0;
        printf("%d: ", i + 1);
        x = (rand() % tab.x) + 1;
        y = (rand() % tab.y) + 1;
        value = (rand() % 201);
        ERROR_CHECK(m_put(&tab, x, y, value));
    }

    //displaying matrices
    printf("\nMATRIX\n");
    ERROR_M_PRINTF(m_printf(&tab));

    // displaying any points in the matrix
    printf("Sprawdza 3 dowolne miejsca w macierzy\n");
    for (int i = 0; i < 3; i++)
    {
        int a;
        printf("%d: ", i + 1);
        x = (rand() % tab.x)+1;
        y = (rand() % tab.y)+1;
        printf("x = %d , y = %d", x, y);
        printf(">>> %d\n", m_get(&tab, x, y));
    }

    //displaying matrices
    printf("\nMATRIX\n");
    ERROR_M_PRINTF(m_printf(&tab));

    // removing the MATRIX structure
    printf("usuwanie struktur MATRIX\n");
    REMOVE_MATRIX_CHECK_ERROR(m_remove(&tab));
    REMOVE_MATRIX_CHECK_ERROR(m_remove(&tabB));
    REMOVE_MATRIX_CHECK_ERROR(m_remove(&result_mulitiplications));

    //displaying matrices
    printf("\nMATRIX tab\n");
    ERROR_M_PRINTF(m_printf(&tab));

    printf("\nMATRIX tabB\n");
    ERROR_M_PRINTF(m_printf(&tabB));

    printf("\nMATRIX result_mulitiplications\n");
    ERROR_M_PRINTF(m_printf(&result_mulitiplications));
    
    return 0;
}