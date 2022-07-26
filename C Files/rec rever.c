#include<stdio.h>
#include<math.h>
int rev(int n);
int rev(int n)
{
    int d=(int)log10(n);
    if (n==0)
        return 0;
    else
    {
        return((n%10*pow(10,d))+rev(n/10));
    }
}
int main()
{
    int n=rev(345);

    printf("%d",n);

}
