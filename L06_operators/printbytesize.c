#include <stdio.h>

/* Create a C program that displays the byte size of basic data types supported in C
 * the output will vary depending on the system you are running the program
 */

int main()
{
    printf("sizeof(int): %zd bits\n", sizeof(int) * 4);
    printf("sizeof(char): %zd bits\n", sizeof(char) * 4);
    printf("sizeof(long): %zd bits\n", sizeof(long) * 4);
    printf("sizeof(long long): %zd bits\n", sizeof(long long) * 4);
    printf("sizeof(double): %zd bits\n", sizeof(double) * 4);
    printf("sizeof(long double): %zd bits\n", sizeof(long double) * 4);

    return 0;
}