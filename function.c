/*Write c program to convert following :
kms to miles          --*0.609344
inches to foot        --*0.0833
cms to inches         --*0.3937
pound to kgs          --*0.4536
inches to meters      --*0.0254 */
#include <stdio.h>
float count1(float num1); // declaring function for calculation for our individual sum.
float count2(float num2);
float count3(float num3);
float count4(float num4);
float count5(float num5);
int main()
{
    int a;
    float kms, inches, cms, pound, meters; // using float for decimal values
label1:
    printf("Select the following options for converstion :\n");
    printf("1.kms to miles.\n2.inches to foot.\n3.cms to inches.\n4.pound to kgs.\n5.inches to meters.\n\n"); // printing options for user
    printf("Enter your option :");                                                                            // printing line before input
    scanf("%d", &a);                                                                                          // taking input from user
    if (a == 1)                                                                                               // using if else
    {
        printf("Enter the value you want to covert from kms to miles :\n");
        scanf("%f", &kms);
        printf("The enterd value is %f \n", kms);
        printf("Ans is %f kms = %f miles\n", kms, count1(kms)); // calling our function
    }
    else if (a == 2)
    {
        printf("Enter the value you want to covert from inches to foot :\n");
        scanf("%f", &inches);
        printf("The enterd value is %f \n", inches);
        printf("Ans is %f inches = %f foot\n", inches, count2(inches));
    }
    else if (a == 3)
    {
        printf("Enter the value you want to covert from cms to inches :\n");
        scanf("%f", &cms);
        printf("The enterd value is %f \n", cms);
        printf("Ans is %f cms = %f inches\n", cms, count3(cms));
    }
    else if (a == 4)
    {
        printf("Enter the value you want to covert from pound to kgs :\n");
        scanf("%f", &pound);
        printf("The enterd value is %f \n", pound);
        printf("Ans is %f pound = %f kgs\n", pound, count4(pound));
    }
    else if (a == 5)
    {
        printf("Enter the value you want to covert from inches to meters :\n");
        scanf("%f", &meters);
        printf("The enterd value is %f \n", meters);
        printf("Ans is %f inches = %f meters\n", meters, count5(meters));
    }
    else
    {
        printf(" Error : Please enter valies option.\n"); // printing for invalied option
    }
    // Asking user for continue or exit
    int b;
    printf(" If you want to continue press 1 or for exit enter 0:\n");
    scanf("%d", &b);
    switch (b) // using switch case for continue or exit
    {
    case 1:
        goto label1; // using goto statement for run our code for second time
        break;

    case 0:
        goto label2; // using goto statement for exit from code
        break;

    default:
        break;
    }
label2:
    printf("Thank you visit again .\n");

    return 0;
}
float count1(float num1) // defining function for sum
{
    return num1 * 0.609344;
}
float count2(float num2)
{
    return num2 * 0.0833;
}
float count3(float num3)
{
    return num3 * 0.3937;
}
float count4(float num4)
{
    return num4 * 0.4536;
}
float count5(float num5)
{
    return num5 * 0.0254;
}