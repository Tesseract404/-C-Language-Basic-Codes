#include<stdio.h>

int main()
{
    FILE *file;
    int num;
    file=fopen("num.txt","w");
    if(file==NULL)
        printf("failed");
    else
        for(int j=0; j<6; j++)
        {
            scanf("%d",&num);
            fprintf(file,"%d\n",num);
        }
    fclose(file);

    file=fopen("num.txt","r");
    int number;
    int stat;
    stat=fscanf(file," %d",&number);
    while(stat!=EOF)
    {
        //prime check
        int flag=0;
        for(int i=2; i<number; i++)
        {
            if(number%i==0)
                flag=1;
        }
        if(flag==1)
            printf("%d is not a prime number.\n",number);
        else
            printf("%d is a prime number.\n",number);

        if(number%2==0)
            printf("%d is even\n",number);
        else
            printf("%d is odd\n",number);
        stat=fscanf(file,"%d",&number);
    }
    fclose(file);

    return 0;
}
