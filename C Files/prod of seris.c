#include<stdio.h>
int prod(int i,int n);
int prod(int i,int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return ((i/n)*prod(i,n-1));
}
int main()
{
    int n=5;
    int i=1;
    int x=prod(i,n);
    printf("%d",x);
}
