#include <stdio.h>

int main()
{
    int n;

    printf("Podaj dlugosc boku : ");
    scanf("%d", &n);

    printf("\n\t");

    if (n == 1)
    {
        printf("%%\n\n");
        return 0;
    }

    //wysokosc podstawy gornej
    for (int i = 0; i < n; i++)
    {
        printf("%%");
    }

    printf("\n");

    //sciany boczne
    for (int i = 0; i < (n - 2); i++)
    {
        printf("\t%%");
        for (int j = 0; j < (n - 2); j++)
        {
            printf(" ");
        }
        printf("%%\n");
    }

    printf("\t");

    //wysokosc podstawy dolnej
    for (int i = 0; i < n; i++)
    {
        printf("%%");
    }

    printf("\n\t");

    return 0;
}