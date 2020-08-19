/*
 * Create a tic tac toe game
 * - game played on a 3 by 3 grid and is played by two players who take turns
 * - create an array to represent the baord
 * - can be of type char and consist of 10 elements (do not use zero)
 * - each element represents a coordinate on the board
 * - checkForWin - checks to see if a player has won or the game is a draw
 * - drawBoard - redraws the board for each player turn
 * - markBoard - sets the char array with a selection and check for an invalid section
 */


#include <stdio.h>

int checkForWin(char grid[3][3]);
void drawBoard(char grid[3][3]);
int markBoard(char grid[3][3], int position, char val);

int checkForWin(char grid[3][3]) {
    int win = 0;

    // check rows for win (horizontal)
    if (grid[0][0] == grid[0][1] == grid[0][2]) win = 1;
    if (grid[1][0] == grid[1][1] == grid[1][2]) win = 1;
    if (grid[2][0] == grid[2][1] == grid[2][2]) win = 1;

    // check columns for win (vertical)
    if (grid[0][0] == grid[1][0] == grid[2][0]) win = 1;
    if (grid[0][1] == grid[1][1] == grid[2][1]) win = 1;
    if (grid[0][2] == grid[1][2] == grid[2][2]) win = 1;

    // check diagonal for win
    if (grid[0][0] == grid[1][1] == grid[2][2]) win = 1;
    if (grid[0][2] == grid[1][1] == grid[2][0]) win = 1;

    return win;
}

int markBoard(char grid[3][3], int position, char val)
{
    int count = 0;
    int returnVal = 0;
    int breakOut = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            ++count;
            if(count == position && (grid[i][j] == 'X' || grid[i][j] == 'O'))
            {
                printf("Sorry, position %d has already been taken.\n Please try again.", count);
            } else if (count == position)
            {
                grid[i][j] = val;
                returnVal = 1;
                breakOut = 1;
                break;
            }
        }
        if(breakOut) break;
    }


    return returnVal;
}

void drawBoard(char grid[3][3])
{
    int count = 0;

    printf("\nCURRENT BOARD: \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            ++count;
            if(grid[i][j] == '\0')
            {
                printf(" %d ", count);
            } else
            {
                printf(" %c ", grid[i][j]);
            }

        }
        printf("\n");
    }
}


int main() {
    int cont = 1;
    char grid[3][3] = { '\0' };

    printf("Welcome to tic tac toe!\n\n");
    printf("Player 1 will be X's, Player 2 wil be O's.\n");

    int count = 0;
    int currentPlayer = 1;
    int playerPosition;

    while (cont) {
        int breakThis;

        drawBoard(grid);

        printf("Player %d - enter a position number: ", currentPlayer);

        if(currentPlayer == 1)
        {

            scanf("%d", &playerPosition);

            playerPosition -= 1;

            if(playerPosition < 0 || playerPosition > 8 )
            {
                printf("Sorry - please ener a valid position.\n");
                continue;
            } else
            {

                markBoard(grid, playerPosition, 'X');
                // drawBoard(grid);
                currentPlayer++;
            }
        } else
        {
            scanf("%d", &playerPosition);

            playerPosition -= 1;

            if(playerPosition < 0 || playerPosition > 8 )
            {
                printf("Sorry - please ener a valid position.\n");
                continue;
            } else
            {

                markBoard(grid, playerPosition, 'O');
                currentPlayer--;
            }
        }

        breakThis = checkForWin(grid);

        if(breakThis) cont = 0;
    }

    return 0;
}