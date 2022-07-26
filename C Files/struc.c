#include<stdio.h>
#include<string.h>

struct student
{

    int id;
    char name[100];
    float cgpa;

};


int main()
{
    FILE *fp;

    fp=fopen("stu.txt",'w');
    if (fp == NULL)
        printf("File not opened!");
    struct student s[100];
    for(int i=0; i<3; i++)
    {
        printf("Enter %d students id,name and cgpa:\n",i+1);
        scanf("%d",&s[i].id);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].cgpa);
    }

    char n[100];
    printf("enter the name:");
    scanf("%s",n);


    for(int i=0; i<3; i++)
    { int flag=0;
        if (strcmp(n,s[i].name==0))
            {
                flag=1;
        printf("name: %s\n",s[i].name);
        printf("ID: %d\n",s[i].id);
        printf("CGPA: %f\n",s[i].cgpa);
        }
        if(flag==0)
            printf("\n\n\n Not found!!!\n\n\n");
    }


}
