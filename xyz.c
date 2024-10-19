#include <stdio.h>
struct student
{
    char name[20];
    float cpi;
};

int main()
{
    struct student s1 = {"Bunty", 5.6};
    struct student s2 = {"Jugal", 7.8};
    struct student s3 = {"Kartik", 9.0};
    struct student s4 = {"Harshu", 4.6};

    struct student s[] = {s1, s2, s3, s4};
    for (int i = 0; i < sizeof(s)/sizeof(s[0]); i++)
    {
        printf("%s\t",s[i].name);
        printf("%.2f\n",s[i].cpi);
    }
    
    return 0;
}