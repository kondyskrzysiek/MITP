#include <stdio.h>

int numSize(int number);
void printNumber(int number);

int numSize(int number){
    int size = 0;

    while(number>0){
        size++;
        number /= 10;
    }

    return size;
}

void printNumber(int number){
    int size = 5 - numSize(number);
    
    while(size) {
        printf(" ");
        size--;
    }

    printf("%d\n",number);
}

int main(){
    int liczba1,liczba2,liczba3,liczba4,wynik;

    printf("Podaj 4 liczby \n");
    scanf("%d %d %d %d",&liczba1,&liczba2,&liczba3,&liczba4);
    wynik = liczba1 + liczba2 + liczba3 + liczba4;
    printNumber(liczba1);
    printNumber(liczba2);
    printNumber(liczba3);
    printNumber(liczba4);
    printf("-----\n");
    printNumber(wynik);


    return 0;
}