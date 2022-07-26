#include<stdio.h>

int main(){
int i=1,n,pro=1;
printf("Enter a number:");
scanf("%d",&n);
while(i<=n)
{
    pro*=i;
    i+=1;
}
printf("factorial will be:%d",pro);
return(0);
}
