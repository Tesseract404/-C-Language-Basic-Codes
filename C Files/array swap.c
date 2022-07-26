#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no:");
    scanf("%d",&n);
    int arr[3]={1,3,5},arr2[3]={5,3,1};
    int x= is_reverse(arr[3],arr2[3]);
    printf("%d",x);

    return (0);
}

    is_reverse(int arr[],int arr2[]);//must declare them together
    //must declare them together
    //printf("Enter   array: ");
    /*for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }*/

    int  n,arrt[n];
    for(int i=0; i<n; i++)
    {
        arrt[i]=arr[i];//arr 2 must be at first
    }
    int j=0;
    for(i=n-1; i>=0; i--)
    {
        arr[j]= arrt[i];
        j++;
    }//printf("Swapped array:");
    /*for(i=0;i<n;i++)
    {
        printf("%2d",arr[i]);
    }*/
    if (arrt[n]==arr2[n])
        return 1;
    else
        return 0;
