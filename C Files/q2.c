#include<stdio.h>
int get_average(int a,int b,int c);
int main()
{
    float x,y,z,avg;
    avg=get_average(x,y,z);
   printf("the average:%f",avg);
   return 0;
}
int get_average(int a,int b,int c)
{
    scanf("%d%d%d",&a,&b,&c);
return ((a+b+c)/3);
}
