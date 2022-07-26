#include<stdio.h>
#include<math.h>
int main(void){

    double hour, min, conv,temp;

    printf("Power is off for\nHour:");

    scanf ("%lf",&hour);
    printf("Minutes:");
    scanf ("%lf",&min);

    conv= hour+ (min/60);
    printf("Time elapsed since time failure %.2lf\n",conv);

    temp= (4*pow(conv,2)/(conv+2))-20;

    printf("The estimated temperature in freezer is = %lf degree Celcius",temp);
    return (0);

}
