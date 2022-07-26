#include<stdio.h>


int main()
{

    char text1[200];
    int i, count1=0, count2=0;

    printf("Enter string: ");
    gets(text1);

    printf("%c", text1[0]);
    for(i=1; text1[i]!='\0'; i++)
    {
        if(text1[i-1] == ' ' && text1[i]!= ' ')
            printf("%c", text1[i]+32);
        else
            printf("%c", text1[i]);
    }

    return 0;
}
