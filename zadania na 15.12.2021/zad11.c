#include <stdio.h>
// deklaracje funkcji
void funkcja();

void funkcja(){
    static int b = 0;
    b++;
    printf("funkcja zostala wywolana %d raz\n",b);
}

int main(){
    int a;

    printf("Podaj liczbe wywoalan: ");
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        funkcja();
    }
    return 0;
}