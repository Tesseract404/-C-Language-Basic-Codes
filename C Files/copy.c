#include <stdio.h>
#include<math.h>
double payment(double i, double P, double n);
int main(){
double pp,dp,ir,t,p,m,pay;
printf("Enter your purchase price bitch-");
scanf("%lf",&pp);
printf("Enter your down payment shala- ");
scanf("%lf",&dp);
printf("The annual interest rate shudkhor- ");
scanf("%lf",&ir);
printf("Enter the total number of payments bansod 36, 48 or 60- ");
scanf("%lf",&t);
p=pp-dp;
printf("Your principle is-%lf",p);
m=ir/12*100;
printf("\nYour monthly interest rate is- %lf",m);
pay= payment(p,m,t);
printf("\nYour payment is- %lf", pay);
return 0;
}


double payment(double i, double P, double n){
   double paymepls;
   paymepls=i*P/(1-(pow((1+i),-n)));
return paymepls;
}
