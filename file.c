#include <stdio.h>
int main()
{

    FILE *pF = fopen("C:\\Users\\Ajju\\OneDrive\\Desktop\\My.txt", "r");

    char bufferr[500];
    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(bufferr, 500, pF) != NULL)
        {
            printf("%s", bufferr);
        }
    }

    fclose(pF);

    return 0;
}