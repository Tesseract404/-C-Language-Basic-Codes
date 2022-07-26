#include<stdio.h>

int arnob();

int main()
{

int x= arnob();
printf("%d",x);

return 0;

}

int arnob()
{
    int A,B,sum;
    scanf("%d%d",&A,&B);
    sum= A+B;
    return sum;
}
