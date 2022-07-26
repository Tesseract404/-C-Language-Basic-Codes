#include<stdio.h>

int main(void)
{
    int a,n,sum;
    a=1;

    for (n=1; n<=10; n++)
    {
        sum=a+n;
        printf("%d+%d=%d\n",a,n,sum);
    }
}
