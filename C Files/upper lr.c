#include<stdio.h>

int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==n-1&&i>j&&j!=0)
                printf("  ");
            else
                printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}
