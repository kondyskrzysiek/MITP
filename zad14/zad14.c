#include <stdio.h>
#include "point.h"

int main()
{
    struct POINT pointA;
    struct POINT pointB;
    struct POINT pointC;

    printf("Prosze podac x i y punktu\n");
    printf("A: ");
    scanf("%d %d", &pointA.x, &pointA.y);
    printf("B: ");
    scanf("%d %d", &pointB.x, &pointB.y);
    printf("C: ");
    scanf("%d %d", &pointC.x, &pointC.y);

    printf("pole trojkata = %.2f\n", area(pointA, pointB, pointC));
    printf("obwod trojkata = %.2f\n", perimeter(pointA, pointB, pointC));

    return 0;
}