/* GOAL - understand pass by refrence using pointers
 * write a function that squares a number by itself
 * - function should define as a sparameter an int pointer
 * - print the value of the variable passed to the function, as well as the squared number
 */

#include <stdio.h>
void squareValue (int * const ptr)
{

    printf("ptr: %d\n", *ptr);

    *ptr = (*ptr) * (*ptr);
}


int main()
{
    int i = 2;
    squareValue(&i);

    printf("the square of the given value is: %d\n", i);

    return 0;
}