#include <stdio.h>

int main()
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if(number < 0)
    {
        sign = - 1;
    } else if (number == 0)
    {
        sign = 0;
    } else
    {
        sign = 1;
    }

    // practicing ternary operators
    int x, y;
    y = 6;

    x = y > 7 ? 25 : 50;

    printf("x is: %d\n", x);

    printf("Sign = %i\n", sign);
}