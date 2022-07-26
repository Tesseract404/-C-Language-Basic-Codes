#include<stdio.h>

void array(int arr[],int i,int f)
{
    if(i>=f)
        return;
    printf("%d",arr[i]);
    array(arr,i+1,f);
}
int main(){
    int ar[100];
    for (int i=0;i<4;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("The elements are:");
    array(ar,0,4);

}
