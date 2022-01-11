#include <stdio.h>
#include "point.h"

int main()
{
    struct POINT pointA;
    struct POINT pointB;
    struct POINT pointC;

    struct POINT testA;
    struct POINT testB;
    struct POINT testC;



    testA.x = 0;
    testA.y = 0;

    testB.x = 3;
    testB.y = 0;

    testC.x = 0;
    testC.y = 3;

    printf("A=(%d  ,  %d)\tB=(%d  ,  %d)\tC=(%d  ,  %d)\n",testA.x,testA.y,testB.x,testB.y,testC.x,testC.y);

    printf("test1 pole trojkata = %.2f \n", area(testA, testB, testC));
    printf("test1 obwod trojkata = %.2f \n\n\n", perimeter(testA, testB, testC));



    testA.x = 0;
    testA.y = 0;

    testB.x = 6;
    testB.y = 0;

    testC.x = 3;
    testC.y = 3;

    printf("A=(%d  ,  %d)\tB=(%d  ,  %d)\tC=(%d  ,  %d)\n",testA.x,testA.y,testB.x,testB.y,testC.x,testC.y);

    printf("test2 pole trojkata = %.2f \n", area(testA, testB, testC));
    printf("test2 obwod trojkata = %.2f \n\n\n", perimeter(testA, testB, testC));



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