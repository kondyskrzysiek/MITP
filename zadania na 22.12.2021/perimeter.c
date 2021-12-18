#include <math.h>
#include <stdio.h>
#include "point.h"

float sideLength(struct POINT A, struct POINT B)
{
    float lenght;
    lenght = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
    return lenght;
}

float perimeter(struct POINT A, struct POINT B, struct POINT C)
{
    return sideLength(A, B) + sideLength(A, C) + sideLength(B, C);
}