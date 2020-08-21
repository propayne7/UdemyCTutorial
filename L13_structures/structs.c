#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 8;
    datePtr->day = 20;
    datePtr->year = 2020;

    printf("Today's date is %i/%i/%.2i. \n", (*datePtr).month, datePtr->day, datePtr->year);

    return 0;
}