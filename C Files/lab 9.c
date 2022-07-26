#include<stdio.h>

int main(){

//if else if

int n,m;
printf("Enter the value of n and m:");

scanf("%d %d",&n,&m);

if (n > m){
    printf("n is Bigger or equal");

}
else if (n==m){
    printf("N and M are equal");

}
else{
    printf("m is Bigger");
}

}
