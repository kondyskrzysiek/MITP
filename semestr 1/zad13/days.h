#ifndef DAYS_H
#define DAYS_H
struct DAY
{
    int day;
    int month;
    int year;
};
int dayYear(int year);
int dayMonth(int year, int month);
int days(struct DAY firstDay, struct DAY secondDay);
#endif