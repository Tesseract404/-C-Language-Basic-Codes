#include<stdio.h>
#include<string.h>
int count_the( char str[]);
int main()
{
    char inp[100];
    gets(inp);
    int n = count_the( inp);
    printf(" Total the :%d",n);

}
int count_the( char str[])
{
    int count=0;
    int i;
    for (i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' '&&
                str[i+1]=='t' &&
                str[i+2]=='h'&&
                str[i+3]=='e'&&
                str[i+4]==' '||
                str[i]=='T'&&
                str[i+1]=='h' &&
                str[i+2]== 'e' &&
                str[i+3]==' ')

        {
            count++;
        }

    }
    return count;
}


