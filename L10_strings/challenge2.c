/* 1. Write a program that displays a string in reverse order
 *  - should read input from the keyboard
 *  - need to use the strlen() function
 *
 * 2. write a program that sorts the strings of an array using a bubble sort
 *  - need to use the strcmp and strcpy functions
 */

#include <stdio.h>
#include <string.h>

void reverseString(char source[], char target[]);

void reverseString(char source[], char target[])
{
    int len = strlen(source) - 1;
    int i = 0;
    for(len = len; len >= 0; --len)
    {
        target[i] = source[len];
        ++i;
    }

    target[i] = '\0';
}

void sortStrings()
{
    int n;
    printf("input number of strings: ");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for(int i = 0; i > =0)
}

int main()
{

    /* test reverseString() function */
    char string1[] = "chris";
    char target1[100];
    reverseString(string1, target1);
    printf("reversed string1: %s\n", target1);

    /* test bubble sort string */

    return 0;
}