#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    MATRIX tab;
    MATRIX result_mulitiplications;
    int num, x = 0, y = 0;

    printf("creating supply matrices x and y: ");
    scanf("%d %d", &tab.x, &tab.y);

    //create matrices
    tab = m_create(tab.x, tab.y);

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    // introducing variables to the matrix
    printf("Write the whole matrix give the rows and columns of the matrix <<x y>>\n");
    scanf("%d %d", &x, &y);

    m_scanf_(&tab, x, y);

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    //creating the result of multiplication of a matrix by a scalar

    printf("Multiply a matrix by a scalar >> ");
    scanf("%d", &num);

    result_mulitiplications.x = tab.x;
    result_mulitiplications.y = tab.y;
    result_mulitiplications = m_create(result_mulitiplications.x, result_mulitiplications.y);

    m_multiplication(&tab, num, &result_mulitiplications);

    printf("\nMACIERZ MULTIPLICATION RESULTS\n");
    if (!m_printf(&result_mulitiplications))
    {
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    if ((tab.x == tab.y) && tab.x > 2)     //there is no matrix determinant
        printf("Determinant of the matrix %d x %d = %d\n\n", tab.x, tab.y, m_determinant(&tab));
    else
        printf("Matrix %d x %d is not a square matrix, its determinant is not defined \n\n",tab.x, tab.y);

    // introducing variables to the matrix
    printf("Change the value for 3 individual cells, give the row, column and the value to enter << x y wartosc>> \n");
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
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    // displaying any points in the matrix
    printf("Check any 3 places in the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        int a;
        printf("%d: ", i + 1);
        scanf("%d %d", &x, &y);
        printf(">>> %d\n",m_get(&tab, x, y));
    }

    //displaying matrices
    printf("\nMATRIX\n");
    if (!m_printf(&tab))
    {
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    // removing the MATRIX structure
    printf("structure deletion MATRIX\n");
    if (!m_remove(&tab))
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
        printf("ERROR : The matrix does not exist\n");
        return 0;
    }

    return 0;
}