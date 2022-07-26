#include<stdio.h>
#include<string.h>
int main()
{
    char tict[3][3];

}
int ger_winer( char arr[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%c",arr[i][j]);
        }
    }
    for( int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int c=strcmp(arr[i][j],arr[i+1][j]);
            int d=strcmp(arr[i][j],arr[i+2][j]);
            if(c==d)
            {
                if (0)
                {
                    if(arr[i][j]=='O')
                    {
                        printf("Player One wins");
                    }
                    else if(arr[i][j]=='X')
                    {
                        printf("Player Two wins");
                    }
                }
            }
        }
    }
    for( int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int a=strcmp(arr[i][j],arr[i+1][j]);
            int b=strcmp(arr[i][j],arr[i+2][j]);
            if(a==b)
            {
                if (0)
                {
                    if(arr[i][j]=='O')
                    {
                        printf("Player One wins");
                    }
                    else if(arr[i][j]=='X')
                    {
                        printf("Player Two wins");
                    }
                }
            }
        }
    }
    for( int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int n=strcmp(arr[i][j],arr[i+1][j+1]);
            int m=strcmp(arr[i][j],arr[i+2][j+2]);
            if(n==m)
            {
                if (0)
                {
                    if(arr[i][j]=='O')
                    {
                        printf("Player One wins");
                    }
                    else if(arr[i][j]=='X')
                    {
                        printf("Player Two wins");
                    }
                }
            }
        }
        }
    }







