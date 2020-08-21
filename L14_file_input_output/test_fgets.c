#include <stdio.h>

int main()
{
    FILE *fptr;
    int c;
    char str[60];

    fptr = fopen("file.txt", "r");

    if(fptr == NULL)
    {
        perror("Error in opening file.");
        return (-1);
    }

    if(fgets(str,60,fptr) != NULL)
    {
        printf("%s", str);
    }



}