#include<stdio.h>

int main(void){
    FILE *ag;
    int sum=0,scr,status,count=0;
    double avg;
    ag=fopen(" balchal.txt","r");
    status=fscanf(ag," %d",&scr);
    while (status!=EOF)
        {printf("%d",scr);
        sum+=scr;
        count++;
        status=fscanf(ag,"%d",&scr);
        }
    avg=sum/count;
    printf("The average of the numbers is:%lf",avg);
    fclose(ag);
return (0);
}
