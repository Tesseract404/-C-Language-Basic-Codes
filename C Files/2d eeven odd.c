#include<stdio.h>
int main(){
    int n,even,odd;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    int arr[n],i;
    for( i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d",arr[i]);
            even++;
        }
    }
    printf("Number of even numbers:%d",even);

    printf("\n");
    for (i=0;i<n;i++)
    {
         if (arr[i]%2!=0)
        {
            printf("%d",arr[i]);
            odd++;
        }
    }
    printf("Number of odd numbers:%d",odd);
return(0);
}#include<stdio.h>
int main(){
    int n,even,odd;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    int arr[n],i;
    for( i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d",arr[i]);
            even++;
        }
    }
    printf("Number of even numbers:%d",even);

    printf("\n");
    for (i=0;i<n;i++)
    {
         if (arr[i]%2!=0)
        {
            printf("%d",arr[i]);
            odd++;
        }
    }
    printf("Number of odd numbers:%d",odd);
return(0);
}
