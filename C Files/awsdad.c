#include<stdio.h>
int main(void)
{
    int n,i,pro;
    printf("enter:");
    scanf("%d",n);
    for (i=1; i<=10; i++)
    {
        pro=n*i;
        printf("%d*%d=%d\n",n,i,pro);
    }
    return(0);

 }
