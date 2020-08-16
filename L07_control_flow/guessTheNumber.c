/* UDEMY: C Programming for Beginners - Master the C Language
 * Section  7: Control Flow Challenge - Guess the Number
 *  -  program will generate a random number from 0 to 20
 *  -  you will then ask the user to guess it
 *      - user should only be able to enter numbers from 0-20
 *  - the program will indicate to the user if each guess is too high or too low
 *  - the player wins the game if they can guess the number within five tries
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userInput, randomNumber, tries, success;
    time_t t;
    tries = 5;
    success = 0;
    printf("This is a guessing game. ");
    printf("Please guess a number from 0 to 20.\n");
    printf("You have 5 tries to guess the correct number.\n");

    srand((unsigned) time(&t));
    randomNumber = rand() % 21;

    while(userInput != randomNumber)
    {
        if(tries != 0 && userInput == randomNumber)
        {
            break;
        }

        if(tries == 0)
        {
            printf("Sorry, you are out of tries.\n");
            break;
        }
        printf("Tries remaining: %d \n", tries);
        scanf("%d", &userInput);
        while(userInput > 20 || userInput < 0)
        {
            printf("Sorry, the number %d is too high.\n Please enter a number from 0 to 20)\n", userInput);
            scanf("%d", &userInput);
            printf("\n");
        }

        if(userInput > randomNumber)
        {
            printf("Sorry, %d is too high. Please try again.\n", userInput);
            --tries;

        } else if (userInput < randomNumber)
        {
            printf("Sorry, %d is too low. Please try again.\n", userInput);
            --tries;
        } else
        {
            success = 1;
        }
    }
    printf("\n");

    if(success)
    {
        printf("Great job! You correctly guess the number, which is %d.\n", randomNumber);
        return 0;
    }

    printf("Sorry, you did not guess the correct number. The correct number is %d.\n", randomNumber);
    return 0;
}