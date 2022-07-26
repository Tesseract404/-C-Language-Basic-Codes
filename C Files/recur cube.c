#include<stdio.h>
int cube(int );
int cube(int n){
 int c=3;
 if (c==0)
    return 1;
 else
    return n*cube(c-1);

}


int main(void){
int n,x;

printf("Enter a number :");
scanf("%d",&n);
x=cube(n);
printf("cube of the number :%d",x);

}
