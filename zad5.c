#include <stdio.h>

int main()
{
    char operator;
    double a, b, wynik;
    printf("Podaj wyrazenie : ");
    scanf("%lf%c%lf", &a, &operator, & b);

    switch (operator)
    {
    case '+':
        wynik = a + b;
        printf("%.2lf", wynik);
        break;
    case '-':
        wynik = a - b;
        printf("%.2lf", wynik);
        break;

    case '*':
        wynik = a * b;
        printf("%.2lf", wynik);
        break;
    case '/':
        wynik = a / b;
        printf("%.2lf", wynik);
        break;
    default:
        printf("error operator!!!\n");
    }

    printf("\n");

    return 0;
}