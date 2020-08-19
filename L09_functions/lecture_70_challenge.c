/*
 * Write 3 functions:
 * 1. function which finds the greatest common divisor of two non-negative int values
 *    and to return the result (takes two ints as parameters)
 * 2. calculate the absolute value of a number - params float and return float
 *    test with ints and floats
 * 3. compute the square root of a number
 *    if negative arg is passed, display a message and return -1.0
 */

#include <stdio.h>

/* Function Prototypes */
int gcd(int a, int b);
float absVal(float a);
float my_sqrt(float a);

/* Function declarations */
int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

float absVal(float a)
{
    if (a < 0)  a *= - 1;
    return a;
}

float my_sqrt(float a)
{
    const float epsilon = 0.00001;
    float sqrt;
    float guess = 1.0;

    if(a < 0)
    {
        printf("A negative value was passed to the square root function.\n");
        sqrt = -1;

    }

    if(a >= 0)
    {
        while (absVal(guess * guess - a) >= epsilon)
        {
            guess = (a / guess + guess) / 2.0;
            sqrt = guess;
        }

    }
    return sqrt;

}

int main()
{
    printf("Test GCD Function - gcd of 150 and 35 is: %d\n", gcd(10, 5));
    printf("Test GCD Function - gcd of 1026 and 405 is: %d\n", gcd(1026, 405));
    printf("Test GCD Function - gcd of 83 and 240 is: %d\n", gcd(83, 240));


    printf("Absolute Value of 5 is: %.2f\n", absVal(5));
    printf("Absolute Value of -1204.5 is: %.2f\n", absVal(-1204.5));
    printf("Absolute Value of -27 is: %.2f\n", absVal(-27));

    printf("Square root of 4 is: %.2f\n", my_sqrt(4));
    printf("Square root of -9 is: %.2f\n", my_sqrt(-9));
    printf("Square root of 97 is: %.2f\n", my_sqrt(97));
    printf("Square root of -97 is: %.2f\n", my_sqrt(-97));


    return 0;
}

