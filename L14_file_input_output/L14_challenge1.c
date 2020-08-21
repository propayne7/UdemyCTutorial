/*
 * write a program to find the total number of lines in a text file
 * - create a file that contains some lines of text
 * - displays as output the total number of lines in the file
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main ()
{
    FILE* fp;
    int c;
    int newlineCount = 1;

    fp = fopen(FILENAME,"r");
    if(fp == NULL) return -1;

    while((c = fgetc(fp)) != EOF)
    {
        if(c == '\n') newlineCount++;
    }

    fclose(fp);

    printf("Number of lines in file: %d\n", newlineCount);

    return 0;
}