#include <stdio.h>

int main(){
    char temperatura_znak;
    float temperatura,wynik;

    printf("Podaj temperature i na koncu dopisz 'C' jeżeli temperatura jest w Celcjuszach albo 'F' jezeli jest w Fahrenheita\n");
    scanf("%f%c",&temperatura,&temperatura_znak);

    if(temperatura_znak == 'c' || temperatura_znak == 'C'){
        wynik = (temperatura * 1.8) + 32;
        printf("%.2lf F",wynik);

    }else if(temperatura_znak == 'f' || temperatura_znak == 'F'){
        wynik = (temperatura - 32)/1.8;
        printf("%.2lf C",wynik);

    }
    printf("\n");

    return 0;
}