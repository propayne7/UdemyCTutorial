/*
 * File: main.c
 * Author: Chris Payne
 *
 * Created on 07.22.2020 1830
 */

 #include <stdio.h>
 #include <stdlib.h>

 /*
  *
  */

int main() {
    int aVar; // compiler will reserve 4 bytes of space for aVar
    aVar = 5; // compiler will store the value 5 in the aVar memory
    float x;
    x = 3.56; // also 4 bytes
    double d; // 8 byes -> can accommodate more values
    
    // print Hello World
    printf("Hello World\n");

    // prompt the user for input
//    printf("Please input an intger: ");
    // scan for user input of an integer
//    scanf("%d", &aVar);

//    printf("The value is: %d\n", aVar);
    
    printf("The address of aVar is: %u\n", &aVar);

    int a = 10, b = 2;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    
    char ch = 'A';

    printf("Character is %c\n", ch);

    printf("Enter a character: ");
    
    char another;
    scanf("%c", &another);
    
    // print char another as a char
    printf("Character is %c\n", another);
    
    // print char another as an integer (ascii value)
    printf("Character is %d\n", another);
    
    for(int i = 65; i < 91; i++)
        printf("%d - %c\n", i, i);

    return (EXIT_SUCCESS); 
}
