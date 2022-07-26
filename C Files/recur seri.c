#include<stdio.h>
int nth(int n);
int main(){
    int n;
    printf("Enter the n th:");
    scanf("%d",&n);
    int x= nth(n);
    printf("The number %d",x);
}
int nth(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 10;
    else
    {
        return nth(n-1)+nth(n-2);
    }
}
