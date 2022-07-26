#include<stdio.h>
void seconds();
int main(void)
{
    int a,vol,rem;

    printf("Please input the length of the cube:");
    scanf("%d",&a);
    vol=a*a*a;
    printf("The Volume is:%d",vol);

    rem=vol%2;
    printf("\nThe remainder is:%d\n",rem);

    seconds();

return (0);
}
void seconds()
{   /*1 year=365 days
      1 day=24 hours
      1 hours=3600 seconds
    */
    int n=1,sec;
    sec=3600*24*365*n;
    printf("Seconds:%d",sec);

return(0);
}
