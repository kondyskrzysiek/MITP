#ifndef _MATRIX_H
#define _MATRIX_H
typedef struct MATRIX_S
{
    int x;    /* liczba wierszy */
    int y;    /* liczba kolumn */
    int *wsk; /* adres tablicy x*y elementowej */
}MATRIX;

MATRIX m_create(int x, int y);
int m_put(MATRIX *tab, int x, int y, int value);
int m_get(MATRIX *tab, int x, int y);
int m_remove(MATRIX *tab);
int m_scanf(MATRIX *tab);
int m_scanf_(MATRIX *tab, int x, int y);
int m_printf(MATRIX *tab);
#endif