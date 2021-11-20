#include <stdio.h>

int main(){
    char operator;
    double a,b,wynik;
    printf("Podaj wyrazenie : ");
    scanf("%lf%c%lf",&a,&operator,&b);

    if(operator != '+' || operator != '-' || operator != '*' || operator != '/'){
        printf("error operator!!!\n");
        return 0;
    }

    printf("%.2lf  %c   %.2lf  =  ",a,operator,b);

    switch(operator){
        case '+':
            wynik = a+b;
            printf("%.2lf",wynik);
            break;
        case '-':
            wynik = a-b;
            printf("%.2lf",wynik);
            break;
        
        case '*':
            wynik = a*b;
            printf("%.2lf",wynik);
            break;
        case '/':
            wynik = a/b;
            printf("%.2lf",wynik);
            break;
    }

    printf("\n");

    return 0;
}