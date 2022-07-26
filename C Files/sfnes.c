#include<stdio.h>

int main()
 {

int i,n;

float sum=0;

printf("Enter the  values of n: ");

scanf("%d",&n);


for (i =1;i<=n;i++)
    {
        if(i%2!=0)

  sum=sum+(float)i/(i+1);
    else
    sum=sum-(float)i/(i+1);



}


printf("sum= %.4f ",sum);



return 0;

}

