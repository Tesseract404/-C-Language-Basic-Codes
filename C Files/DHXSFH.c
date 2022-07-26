#include<stdio.h>
#include<math.h>
void separate(double n, char *sign, int* whole, double* fax);
int main()
{
    double n, fax;
    char sign;
    int whole;
    printf("enter a number:");
    scanf("%lf",&n);
    separate(n, &sign, &whole, &fax);
    printf("%lf \n %c \n %d \n %f",n,sign,whole,fax );

}
void separate(double n, char *sign, int* whole, double* fax)
{
    double mag;
    if (n<0)
        *sign='-';
    else if(n==0)
        *sign=' ';
    else
        *sign='+';

mag= fabs(n);
*whole= floor(mag);
*fax= mag - *whole;

}
