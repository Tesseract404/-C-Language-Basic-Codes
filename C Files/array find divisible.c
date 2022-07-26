#include<stdio.h>
int main()
{
    int arr[200];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0; i<5; i++)
    {
        int count=0;
        for(int j=0; j<5; j++)
        {
            if(arr[i]%arr[j]!=0)
                count=1;

            if(count=0)
            {
                printf("The Number is:%d",arr[i]);
                flag=1;
            }
        }
    }
    if(flag=0)
        printf("No such number found.");

}
