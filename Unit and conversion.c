/*Write program to convert following :
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters */
#include <stdio.h>
float count1(float num1)
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

int main()
{
    int a, x;
    float b, c, d, e, f;
label1:
    printf("Enter the following number for conversion : ");
    printf("\n 1) kms to miles.\n 2) inches to foot.\n 3) cms to inches. \n 4) pounds to kgs.\n 5) inches to meter.\n ");
    printf(" Select number :");
    scanf("%d", &a);
    printf(" \n Selected number is %d", a);
    if (a == 1)
    {
        printf("\nEnter the value you want to convert kms to miles :");
        scanf("%f", &b);
        printf("\n Entered the value is %f ", b);
        printf("\n Answer: %f kms =%f miles", b, count1(b));
    }
    else if (a == 2)
    {
        printf("\nEnter the value you want to convert inches to foot :");
        scanf("%f", &c);
        printf("\n Entered the value is %f ", c);
        printf("\n Answer: %f inches = %f foot", c, count2(c));
    }
    else if (a == 3)
    {
        printf("\nEnter the value you want to convert cms to inches :");
        scanf("%f", &d);
        printf("\n Entered the value is %f ", d);
        printf("\n Answer: %f cms = %f inches", d, count3(d));
    }
    else if (a == 4)
    {
        printf("\nEnter the value you want to convert pound to kgs :");
        scanf("%f", &e);
        printf("\n Entered the value is %f ", e);
        printf("\n Answer:%f pond =  %f kgs", e, count4(e));
    }
    else if (a == 5)
    {
        printf("\nEnter the value you want to convert inches to meters :");
        scanf("%f", &f);
        printf("\n Entered the value is %f ", f);
        printf("\n Answer: %f inches = %f meters", f, count5(f));
    }
    else
    {
        printf("\n ERROR: The enterd value is worng.");
    }
    printf("\n If you want to continue press 1. \n For Quit press 2.\n ");
    scanf("%d", &x);
    if (x == 1)
    {
        goto label1;
    }
    else
    {
        goto lable2;
    }
lable2:
    printf(" Thank you Vist again");
}