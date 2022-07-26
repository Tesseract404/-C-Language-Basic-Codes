#include<stdio.h>
float prod( int n);
float prod( int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return ((1.0/n)*(prod(n-1)));
}
int main()
{
    int n=5;

    float x=prod( n);
    printf("%f",x);
}
