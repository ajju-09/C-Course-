/* travel agency collection of driver details
1) Name 2) Driving licence no. 3) Route 4) Kms */
#include <stdio.h>
#include <string.h>
struct details
{
    char Name[30];
    char number[50];
    char route[30];
    int kms;
};
int main()
{
    struct details s1, s2, s3;
    printf("Enter the details for travel agency :\n\n");
    
    printf("Enter the details for first driver :\n");
    printf("Enter your name :\n");
    scanf("%s", &s1.Name);
    printf("Enter your DL no :\n");
    scanf("%s", &s1.number);
    printf("Enter your Route :\n");
    scanf("%s", &s1.route);
    printf("Enter your kms :\n");
    scanf("%d", &s1.kms);

    printf("Enter the details for second driver :\n");
    printf("Enter your name :\n");
    scanf("%s", &s2.Name);
    printf("Enter your DL no :\n");
    scanf("%s", &s2.number);
    printf("Enter your Route :\n");
    scanf("%s", &s2.route);
    printf("Enter your kms :\n");
    scanf("%d", &s2.kms);

    printf("Enter the details for third driver :\n");
    printf("Enter your name :\n");
    scanf("%s", &s3.Name);
    printf("Enter your DL no :\n");
    scanf("%s", &s3.number);
    printf("Enter your Route :\n");
    scanf("%s", &s3.route);
    printf("Enter your kms :\n");
    scanf("%d", &s3.kms);

    printf("Dispalying Drivers details.........\n");
    printf("The deatis of first driver is :\n");
    printf("Name : %s\n", s1.Name);
    printf("DL no : %s\n", s1.number);
    printf("Route : %s\n", s1.route);
    printf("kms : %d\n", s1.kms);

    printf("The deatis of second driver is :\n");
    printf("Name : %s\n", s2.Name);
    printf("DL no : %s\n", s2.number);
    printf("Route : %s\n", s2.route);
    printf("kms : %d\n", s2.kms);

    printf("The deatis of third driver is :\n");
    printf("Name : %s\n", s3.Name);
    printf("DL no : %s\n", s3.number);
    printf("Route : %s\n", s3.route);
    printf("kms : %d\n", s3.kms);
    return 0;
}