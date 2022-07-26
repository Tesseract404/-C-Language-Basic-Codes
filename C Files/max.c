#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the size:");
    scanf("%d",&n);
    float arr[n],max;
    for (i=0;i<n;++i)
    {
        scanf("%f",&arr[i]);
    }
    max=arr[0];
    for( i=1;i<n;++i)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("So the maximum is:%.2f",max);
}

