#include<stdio.h>

float divide_v(int,int);

int main(){
float x,y;
scanf("%f %f",&x,&y);
float d=divide_v(x,y);

printf("The division is:%f",d);
}
float divide_v(int a,int b){
float divide=a/b;
return divide;
}
