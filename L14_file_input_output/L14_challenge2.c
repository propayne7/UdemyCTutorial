/* write a program that converts all characters of a file to uppercase and
 * write the results to a temporary file
 * then, rename the temp file to the original filename and remove the temp filename
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file.txt"

int main()
{
    FILE* fp;
    FILE* fp2;
    int c;

    fp = fopen(FILENAME,"r");
    fp2 = fopen("temp.txt", "w");

    if(fp == NULL || fp2 == NULL) return -1;

    while((c = fgetc(fp)) != EOF)
    {
        c = toupper(c);
        fputc(c,fp2);
    }

    fclose(fp);
    fclose(fp2);

    remove(FILENAME);
    rename("temp.txt", FILENAME);

    return 0;
}