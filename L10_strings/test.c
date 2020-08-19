#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Christopher";
    printf("str: %s\n", str);

    int str_len = strlen(str);
    printf("length of str: %d\n", str_len);

    char str2[] = "Amanda";
    char temp[50];

    strncpy(temp, str2, sizeof(temp) - 1);
    printf("temp: %s\n", temp);

    char concat[sizeof(str) + sizeof(str2) + 1];

    printf("%lu\n", sizeof(str) + sizeof(str2) + 1);

    strcat(concat,str);
    strcat(concat,str2);
    printf("concat: %s\n", concat);
    printf("%lu\n", sizeof(concat));
    printf("%d\n", strlen(concat));

    printf("strcmp(\"A\",\"A\") returns a 0 -> %d\n", strcmp("A", "A"));
    printf("strcmp(\"Ant\",\"Booger\") returns a 0 -> %d\n", strcmp("Ant", "Booger"));

    char newstr[80] = "Hellow how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    /* get the first token */
    token = strtok(newstr, s);

    /* walk through other tokens */
    while(token != NULL)
    {
    	printf(" %s\n", token );
    	token = strtok(NULL, s);
    }

    return 0;
}