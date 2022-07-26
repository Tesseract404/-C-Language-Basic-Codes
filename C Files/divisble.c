#include<stdio.h>

int find_divisor(int arr[], int size){

    int c, z=0;

    for(int i=0;i<size;i++){
        c=0;
        for(int j=0;j<size;j++){
            if(arr[i]%arr[j]==0)
                c++;
        }
        if(c==size) printf("%d ", arr[i]);
        else z++;
    }

    if(z==size) printf("No Number Found");


}

int main()
{
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array: ");

    for(int i=0;i<n;i++)
        scanf(" %d", &arr[i]);


    find_divisor(arr, n);



   return 0;
}
