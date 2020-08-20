#include <stdio.h>
#include <string.h>

void copyString(char * to, char * from)
{
    while(*from)
    {
        *to++ = *from++;
    }

    *to = '\0';
}

int main(void)
{
    char multiple[] = "a string";
    char *p = multiple;

    for(int i = 0; i < strlen(multiple); ++i)
        printf("multiple[%d] = %c *(p + %d) = %c &multiple[%d] = %p P + %d = %p\n",
                i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);


    char str1[] = "This is a test";
    char str2[sizeof(str1)];

    copyString(str2, str1);

    printf("str2: %s\n", str2);

    return 0;
}