#include<stdio.h>

struct student
{
    int id;
    char name[100];
};
void showinfo();
void main()
{



    printf("\n\n\t\t__________Welcome to student management system____________");
    printf("\n\t\t Press 1 to show all the student info\n");
    printf("\t\t Press 2 to exit\n");
    int input;
    printf("Enter your choice- ");
    scanf("%d",&input);
    switch(input){
    case 1:
    printf("\n\nShowing all the student info \n\n");
    showinfo();
    break;
    case 2: printf("\n\t\t Thank you\n");
    break;
    default: printf("\n\t\t Wrong input\n");
    }

}
void showinfo(){
  struct student s[100];
    int n;

    FILE *fptr;
    fptr=fopen("cse115omg.txt","r");
    fscanf(fptr,"%d",&n);
        for (int i=0; i<n; i++)
    {
        fscanf(fptr,"%d %s",&s[i].id,&s[i].name);
    }
    fclose(fptr);

    for (int i=0; i<n; i++)
    {
        printf("%d Id: %d Name: %s\n",i+1,s[i].id,s[i].name);

    }

}
