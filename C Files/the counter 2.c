#include<stdio.h>
#include<string.h>
#define M 100

int main(){
}

int count_the( char str[])
{
    char *tok[M];
    tok[M]=strtok(str," ");
    int count=0;
    int i=1;
    while(tok!=NULL )
        {
            printf("%s",tok);
            tok (i) [M]=strtok(NULL, " ");
            if (tok (i)=='The'||tok(i)=='the'||tok(i)=='THE')
            {
                count++;
            }
        i++;
        }
    return count;

}
