#include <stdio.h>
#include <stdlib.h>
// #include "matrix.h"

typedef struct MATRIX_S
{
    int x;    /* liczba wierszy */
    int y;    /* liczba kolumn */
    int *wsk; /* adres tablicy x*y elementowej */
}MATRIX;

MATRIX m_create(int x, int y)
{
    int *tab;
    int size = x*y;
    tab = (int*)malloc(size * sizeof(int));
    
    return tab;
}

int main(){
    MATRIX tab;
    tab.x = 1;
    tab.y = 3;
    tab.wsk = m_create(tab.x,tab.y);
    
    for(int i =0;i<size;i++)
    {
        printf("%d",tab.wsk[i]);
    }

    return 0;
}