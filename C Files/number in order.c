#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    swap(&n1,&n2);
    swap(&n1,&n3);
    swap(&n2,&n3);
    printf("In ascending order:%d %2d %2d",n1,n2,n3);
}

void swap(int *a,int *b){
    int temp;
     if(*a < *b)
        {temp=*a;
        *a=*b;
        *b=temp;}
}



