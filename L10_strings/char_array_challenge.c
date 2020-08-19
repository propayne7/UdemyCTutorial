/* 1. Write a function to count the number of characters in a string (length) - implement your own strlen() function
 *  - should take a char array as a parameter and return an int as the length
 *
 * 2. Write a function to concatenate two character strings - implement your own strcat() function
 *  - function should take 3 parameters: char result[], const char str1[], const char str2[]
 *  - can return void
 *
 * 3. Write a function that determines if two strings are equal - implement your own strcmp
 *  - function should take two const char arrays as parameters and return a Boolean of true if they are equal or false if otherwise
 */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(const char str[]);
void my_strcat(char result[], const char str1[], const char str2[]);
int my_strcmp(const char s1[], const char s2[]);

int my_strlen(const char str[])
{
    int count = 0;
    while(str[count] != '\0')
    {
        ++count;
    }
    return count;
}

void my_strcat(char result[], const char str1[], const char str2[])
{
    int i;
    for(i = 0; (str1[i] != '\0'); ++i)
    {
        printf("%c\n", str1[i] );
        result[i] = str1[i];
    }
    int j;
    for(j = 0; (str2[j] != '\0'); ++j)
    {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
    printf("result: %s\n", result);
}

int my_strcmp(const char s1[], const char s2[])
{
    int i = 0;
    int isEqual = 0;

    if (my_strlen(s1) != my_strlen(s2)) return isEqual = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] == s2[i])
        {
            isEqual = 1;
        } else
        {
            isEqual = 0;
        }

        ++i;
    }

    return isEqual;
}

int main()
{
    /* test my_strlen() */
    printf("my_strlen(\"Chris\"): %d\n", my_strlen("Chris"));
    char str1[] = "Jose Cuervo";
    printf("my_strlen(%s): %d\n", str1, my_strlen(str1));

    /* test my_strcat() */
    char result[100];
    char str2[] = "Dwayne";
    char str3[] = "Johnson";
    my_strcat(result, str2, str3);

    /* test my_strcmp() */
    printf("Comparing \"Chris\" and \"Chris\": %d \n", my_strcmp("Chris", "Chris"));
    printf("Comparing \"Chris\" and \"Amanda\": %d \n", my_strcmp("Chris", "Amanda"));
    printf("Comparing \"chris\" and \"Chris\": %d \n", my_strcmp("Chris", "Amanda"));

    return 0;
}