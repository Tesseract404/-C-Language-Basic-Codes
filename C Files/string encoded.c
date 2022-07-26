#include<stdio.h>

void encode( char inp[]);
void AtoM(char a);
void NtoZ(char a);
void atom(char a);
void ntoz(char a);



int main(){
     char s[]= "Bye, A";
    encode(s);

    return 0;


}
void encode( char inp[])
{
    for(int i=0; inp[i]<NULL; i++)
    {
        if(inp[i]>64&&inp[i]<91)
        {
            if(inp[i]>78)
            {
                char n=inp[i];
                AtoM(n);
            }
            else
            {
                char m=inp[i];
                NtoZ(m);
            }

        }
        else if(inp[i]>96&&inp[i]<123)
        {
            if(inp[i]>110)
            {
                char o=inp[i];
                atom(o);
            }
            else
            {
                char p=inp[i];
                ntoz(p);
            }

        }
    }
}
void AtoM(char a)
{
    int count=26;
    for(char j='A'; j<'N'; j++)
    {
        char enc=j+count;
        if(j=a)
        {
            printf("%c",enc);
        }
        else
        {
            count--;
        }

    }
}
void NtoZ(char a)
{
    int count=26;
    for(char j='Z'; j>'M'; j--)
    {
        char enc=j-count;
        if(j=a)
        {
            printf("%c",enc);
        }
        else
        {
            count--;
        }

    }
}
void atom(char a)
{
    int count=26;
    for(char j='a'; j<'n'; j++)
    {
        char enc=j+count;
        if(j=a)
        {
            printf("%c",enc);
        }
        else
        {
            count--;
        }

    }
}
void ntoz(char a)
{
    int count=26;
    for(char j='z'; j>'m'; j--)
    {
        char enc=j-count;
        if(j=a)
        {
            printf("%c",enc);
        }
        else
        {
            count--;
        }

    }
}
