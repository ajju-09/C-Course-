#include <stdio.h>
void shortarr(char arr[], int size);
void print(char arr[], int size);
/*int main()
{
    int rows,k=1;
    printf("Enter number of rows :");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)//rows
    {
        for (int j = 1; j <= i; j++) //columns
        {
            printf("%d\t",k++);
        }
        printf("\n");
    }

    return 0;
}*/
int main()
{
    //int arr[] = {9, 3, 6, 4, 1, 7, 0};
    char arr[] = {'A', 'C', 'D', 'E' , 'B'};
    int size = sizeof(arr) / sizeof(arr[0]);

    shortarr(arr, size);
    print(arr, size);
}
void shortarr(char arr[], int size)
{
    for (int i = 0; i < size - 1 ; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(char arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        printf("%c\t", arr[i]);
    }
}
