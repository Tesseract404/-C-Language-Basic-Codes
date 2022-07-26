#include<stdio.h>
int main(){
    int N,i,j;

    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Enter the 4*4 matrix:\n");
    int arr [N][N];
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    printf("\n");}
    printf("The diagonal matrix is:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
                printf("%2d",arr[i][j]);
            }
            else
                printf("0");
        }
    printf("\n");
    }

}
