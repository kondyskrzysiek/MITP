#include <stdio.h>
// zmienne
int b=0;

// deklaracje funkcji
void funkcja();

void funkcja(){
    b += 1;
}

void main(){
    int a;

    printf("Podaj liczbe wywoalan: ");
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        funkcja();
    }
    
    printf("funkcja zostala wywolana %d \n",b);
}