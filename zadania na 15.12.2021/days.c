#include <stdio.h>
#include "days.h"

// days of the month
int dayMonth(int year, int month)
{
    if (year == 1582 && month == 10)
        return 21;
    else if ((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month > 7))
        return 31;
    else if (month == 2)
    {
        if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) || (year % 4 == 0 && year <= 1500))
            return 29;
        else
            return 28;
    }
    else
        return 30;
}

// days of the year
int dayYear(int year)
{
    if (year == 1582)
        return 355;
    else if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) || (year % 4 == 0 && year <= 1500))
        return 366;
    else
        return 365;
}

/**
 * computes the days difference between two dates
 * 
 * @param firstDay date before
 * @param secondDay later date
 * @return (int) days of difference
 */
int days(struct DAY firstDay, struct DAY secondDay)
{
    if (secondDay.year == firstDay.year && firstDay.month == secondDay.month)
    {
        if (firstDay.month == 10 && firstDay.day <= 4)
            firstDay.day += 10;
        if (secondDay.month == 10 && secondDay.day <= 4)
            secondDay.day += 10;

        return secondDay.day - firstDay.day;
    }
    else
    {

        int m = firstDay.month + 1;
        int m2 = 1;
        int y = firstDay.year + 1;
        int sumDay = 0;

        if (y == 1582 && firstDay.month == 10 && firstDay.day <= 4)
            firstDay.day += 10;
        sumDay += (dayMonth(firstDay.year, firstDay.month) - firstDay.day);

        if (firstDay.year == secondDay.year)
        {
            while (m < secondDay.month)
            {
                sumDay += dayMonth(firstDay.year, m);
                m++;
            }
        }
        else
        {
            // months until the end of the year
            while (m <= 12)
            {
                sumDay += dayMonth(firstDay.year, m);
                m++;
            }

            // years to the second date
            while (y < secondDay.year)
            {
                sumDay += dayYear(y);
                y++;
            }

            // months to end date
            while (m2 < secondDay.month)
            {
                sumDay += dayMonth(secondDay.year, m2);
                m2++;
            }
        }

        if (y == 1582 && m == 10 && secondDay.day >= 15)
            secondDay.day -= 10;
        sumDay += secondDay.day;

        return sumDay;
    }
}