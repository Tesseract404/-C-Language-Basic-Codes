//ANS NO-9
/*A program to calculate the factorial of any number */

#include<stdio.h>
#include<math.h>
#define PI 3.14159

double n_Fact(int n);/*function declaration*/

int main(void){
    int x;
    double b;
    printf("Please enter a value of n:");
    scanf("%d",&x);
    b=n_Fact(x);/*Function calling*/
 printf("%d!equals approximately %lf",x,b);
return (0);
}
double n_Fact(int n){          /*definition of the function that returns the result of n!*/

    double Fact;
    Fact=pow(n,n)*exp(-n)*sqrt((2*n+1/3)*PI);
   return Fact;
}
