#include <stdio.h>

/*
 * program to convert minutes to days and days to years
 * program uses the scanf function for the user to enter the number of minutes
*/

int main()
{
    int minutesInput = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;

    printf("Please enter the number of minutes as a whole number: \n");

    scanf("%d", &minutesInput);

    minutesInYear = (60 * 24 * 365);

    years = (minutesInput / minutesInYear);
    days = (minutesInput / (60.0 * 24));

    printf("Minutes entered by user: %d\n", minutesInput);
    printf(" - Minutes by year: %lf\n", years);
    printf(" - Minutes by day: %lf\n\n", days);



}