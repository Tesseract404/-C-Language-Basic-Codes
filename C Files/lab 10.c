#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum=0;
    int term=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            term=term+i;
            sum=sum+(1.0/term);
        }

        else
        {
            term=term-i;
            sum=sum-(1.0/term);
        }


    }

    printf("Sum is: %lf", sum);



    return 0;
}
