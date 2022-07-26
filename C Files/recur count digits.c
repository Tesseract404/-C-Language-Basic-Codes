#include<stdio.h>

int count_digit(int,int);

int main(){

int n;
scanf("%d",&n);
int count= count_digit(n,0);

printf("Count is: %d",count);
}

int count_digit(int n,int count){

if(n==0)
    return count;
else
    return count_digit(n/10,count+1);

}
