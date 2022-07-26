#include<stdio.h>
int get_power(int pow, int base);

/*scanf("%d",&a);
   scanf("%d",&b);prod= ;int prod;*/
int main(){

   int x= get_power(2,3);
   printf("%d",x);
}
int get_power(int base, int pow)
{
    if(pow==0)
        return 1;
    else
    {
        return base* get_power(base,pow-1) ;
    }
}
