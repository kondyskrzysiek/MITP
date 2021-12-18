#include <stdlib.h>
#include "point.h"

float area(struct POINT A, struct POINT B, struct POINT C)
{
    float pole;
    pole = abs(((B.x -A.x)*(C.y-A.y))-((B.y-A.y)*(C.x-A.x)))/2;
    return pole;
}