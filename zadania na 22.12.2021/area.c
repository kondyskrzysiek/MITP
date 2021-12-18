#include <stdlib.h>
#include "point.h"

/**
 * calculating the area of ​​a triangle for 3 points in the coordinate system >> struct POINT __ { int x;  int y; };
 * 
 * @param A point A
 * @param B point B
 * @param C point C
 * @return area of ​​a triangle
 */
float area(struct POINT A, struct POINT B, struct POINT C)
{
    float pole;
    pole = abs(((B.x -A.x)*(C.y-A.y))-((B.y-A.y)*(C.x-A.x)))/2;
    return pole;
}