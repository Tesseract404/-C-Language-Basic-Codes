#include<stdio.h>
int main(){
    int N,i,j;
    int arr [N][N];
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Enter the 4*4 matrix:");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    printf("\n");}
    printf("The diagonal matrix is;");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
                printf("%d",arr[i][j]);
            }
            else
                printf(" ");
        }
    printf("\n");
    }

}
