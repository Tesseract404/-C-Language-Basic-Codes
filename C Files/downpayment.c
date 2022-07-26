#include<stdio.h>
#include<math.h>

double payment (double x,double y,double z);

int main(void){
    double price,dpay,interest,p,i,n,mp;
    printf("Enter car price:");
    scanf("%lf",&price);
    printf("\nEnter down payment:");
    scanf("%lf",&dpay);
    printf("\nEnter annual interest rate:");
    scanf("%lf",&interest);
    printf("\nEnter the total number of payment:");
    scanf("%lf",&n);
    p= price-dpay;
    printf("\n%.2lf",p);
    i=interest/(12*100);
    printf("\n%.2lf",i);
    mp=payment(p,i,n);
    printf("\nBorrowed amount:%lf",price);
    printf("\nMonthly payment will be :$%lf",mp);

return (0);
}
double payment (double x,double y,double z){
    double payment;
    payment=y*x/(1-(pow((1+y),-z)));
return payment;
}




