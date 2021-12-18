#include <math.h>
#include <stdio.h>
#include "point.h"

float perimeter(struct POINT, struct POINT, struct POINT)
{
    float lenghtAB,lenghtAC,lenghtBC;
    lenghtAB = sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
    // return lenghtAB + lenghtAC + lenghtBC;
    return lenghtAB;
}