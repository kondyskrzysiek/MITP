#include <math.h>
#include "matrix.h"

int matrix2by2(MATRIX *tab)
{
    return (*(tab->wsk) * *(tab->wsk + 3)) - (*(tab->wsk + 1) * *(tab->wsk + 2));
}

int matrix3by3(MATRIX *tab)
{
    int det = 0;
    for (int i = 0; i < 3; i++)
    {
        det += *(tab->wsk + i * tab->y) * *(tab->wsk + ((i + 1) % 3) * tab->y + 1) * *(tab->wsk + ((i + 2) % 3) * tab->y + 2);
        det -= *(tab->wsk + i * tab->y + 2) * *(tab->wsk + ((i + 1) % 3) * tab->y + 1) * *(tab->wsk + ((i + 2) % 3) * tab->y);
    }

    return det;
}

int m_determinant(MATRIX *tab)
{
    int det = 0, j;
    MATRIX tab_h;

    if (tab->x == 2)
        det = matrix2by2(tab);
    else if (tab->x == 3)
        det = matrix3by3(tab);
    else if (tab->x > 3)
    {
        tab_h.x = tab->x - 1;
        tab_h.y = tab->y - 1;
        tab_h = m_create(tab_h.x, tab_h.y);

        for (int i = 0; i < tab->x; i++)
        {
            j = 0;
            for (int x = tab->y; x < (tab->y * tab->x); x++)
            {
                if (i != (x % tab->y))
                {
                    int *adres = tab_h.wsk + j;
                    *adres = *(tab->wsk + x);
                    j += 1;
                }
            }
            det += *(tab->wsk + i) * pow(-1, 2 + i) * m_determinant(&tab_h);
        }

        m_remove(&tab_h);
    }

    return det;
}