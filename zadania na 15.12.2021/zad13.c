#include <stdio.h>
#include "days.h"

// segregations dates upper lower
int segregations(int y, int m, int d, int y1, int m1, int d1)
{
    if (y1 < y)
        return 1;
    if (y1 > y)
        return 0;
    if (m1 < m)
        return 1;
    if (m1 > m)
        return 0;
    if (d1 < d)
        return 1;
    return 0;
}

int main()
{
    struct DAY firstDay;
    struct DAY secondDay;

    int dayh, monthh, yearh;
    
    // Communications user
    printf("Podaj date odzielone spacja DD MM YYYY\n");
    printf("Podaj date : ");
    scanf("%d %d %d", &firstDay.day, &firstDay.month, &firstDay.year);
    printf("Podaj date : ");
    scanf("%d %d %d", &secondDay.day, &secondDay.month, &secondDay.year);
    
    if (segregations(firstDay.year, firstDay.month, firstDay.day, secondDay.year, secondDay.month, secondDay.day))
    {
        yearh = firstDay.year;
        firstDay.year = secondDay.year;
        secondDay.year = yearh;

        monthh = firstDay.month;
        firstDay.month = secondDay.month;
        secondDay.month = monthh;

        dayh = firstDay.day;
        firstDay.day = secondDay.day;
        secondDay.day = dayh;
    }

    // printf("%d %d %d %d %d %d",firstDay.day,firstDay.month,firstDay.year,secondDay.day,secondDay.month,secondDay.year);

    printf("Roznica dni to : %d", days(firstDay, secondDay));

    return 0;
}