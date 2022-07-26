#include<stdio.h>

int main(void)
{
    int a,n,prod;

    printf("Enter number to print the multiplication:");
    scanf("%d",&a);
    for (n=1;n<=10;n++)
    {
        //prod=;
        printf("%d*%d=%d\n",a,n,a*n);
    }
    return (0);
}
