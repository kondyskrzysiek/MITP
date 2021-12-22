#include <stdio.h>

int main()
{
    int h, a;
    int ilsoc = 1;

    printf("Podaj wysokosc : ");
    scanf("%d", &h);

    a = h;
    printf("\n\t");

    for (int i = 0; i < h; i++)
    {
        a = a - 1;
        for (int j = 0; j < a; j++)
        {
            printf(" ");
        }
        for (int x = 0; x < ilsoc; x++)
        {
            printf("%%");
        }
        ilsoc = ilsoc + 2;
        printf("\n\t");
    }
    printf("\n");

    return 0;
}