/* write a function that calculates the length of a string
 * - function takes as a parameter a const char pointer
 * - can only use pointer arithmetic to determine the length of the string
 * - requried to use a while loop using the value of the pointer to exit
 * - function should subtract two pointers (one point to the end of the string, the other pointing to the beginning)
 * - function should return an int that is the length of the string passed to the function
 */

#include <stdio.h>

int my_strlen_ptr(const char * string)
{
    const char * ending = string; // set the value of ending = string --> this will store the starting address of the string into the ending variable
    // the ending variable will be used to increment during the while loop

    int result;

    while(*ending)
    {
        ending++;
    }

    result = ending - string;

    return result;
}


int main(void)
 {
     char str1[] = "Weezy";

     printf("str1 length: %d\n", my_strlen_ptr(str1));

     printf("%d \n", my_strlen_ptr(""));

     printf("%d \n", my_strlen_ptr("hakunamatata"));

     return 0;
 }