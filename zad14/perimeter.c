#include <math.h>
#include <stdio.h>
#include "point.h"

float sideLength(struct POINT A, struct POINT B)
{
    return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}


/**
 * calculating the perimeter of a triangle for 3 points in the coordinate system >> struct POINT __ { int x;  int y; };
 * 
 * @param A point A
 * @param B point B
 * @param C point C
 * @return perimeter of ​​a triangle
 */
float perimeter(struct POINT A, struct POINT B, struct POINT C)
{
    return sideLength(A, B) + sideLength(A, C) + sideLength(B, C);
}