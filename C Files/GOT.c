#include<stdio.h>
int main (){

    int b,p,f,w;
    float Burger,pizza,fries,water,sum,VAT,Total_prics;

    printf("\t\t\t\t\tlist of product\t\t\t\n");
    printf("\t\t\t \t\t***************\t\t\t\n\n");


    printf("\t\t\tproduct \t\t\t price\n");

    printf("\t\t\tBurger  \t\t\t  180tk\n");

    printf("\t\t\tPizza  \t\t\t\t  650tk\n");

    printf("\t\t\tFries  \t\t\t\t  60tk\n\n");

    printf("\t\t\twater \t\t\t\t  15tk\n\n\n ");


    printf("\t\t\t\t order \t\t\t\n");

    printf("\t\t\t \t *****\t\t\t\n\n");

    printf("\t\t\ Burger \t\t\t");
    scanf("%d",&b);

    printf("\t\t Pizza  \t\t\t");
    scanf("%d",&p);

    printf("\t\t Fries  \t\t\t");
    scanf("%d",&f);

    printf("\t\t water  \t\t\t");
    scanf("%d",&w);



    Burger=b*180;
    pizza=p*650;
    fries=f*60;
    water=w*15;

    sum=Burger+pizza+fries+water;
    VAT=(sum*0.15);


    Total_prics=sum+VAT;


    printf("\t\t\t\t\t\t\t Recipt \t\t\t\n");

    printf("\t\t\t \t\t\t\t ******\t\t\t\n\n");


    printf("\t\t\tproduct \t\t\t quantity \t\t\t\price\n");

    printf("\t\t\tBurger \t\t\t %d \t\t\t      %.1f\n",b,Burger);

    printf("\t\t\tPizza  \t\t\t\t %d \t\t\t    %.1f\n",pizza);

    printf("\t\t\tFries \t\t\t\t   %d\t\t\t     %.1f\n",f,fries);

    printf("\t\t\twater \t\t\t\t   %d\t\t\t     %.1f\n",w,water);

    printf("\t\t\tVAt(15%) \t\t\t\t \t\t\t%.1f\n",VAT);
    printf("\t\t\tTotal price \t\t\t\t \t\t\t%.1f\n",Total_prics);



return 0;



}
