#include <stdio.h>
int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int binary(int arr[], int size, int element)
{
    int mid, low, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
    mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = sizeof(arr) / sizeof(int);
    int element = 22;
    int element2 = 55;
    int index = linear(arr, size, element);
    printf("By linear search......\n");
    printf("The element %d was found at index %d \n", element, index);
    printf("\n");

    int index2 = binary(arr, size, element2);
    printf("By Binary search......\n");
    printf("The element %d was found at index %d \n", element2, index2);
    return 0;
}