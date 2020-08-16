#include <stdio.h>

int main ()
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%d", &number_to_test);

    remainder = number_to_test % 2;

    if(remainder == 0)
    {
        printf("Number %d is even.\n", number_to_test);
    }
    else
    {
        printf("Number %d is odd.\n", number_to_test);
    }



    return 0;
}