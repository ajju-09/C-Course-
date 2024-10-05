#include<stdio.h>
int func(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf(" The value at %d is %d\n",i,array[i]);
    }
    array[0]=45;
}
int func1(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf(" The value at %d is %d\n",i,*(ptr+i));
        *(ptr+2)=3422;
    }
   // *(ptr+2)=3422;
}
void func3(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        printf(" The value at %d,%d is %d\n",i,j,arr[i][j]);
       }
       
    }
    
}
int main()
{
 int arr[][2]={{12,47},{26,95}};
 //printf("The value at index 0 is %d\n",arr[0]);
 //func(arr);
 //printf("The value at index 0 is %d\n",arr[0]);
//func1(arr);
 //func1(arr);
 func3(arr);
 return 0;
}