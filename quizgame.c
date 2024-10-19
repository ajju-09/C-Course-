#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[][100] = {"1.National bird of india.", "2.Prime minister of india.", "3.National sport of india."};

    char options[][100] = {"A.Tiger", "B.Lion", "C.Peacock", "D.Elephant",
                           "A.Rahul gandhi", "B.Narendra modi", "C.Amit shah", "D.Arun jateli",
                           "A.Volly ball", "B.Cricket", "C.Baseball", "D.Hockey"};

    char answer[3] = {'C', 'B', 'D'};

    int numberofque = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score=0;
    printf("QUIZ GAME\n");

    for (int i = 0; i < numberofque; i++)
    {
        printf("*********************\n");
        printf("%s\n", questions[i]);
        printf("*********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess : ");
        scanf("%c", &guess);
        scanf("%c"); //    clear \n from input buffer

         guess = toupper(guess);

        if (guess == answer[i])
        {
            printf("CORRECT!\n");
            score++;
        }

        else
        {
            printf("WRONG!\n");
        }
    }
    printf("*********************\n");
    printf("FINAL SCORE : %d/%d\n", score, numberofque);
    printf("*********************\n");

    return 0;
}