#include<stdio.h>
void search(char src[], char j);
int main(){
    char src[20],key ;
    gets(src);

    search(src,key);

}

void search(char src[], char j){

    printf("%c",src[0]);

    for(int i=1 ;src!='/0' ;i++)

     {for( j='a';j<='z';j++)
     {
         if(src[i]==j&&src[i]!=src[i-1])
        printf("%c",j);
     }
     }
}
