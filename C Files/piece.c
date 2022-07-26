#include<stdio.h>
#include<string.h>
void split_string( char sen[]);
int main()
{
    char quote[100];
    gets(quote);
      split_string(quote);
}
//solved
///.........................................
void split_string( char sen[])
{
    char *part= strtok(sen," ");
    while(part!=NULL)
    {
        printf("%s\n",part);
        part=strtok(NULL," ");

    }
}
//.......................................
