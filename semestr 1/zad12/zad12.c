#include <stdio.h>

void main()
{
    int price, twenty, fifty, hundreds, p = 0;

    printf("Podaj kwote : ");
    scanf("%d", &price);

    twenty = price / 20;

    for (twenty; twenty >= 0; twenty--)
    {
        fifty = (price - twenty * 20) / 50;
        for (fifty; fifty >= 0; fifty--)
        {
            hundreds = (price - fifty * 50 - twenty * 20) / 100;

            if ((price - hundreds * 100 - fifty * 50 - twenty * 20) == 0)
                printf(" %d PLN = %d*100 + %d*50 + %d*20\n", price, hundreds, fifty, twenty);
            
            p++;
        }
    }

    if (p == 0)
        printf("Dla kwoty %d nie ma rozwiazan", price);
}