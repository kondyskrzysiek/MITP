#include <stdio.h>

int main()
{
    int x, n, silnia = 1;
    printf("Licze silnie - podaj liczbe: ");
    scanf("%d", &n);
    for (x = 2; x <= n; x++)
        silnia *= x;
    printf("%d! = %d\n", n, silnia);

    return 0;
}