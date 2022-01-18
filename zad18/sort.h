#ifndef _SORT_H
#define _SORT_H
typedef struct MATRIX_S
{
    int x;          /* liczba wierszy */
    int y;          /* liczba kolumn */
    int *ptr;    /* adres tablicy x*y elementowej */
}MATRIX;
MATRIX m_create(int x, int y);
int m_printf(MATRIX *ary);
int m_scanf_test(MATRIX *ary);
int m_remove(MATRIX *ary);
int sort_bubble(MATRIX *ary);
int sort_select(MATRIX *ary);
#endif