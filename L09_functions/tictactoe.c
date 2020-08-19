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
int markBoard(char grid[3][3], int position, int player);

int checkForWin(char grid[3][3]) {
    int win = 0;

    // check rows for win (horizontal)
    if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]) win = 1;
    if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]) win = 1;
    if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]) win = 1;

    // check columns for win (vertical)
    if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]) win = 1;
    if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]) win = 1;
    if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]) win = 1;

    // check diagonal for win
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) win = 1;
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) win = 1;

    return win;
}

int markBoard(char grid[3][3], int position, int player)
{
    int count = 0;
    int returnVal;
    int breakOut = 0;

    int row;
    int col;

    if(position < 1 || position > 9)
    {
        printf("Please enter a number between 1 and 9.\n");
        return 0;
    }

    if(position <= 3) row = 0;
    if(position <= 6 && position > 3) row = 1;
    if(position <= 9 && position > 6) row = 2;

    if(position == 1 || position == 4 || position == 7) col = 0;
    if(position == 2 || position == 5 || position == 8) col = 1;
    if(position % 3 == 0) col = 2;

    char checkGrid = grid[row][col];

    char val = player == 1 ? 'X' : 'O';

    if(checkGrid == 'X' || checkGrid == 'O')
    {
        printf("Sorry this position has already been selected.\n");
        returnVal = 0;
    } else
    {
        grid[row][col] = val;
        returnVal = 1;
    }

    return returnVal;
}

void drawBoard(char grid[3][3])
{
    printf("\n  CURRENT BOARD: \n");

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("  %c  ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main() {
    char grid[3][3] = { {'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'} };

    printf("grid[0][0]: %c\n", grid[0][0]);
    printf("grid[0][1]: %c\n", grid[0][1]);
    printf("grid[2][1]: %c\n", grid[2][1]);

    printf("Welcome to tic tac toe!\n\n");
    printf("Player 1 will be X's, Player 2 wil be O's.\n");

    int currentPlayer = 1;
    int playerPosition;

    while (1) {
        int markResult;

        drawBoard(grid);

        printf("Player %d - enter a position number: ", currentPlayer);
        scanf("%d", &playerPosition);

        markResult = markBoard(grid, playerPosition, currentPlayer);

        if(markResult == 1)
        {
            if(checkForWin(grid))
            {
                drawBoard(grid);
                printf("Congrats! Player % d wins!\n", currentPlayer);
            break;
            }

            if(currentPlayer == 1)
            {
                currentPlayer = 2;
            } else
            {
                currentPlayer = 1;
            }
        } else
        {
            continue;
        }

    }

    return 0;
}