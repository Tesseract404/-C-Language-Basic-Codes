#include<stdio.h>

int main(){
 int a ;
 printf("Enter the number:");
 scanf("%d",&a);
 p=reverseNUM(a);
printf("reversed:%d",p);
}

 int reverseNUM(int n)
 { int sum=0;
  while (n=!0)
     {sum=sum*10+n%10;
     n=n/10;
     }
     return sum;
 }
