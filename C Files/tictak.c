#include<stdio.h>

int main()
{
    char tict[3][3];
    int n;
    printf("Enter tic tac toe input:");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf(" %c", &tict[i][j]);
        }
    }
    printf("\n");

    n=get_winner(tict);
     if(n ==1)
        printf("Player 1 wins!!");
    else if(n == 2)
        printf("Player 2 wins!!");
    else
    printf("Draw!!");

}

int get_winner(char arr[3][3])
{

    char c;
    int i;

    for(i=0; i<3; i++)
        if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
            c = arr[i][0];

    for(i=0; i<3; i++)
        if(arr[0][i] == arr[1][i] && arr[0][i]==arr[2][i])
            c = arr[0][i];


        if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
        c = arr[0][0];

        if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
        c = arr[0][2];


    if(c == 'X')
        return 2;
    else if(c == 'O')
        return 1;
    else
        return 0;

}
