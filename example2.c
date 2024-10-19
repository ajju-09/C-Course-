#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ptr;
    int i = 0, n;
    while (i < 3)
    {
        printf("Enter no of characters in your employee  id \n");
        scanf("%d", &n);
        ptr = (char *)malloc((n+1) * sizeof(char));
        printf("Enter your employee id\n");
        scanf("%s",ptr);
        printf("Your employee id is %s\n",ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}