#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size:");
    scanf("%d",&n);
    int x[n],y[n],z[n];

    printf("First array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Second array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    printf("Sum array:");
    for (i=0;i<n;i++)
    {
        z[i]=x[i]+y[i];
        printf("%d+%d=%d\n",x[i],y[i],z[i]);
    }

}
