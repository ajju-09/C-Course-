#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char Board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpace();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

int main()
{
    char winner = ' ';
    char response;

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

        while (winner == ' ' && checkFreeSpace != 0)
        {
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpace() == 0)
            {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpace() == 0)
            {
                break;
            }
        }
        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N):\n");
        scanf("%c", &response);
        scanf("%c");

        response = toupper(response);
    } while (response == 'Y');
    printf("Thanks for playing..");


    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Board[i][j] = ' ';
        }
    }
}
void printBoard()
{
    printf(" %c | %c | %c ", Board[0][0], Board[0][1], Board[0][2]);
    printf("\n---|---|---\n");

    printf(" %c | %c | %c ", Board[1][0], Board[1][1], Board[1][2]);
    printf("\n---|---|---\n");

    printf(" %c | %c | %c ", Board[2][0], Board[2][1], Board[2][2]);

    printf("\n");
}
int checkFreeSpace()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }

    return freeSpaces;
}
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter rows #(1-3)");
        scanf("%d", &x);
        x--;

        printf("Enter column #(1-3)");
        scanf("%d", &y);
        y--;

        if (Board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            Board[x][y] = PLAYER;
            break;
        }
    } while (Board[x][y] != ' ');
}
void computerMove()
{
    srand(time(0));
    int x;
    int y;
    if (checkFreeSpace() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (Board[x][y] != ' ');

        Board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}
char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2])
        {
            return Board[i][0];
        }
    }

    // columns
    for (int i = 0; i < 3; i++)
    {
        if (Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i])
        {
            return Board[0][i];
        }
    }

    if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2])
    {
        return Board[0][0];
    }
    if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0])
    {
        return Board[0][2];
    }
    return ' ';
}
void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("YOU WIN!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("YOU LOSE!\n");
    }
    else
    {
        printf("IT'S A TIE\n");
    }
}
