#include <stdio.h>
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
        det += *(tab->wsk + i * tab->y) * *(tab->wsk + ((++i) % 3) * tab->y + 1) * *(tab->wsk + ((i + 2) % 3) * tab->y + 2);
        det -= *(tab->wsk + i * tab->y + 2) * *(tab->wsk + ((++i) % 3) * tab->y + 1) * *(tab->wsk + ((i + 2) % 3) * tab->y);
    }

    return det;
}

int m_determinant(MATRIX *tab)
{
    int det_h, det;

    if ((tab->x != tab->y) && tab->x < 2) //there is no matrix determinant
        return 0;

    if (tab->x == 2)
        det = matrix2by2(tab);
    else if (tab->x == 3)
        det = matrix3by3(tab);
    // else if (tab->x > 3)
    // {
    //     for (int i = 0; i < tab->x; i++)
    //     {
    //         det = *(tab->wsk + i) * pow(-1, 2 + i);
    //     }
    // }

    return det;
}