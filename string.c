#include <stdio.h>
#include <string.h>
//int main()
/*{
    char a[20];
    char b[20];
    char c[]=" is a friend of ";
    printf("Enter your name :\n");
    fgets(a,100,stdin);
    printf("Enter your friends name :\n");
    fgets(b,100,stdin);
    puts(strcat(a,strcat(c,b)));
}*/
/*int main()
{
    char s1[] = "Ajinkya";
    char s2[] = "Awachar";
    char s3[23];
    puts(strcat(s1, s2));
    printf(" The length of the string 1 %d\n", strlen(s1));
    printf(" The length of the string 2 is %d\n", strlen(s2));
    printf(" The revrse of string 1 is :");
    puts(strrev(s1));
    printf(" The revrse of string 2 is :");
    puts(strrev(s2));
    strcpy(s3, strcat(s1, s2));
    puts(s3);

    return 0;
}*/
/*int countname(char arr[]);
int main(){
    char name[100];
    printf("Enter your name :\n");
    gets(name);
    printf("Length of your name is: %d",countname(name));
}
int countname(char arr[]){
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}*/
int main()
{
    char name[10] = "Ajinkya";
    char lname[10] = "jugal";
    char temp[10];
    strcpy(temp, name);
    strcpy(name, lname);
    strcpy(lname, temp);


    printf("%s\n",name);
    printf("%s\n",lname);

    return 0;
}