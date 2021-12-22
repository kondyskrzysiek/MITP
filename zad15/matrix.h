#ifndef _MATRIX_H
#define _MATRIX_H
typedef struct MATRIX_S
{
    int x;    /* liczba wierszy */
    int y;    /* liczba kolumn */
    int* wsk; /* adres tablicy x*y elementowej */
}MATRIX;

MATRIX m_create(int x, int y);
int m_remove(MATRIX *);
int m_scanf(MATRIX *, int, int);
int m_scanf_(MATRIX *);
int m_printf(MATRIX);
#endif