#include <stdio.h>

int arraySum2(int * array, const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for( ;  array < arrayEnd; ++ptr)
    {
        sum += *array;
    }

    return sum;
}

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }

    return sum;
}

int main()
{
    int count = 10, x;
    int * int_pointer = NULL;  // create a pointer to an integer and intialize to NULL
    int_pointer = &count;      // assign the pointer the address of the integer variable
    x = *int_pointer;          // assign the dereferenced pointer value (count) to x

    printf("count = %i, x = %i\n", count, x);
    printf("sizeof(count) %d\n", (int) sizeof(count));
    printf("int_pointer's value: %p\n", int_pointer);
    printf("int_pointer's address: %p\n", (void*)&int_pointer);
    printf("int_pointer's size (in bytes): %d\n", (int) sizeof(int_pointer));


    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1; // pnum is a pointer to num1
    *pnum = 2L;   // set the value that pnum is pointing to = 2L -> this means num1 now = 2L
    ++num2;       // increment num2 by 1, num2 is now 1L
    num2 += *pnum; // add the value what pnum is pointing to, tror the value of num2 --> 1L + 2L = 3L

    pnum = &num2;  // point pnum to num2
    ++*pnum;       // increment the value pnum is pointing to by 1 --> num2 now = 4L

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    int value = 0;
    int * pvalue = &value;

    printf("Input an integer: ");
    scanf("%d", pvalue);

    printf("You entered: %d\n", value);

    long value2 = 9999L;
    const long * pvalue2 = &value2;
    value2 = 1000L;
    // *pvalue2 = 1001L; // this will throw a compiler error

    long value3 = 1L;
    long * const pvalue3 = &value3;
    value3 = 2L;

    printf("value3: %ld\n", value3);

    *pvalue3 = 3L;

    printf("value3: %ld\n", value3);

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void * vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    // vptr = &f;
    // printf("Value of f = %.2f\n," *(float *)vptr);

    // vptr = &ch;
    // printf("Value of i = %c\n," *(char *)vptr);

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8 , 9};
    printf("The is %d\n", arraySum(array, 9));

    int array2[] = { 3, 2, 31, 4, 5, 6, 7, 8 , 9};
    printf("The is %d\n", arraySum(array2, 9));

    return 0;
}