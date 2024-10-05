#include<stdio.h>
int main()
{
    int height,Weight;
    printf(" Enter your height in cm :");
    scanf("%d",&height);
    printf("Enter your weight in kg :");
    scanf("%d",&Weight);
    switch (height)
    {
    case 150:
        printf(" Your height is 150cm ");
        switch (Weight)
        {
        case 48:
            printf("\n According to your height your weight is 48kg");
            break;
        default:
        printf(" \n According to your height your weight is not matched");
            break;
        }
        break; 
     case 152:
        printf(" Your height is 152cm");
        switch (Weight)
        {
        case 50:
            printf("\n According to your height your weight is 50kg");
            break;
        default:
        printf("\n According to your height your weight is not matched");
            break;
        }
        break;
         case 155:
        printf(" Your height is 155cm");
        switch (Weight)
        {
        case 53:
            printf("\n According to your height your weight is 53kg");
            break;
        default:
        printf("\n According to your height your weight is not matched");
            break;
        }
        break;
         case 157:
        printf(" Your height is 157cm");
        switch (Weight)
        {
        case 55:
            printf("\n According to your height your weight is 55kg");
            break;
        default:
        printf("\n According to your height your weight not matched");
            break;
        }
        break;
    default:
        printf(" Error:Your height is not matched");
        break;
    }         

}