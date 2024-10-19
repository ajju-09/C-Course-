#include<stdio.h>

int main()
{
    int arr[]={1,4,5,7,8,9};
    int a=arr[6];
    int *ptr=&a;
    printf(" The value of first array is %d",&arr[0]);
    printf("\nThe address of first value is %d",&a);
    printf("\nThe address of second value is %d",&arr[1]);
    printf("\nThe address of second value is %d",ptr);
    return 0;
}

