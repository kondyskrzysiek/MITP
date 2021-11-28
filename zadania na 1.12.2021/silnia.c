#include <stdio.h>

int silnia(int liczba);

// def silnia1(N: int):
//     if N == 0:
//         return 1
//     else:
//         return N * silnia1(N - 1)

int silnia(int liczba)
{
    if (liczba == 0)
    {
        return 1;
    }
    else
    {
        return liczba * silnia(liczba - 1);
    }
}

int main()
{
    int liczba; 
    long long int ss = 0;

    printf("Podaj liczba do silni ");
    scanf("%d", &liczba);
    ss = silnia(liczba);
    printf("silnia %d = %lld", liczba, ss);

    return 0;
}