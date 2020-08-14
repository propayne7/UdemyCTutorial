#include <stdio.h>

int main(int argc, char *argvp[])
{
    int number_of_arguments = argc;
    char *arg1 = argvp[0];
    char *arg2 = argvp[1];

    printf("Number of arguments: %d\n", argc);
    printf("arg1: %s\n", argvp[0]);
    printf("arg2: %s\n", argvp[1]);
    return 0;
}