#include<stdio.h>

void search(char src[],char k);
void search(char src[],char k){
    int count=0, i;

    while(src[i]!='\0'){
        if(src[i] == k){
            printf("Found!");
            break;
        }
        i++;
    }

    if(i==strlen(src)){
        printf("Not found.");
    }

}

int main(){
    char src[20],k;
    gets(src);
    printf("Target:");
    scanf("%c",&k);
    search(src,k);

}
