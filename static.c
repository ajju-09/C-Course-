#include <stdio.h>
int func1()
{
    static int num = 1;
    printf("The value of a is %d \n",num);
    num++;
}
int main()
{
    int a;
    for (int i = 0; i < 10; i++)
    {
        func1(a);
    }
    return 0;
}