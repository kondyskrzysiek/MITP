#include <stdio.h>

unsigned long long fibbonacci(int n);

unsigned long long fibbonacci(int n)
{
    unsigned long long wartosc_n, a = 1, b;
    if (n == 0)
    {
        wartosc_n = 0;
    }
    else
    {
        wartosc_n = 1;

        for (int i = 2; i < n; i++)
        {
            b = wartosc_n;
            wartosc_n += a;
            a = b;
        }
    }
    return wartosc_n;
}

int main()
{
    int n;

    printf("Podaj liczbe n tego elementu ciagu Fibbonacciego ktorego wyliczyc : ");
    scanf("%d", &n);
    printf("Dla %d elementu ciagu fibbonacciego wartosc wynosi %llu", n, fibbonacci(n));
    printf("\n\n");

    return 0;
}