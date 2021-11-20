#include <stdio.h>

int main(){
    float liczba;
    printf("Podaj liczbe : ");
    scanf("%f",&liczba);

    if((int)liczba % 2 == 0 && (int)liczba == liczba){
        printf("Liczba %.2f jest liczba parzysta i calkowita",liczba);
    }else if((int)liczba % 2 == 1 && (int)liczba == liczba){
        printf("Liczba %.2f jest liczba nieparzysta i calkowita",liczba);
    }else{
        printf("Liczba %.2f jest liczba nie calkowita",liczba);
    }

    return 0;
}