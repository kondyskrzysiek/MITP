#include <stdio.h>

int fibbonacci(int n);

int fibbonacci(int n)
{
    int a = 1, wartosc_n = 1, b;

    for (int i = 2; i < n; i++)
    {
        b = wartosc_n;
        wartosc_n += a;
        a = b;
    }

    return wartosc_n;
}

int main()
{
    int n;

    printf("Podaj liczbe n tego elementu ciagu Fibbonacciego ktorego wyliczyc : ");
    scanf("%d", &n);
    printf("Dla %d elementu ciagu fibbonacciego wartosc wynosi %d",n,fibbonacci(n));
    printf("\n");

    return 0;
}