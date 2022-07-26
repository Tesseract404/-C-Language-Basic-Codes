#include<stdio.h>
int eligiblity(void);
int main()
{
    eligiblity();
    eligiblity();
    eligiblity();
    eligiblity();
    eligiblity();
    eligiblity();
}
int eligiblity(void)
{
    int age;
    printf("Enter the age of the candidate:");
    scanf("%d",&age);
    if(age>25 && age<45)
    {
        printf("You are eligible\n");
    }
    else
    {
        printf("You are too youngass or too oldass now fuck off!\n");
    }
return (0);
}
