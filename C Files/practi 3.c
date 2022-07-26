#include<stdio.h>
#define FARE_PER_MILE 1.50
int main(void){

    double ini,fin,dis,fare;

printf("TAXI FARE CALCULATOR\n");


printf("Enter beginning odometer reading=>");
scanf(" %lf",&ini);
printf("Enter ending odometer reading=>");
scanf(" %lf",&fin);

dis = fin-ini;
fare = FARE_PER_MILE * dis;

printf("You traveled a distance of %.1f miles. At $1.50 per mile,\n ",dis);
printf("Your fare is %.2f",fare);

return(0);
}

