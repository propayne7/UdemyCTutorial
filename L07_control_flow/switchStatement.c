#include <stdio.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Tuesday;

    switch(today)
    {
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        case Wednesday:
            printf("Today is Wednesday.\n");
            break;
        case Thursday:
            printf("Today is Thursday.\n");
            break;
        case Friday:
            printf("Today is Friday.\n");
            break;
        case Saturday:
            printf("Today is Saturday.\n");
            break;
        default:
            printf("Today is Sunday.\n");

    }

    return 0;
}