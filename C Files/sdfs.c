#include<stdio.h>

int main()
{
    int a,sum,product,diff,remainder,b;
    float quotient;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    sum=a+b;
    product=a*b;
    diff=a-b;
    quotient=a/b;
    remainder=a%b;
    printf("Sum is : %d",sum);
    printf("\nProduct is : %d",product);
    printf("\nDifference is : %d",diff);
    printf("\nQuotient is : %.2f",quotient);
    printf("\nRemainder is : %d",remainder);
    return 0;
}
