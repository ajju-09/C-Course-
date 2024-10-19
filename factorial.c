#include <stdio.h>
#include <time.h>
int fac(int number) // user defined function
{
    if (number == 0 || number == 1)
    {
        return 1; // factorial of 0 & 1 is 1
    }
    else
    {
        return number * fac(number - 1);
    }
}

    int main() // main function (built in function)
    {
        int i; // variable
        printf(" Enter the value you want factorial of : ");
        scanf("%d", &i);                                            // Taking input from user

        clock_t start, end;
        double cpu_time_taken;

        start = clock();
        printf(" The enterd value is %d and Ans is %d\n", i, fac(i)); // fac it show function
        end = clock();

        cpu_time_taken = ((double)(end-start) / CLOCKS_PER_SEC);

        printf("Time taken by iteraation method : %f\n",cpu_time_taken);

    }

