/* write a program that allows as user to input a text string. the program will print the text that was input
 * the program will print the text that was inputted. the program will use dynamic memory allocation.
 *
 *
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main()
{
    char str[100];
    printf("Please input a string: ");
    gets(str);

    char * strInHeap = (char *)malloc(sizeof(char) * strlen(str));

    strcpy(strInHeap, str);

    printf("%s\n", strInHeap);

    printf("strlen(str): %d\n", (int) (sizeof(str)/sizeof(char)));
    printf("strlen(strInHeap :%d\n", (int) (sizeof(*strInHeap)/sizeof(char)));

    free(strInHeap);
    strInHeap = NULL;

    return 0;
}