#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
 

    int terms,sum=0;
    printf("Enter number of terms:\n");
    scanf("%d", &terms);
    if (terms <= 0)
    {
        printf("Plz enter positive number\n");
    }
    for (int i = 1; i <= terms; i++)
    {
        int evenum = 2*i;
        printf("%d ",evenum);
        sum += evenum;
    }
    printf("\n");
    printf("The sum of natural even number is %d",sum);

    return 0;
}
