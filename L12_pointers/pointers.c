#include <stdio.h>

int main()
{
    int count = 10, x;
    int * int_pointer = NULL;  // create a pointer to an integer and intialize to NULL
    int_pointer = &count;      // assign the pointer the address of the integer variable
    x = *int_pointer;          // assign the dereferenced pointer value (count) to x

    printf("count = %i, x = %i\n", count, x);
    printf("int_pointer's value: %p\n", int_pointer);
    printf("int_pointer's address: %p\n", (void*)&int_pointer);
    printf("int_pointer's size (in bytes): %d\n", (int) sizeof(int_pointer));

    return 0;
}