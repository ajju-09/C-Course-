#include<stdio.h>
void starpattern(int rows); // declaring function for star pattern
void Reversepattern(int rows); // declaring function for reverse star pattern
int main()
{
 int option,rows;
 enter:
 printf("Select the following option.\n");
 printf("1.Star pattern\n2.Reverse star pattern\n");
 scanf("%d",&option);
 switch (option) 
 {
 case 1:
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    starpattern(rows);// calling our declared function
    break;

 case 2:
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    Reversepattern(rows);// calling our declared function
    break;
 
 default:
    printf("Error : plz select valid option\n");
    break;
 }
 int b;
 printf("Enter 1 for continue\nEnter 0 for exit\n");
 scanf("%d",&b);
 if (b == 1)
 {
   goto enter;// using goto statement we can run program many times 
 }
 else if (b == 0)
 {
   goto exit;
 }
 else{
    printf("Error : plz select valid option\n");
 }
 exit:
 printf("Vist again\n");
 return 0;
}
void starpattern(int rows){ // defining function for star pattern
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void Reversepattern(int rows){ // defining function for reverse star pattern
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= (rows - i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}