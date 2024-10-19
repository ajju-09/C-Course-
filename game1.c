// Number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int number;
    int guess;
    int guesses=0;

    srand(time(0));

    number = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a number between 1 to 100:  ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("It's too high\n");
        }
        else if (guess < number)
        {
            printf("It's too low\n");
        }
        else
        {
            printf("Correct!\n");
        }
        guesses++;
    } while (guess != number);

    printf("The Answer is :%d\n", number);
    printf("Number of Guesses :%d\n", guesses);
    return 0;
}