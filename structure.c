#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};
struct Student s1, s2, s3;
int main()
{

    s1.roll_no = 1;
    s1.marks = 100;
    strcpy(s1.name, "Ravi Singh");

    s2.roll_no = 2;
    s2.marks = 95;
    strcpy(s2.name, "Rohit Kumar");

    s3.roll_no = 3;
    s3.marks = 90;
    strcpy(s3.name, "Shubham Patel");

    printf("Data Input Successful!\n");
    printf("Roll no. %d %s got %f marks.\n", s1.roll_no, s1.name, s1.marks);
    printf("Roll no. %d %s got %f marks.\n", s2.roll_no, s2.name, s2.marks);
    printf("Roll no. %d %s got %f marks.\n", s3.roll_no, s3.name, s3.marks);
}