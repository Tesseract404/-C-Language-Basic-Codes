#include<stdio.h>
int main(){

    char str1[200], str2[200];
    int i=0, j=0;

    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);

    while(str1[i]!='\0'){

       i++;
    }

    while(str2[j]!='\0'){

        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("string1: %s", str1);

    return 0;

}
