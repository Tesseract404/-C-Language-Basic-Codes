#include<stdio.h>
#include<string.h>


int main()
{


    struct criminal
{

    int serial;
    char name[100];
    float dan_rate;

};

    FILE *file;

    struct criminal cr[2];
    file=fopen("stru.txt",'w');
    if (file==NULL)
        printf("Cant open");

    for(int i=0; i <2; i++)
    {
        printf("Enter %d students id,name and cgpa:\n",i+1);
        //fflush(stdin);
        scanf("%s",cr[i].name);
        scanf("%d",&cr[i].serial);
        scanf("%.2f",&cr[i].dan_rate);
    }


}
/*int num;
    printf("Enter the number of cr:");
    scanf("%d",&num);*/
