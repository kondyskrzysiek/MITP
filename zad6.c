#include <stdio.h>

int main()
{
    int liczba1, liczba2, liczba3, liczba4, wynik;

    printf("Podaj 4 liczby \n");
    scanf("%d %d %d %d", &liczba1, &liczba2, &liczba3, &liczba4);

    wynik = liczba1 + liczba2 + liczba3 + liczba4;

    printf("%4d", liczba1);
    printf("%4d", liczba2);
    printf("%4d", liczba3);
    printf("%4d", liczba4);
    printf("-----\n");
    printf("%4d", wynik);

    return 0;
}