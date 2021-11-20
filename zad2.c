#include <stdio.h>

int main(){
    int a,b;
    
    printf("Podaj dwie cyfry : \n");
    scanf("%d %d",&a,&b);

    if(a > b){
        printf("a = %d jest wieksze od b = %d",a,b);
    }else if(b > a){  
        printf("b = %d jest wieksze od a = %d",b,a);
    }else if(a == b){
        printf("a = %d i b = %d sa sobie rowne ",a,b);
    }
    
    printf("\n");

    return 0;
}