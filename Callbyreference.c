#include <stdio.h>
int num(int *Number1, int *Number2);
int main()
{
   int a = 4;
   int b = 3;
   printf("The value of A is %d and Value of B is %d\n", a, b);
   num(&a, &b);
   printf("Now the value of A is %d and value of B is %d", a, b);
   return 0;
}
int num(int *Number1, int *Number2)
{
   int temp;
   temp = *Number1;
   *Number1 = *Number1 + *Number2;
   *Number2 = temp - *Number2;
}