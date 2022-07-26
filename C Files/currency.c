#include<stdio.h>
#define  USD_TO_GBP 0.65

void main(void){

    float dollar,pound;

    printf("Enter the amount of money:");
    scanf("%f",&dollar);
    pound= USD_TO_GBP*dollar;
    printf("Converted currency is:%.2f",pound);

return (0);
}
