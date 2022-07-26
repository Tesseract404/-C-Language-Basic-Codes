#include<stdio.h>

int main(void){
    FILE *grp;
    int arr[5];
     int i;
    //for(int i=1;i<=5;i++)
    //{
    //
    //}

    grp=fopen("grp.txt","w");
    if(grp== NULL)
    {
        printf("File khule nai bhai");
    }
    else
    {//scanf("%d",&arr[5]);
        for(int i=1;i<=5;i++)
        fscanf(grp,"%d",&arr[i]);
        fprintf(grp,"%3d",arr[i]);

        printf("successfully opened grp file.");

    }
}
