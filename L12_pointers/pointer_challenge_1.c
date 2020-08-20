/* Create, initialize, and access a pointer
 * Write a program that creates an integer variable with a hard-coded value. Assign that variable's address to a pointer variable
 * Display as output the address of the pointer, the value of the pointer, and the v alue of what the pointer is pointing to
 */
#include <stdio.h>

 int main()
{
     int * pNumber = NULL;
     int number = 10;

     pNumber = &number;

     printf("Address of pNumber %p\n", &pNumber);
     printf("Value of the pointer %p\n", pNumber);
     printf("Value of what the pointer is pointing to: %d\n", number);

     return 0;
 }