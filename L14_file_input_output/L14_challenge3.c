/* create a program to print the contents of a file in reverse order
 * - use the fseek function to seek to the end of the file
 * - use the ftell function to get the position of the file pointer
 * - display as output the file in reverse order
 */


#include <stdlib.h>
#include <stdio.h>

#define FILENAME "file.txt"

int main()
{
    FILE* fp;
    int cnt = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if(fp == NULL) return -1;

    int end = fseek(fp, 0, SEEK_END);

    cnt = ftell(fp);

    while(i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");

    fclose(fp);

    return 0;
}