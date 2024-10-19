// Printing fibonacci series (0 1 1 2 3 5 8..) using iterative method and recursive method.
#include<stdio.h>
#include<time.h>
int fibonacci(int n){ // declaring function
    if (n <= 1)
    {
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}
int main()
{
    int a = 0; // declaring first term in series
    int b = 1; 
    int nextTerm = a+b ;// declaring second term in series
    int n;
    printf("Enter term number for fibonacci series:\n");
    scanf("%d",&n);// taking input from user

    clock_t start, end;
    double cpu_time_taken;

    printf("Iterative method :\n");

    start = clock();
    printf("%d\t%d\t",a,b);
    
    for (int i = 3; i <= n; i++)// starting loop from 2nd term  
    {
        printf("%d\t",nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a+b;
    }

    end = clock();
    cpu_time_taken = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("\n");
    printf("Time taken by iteration method :%f second\n");
    // printf("\n");
    // calling function 
    // printf("Recusive function :\n");
    // for (int  i = 0; i < n; i++)
    // {
    //     printf("%d\t",fibonacci(i));// using for loop for output 
    // }
    
}