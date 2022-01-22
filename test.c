#include <stdio.h>

int main()
{
    printf("int %d\n", sizeof(int));
    printf("int* %d\n", sizeof(int *));
    printf("char* %d\n", sizeof(char *));
    printf("char** %d\n", sizeof(char **));
    int tab[] = {1,2,3,4,5,6};
    int size = sizeof(tab) / sizeof(int);
    printf("%d %d %d",size,sizeof(tab),sizeof(int));

    return 0;
}