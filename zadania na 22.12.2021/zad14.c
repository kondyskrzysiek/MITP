#include <stdio.h>
#include <math.h>
// #include "point.h"
struct POINT
{
    int x;
    int y;
};

float sideLength(struct POINT A, struct POINT B)
{
    float lenght;
    lenght = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
    return lenght;
}

// float area(struct POINT pointA, struct POINT pointB, struct POINT pointC)
// {
//     float pole,p,a,b,c;
//     a = sideLength(pointA,pointB);
//     b = sideLength(pointA,pointC);
//     c = sideLength(pointB,pointC);

//     p = (a + b + c)/2;
//     pole = sqrt(p*(p-a)*(p-b)*(p-c));

//     return pole;
// }

float area(struct POINT A, struct POINT B, struct POINT C)
{
    float ABa, ABb, OCa, OCb, xO, yO;
    // x0=( (A.y-((B.y-A.y)/(B.x-A.x))) - (C.y - (-(B.x-A.x)/(B.y-A.y))*C.x ))/( (-(B.x-A.x)/(B.y-A.y)) - ((B.y-A.y)/(B.x-A.x)) );
    ABa = (B.y - A.y) / (B.x - A.x);
    ABb = A.y - (ABa * A.x);
    OCa = -(1 / ABa);
    OCb = C.y - (OCa * C.x);

    xO = (ABb - OCb) / (OCa - ABa);
    yO = (ABa * xO) + ABb;
    printf("x = %f, y = %f\n", xO, yO);
    return xO;
}

float perimeter(struct POINT pointA, struct POINT pointB, struct POINT pointC)
{
    return sideLength(pointA, pointB) + sideLength(pointA, pointC) + sideLength(pointB, pointC);
}

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

    // printf("x = %f, y = %f",)
    printf("wartosc pola to %.2f\n", area(pointA, pointB, pointC));
    printf("wartosc obwodu to %.2f\n", perimeter(pointA, pointB, pointC));

    return 0;
}