#include<stdio.h>
void nat(int );
void cat(int );
void nat(int n)
{
    if(n%2==0)
    {
        if(n==0)
            return;
        else
        {
            printf("\n%d",n);
            nat(n-2);
        }
    }
}
void cat(int n)
{
     if(n%2!=0)
    {
        if(n==-1)
            return;
        else
        {
            printf("\n%d",n);
            cat(n-2);
        }
    }
    else
    {
        n=n-1;
        cat(n);
        }
    }



int main()
{
    nat(10);
    printf("\n\n\n");
    cat(10);
}
