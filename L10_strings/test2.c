#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buf[100];          // input buffer
    int nLetters = 0;       // number of letters in input
    int nDigits = 0;        // number of digits in input
    int nPunct = 0;         // number of punctuation characters

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buf);       // read a string into buffer

    int i = 0;              // buffer index
    while(buf[i])
    {
        if(isalpha(buf[i])) ++nLetters;     // increment letter count
        else if(isdigit(buf[i])) ++nDigits; // increment digit count
        else if(ispunct(buf[i])) ++nPunct;  // increment punctuation count

        ++i;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation.\n", nLetters, nDigits, nPunct);


    return 0;
}