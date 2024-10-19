#include <stdio.h>
/*int main()
{
    int j;
    int stu[2][4] = {{5, 4, 8, 7}, {5, 4, 7, 9}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           // printf("\n The value of %d,%d element of the array is %d ", i, j, stu[i][j]);
           printf(" %d,",stu[i][j]);
        }
    }
    

     stu [0]=24;
     stu [1]=25;
     stu [2]=20;
     stu [3]=27;
     stu [4]=21;
     printf("\n The marks of student 1 is %d",stu[0]);
     printf("\n The marks of student 2 is %d",stu[1]);
     printf("\n The marks of student 3 is %d",stu[2]);
     printf("\n The marks of student 4 is %d",stu[3]);
     printf("\n The marks of student 5 is %d",stu[4]);
    return 0;
}*/
/*int main(){
    float price[4];
    float gst;
    printf("Enter price of Mouse:\n");
    scanf("%f",&price[0]);
    printf("Enter price of Laptop:\n");
    scanf("%f",&price[1]);
    printf("Enter price of Keyboard:\n");
    scanf("%f",&price[2]);
    printf("The price of Mouse with gst is %f\n",price[0]+(0.18*price[0]));
    printf("The price of Laptop with gst is %f\n",price[1]+(0.18*price[1]));
    printf("The price of Keyboard with gst is %f\n",price[2]+(0.18*price[2]));
}*/
// 2D array for storing tables
void storetables(int arr[][10],int n,int m,int number);
int main(){
    int tables[2][10];
    storetables(tables,0,10,2);
    storetables(tables,1,10,3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",tables[1][i]);
    }
    return 0;
}
void storetables(int arr[][10],int n,int m,int number){
    for (int i = 0; i < m; i++)
    {
        arr[n][i]=number*(i+1);
    }

    // char name[][10] = {"Ajinkya","Jugal","Basu","Harshu"};
  // strcpy(name[0], "Bunty");
  // for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
  // {
  //   printf("%s \n ",name[i]);
  // }
    
}