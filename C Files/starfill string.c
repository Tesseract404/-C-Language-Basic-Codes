#include<stdio.h>
void Star_fill(char str1[], int n){
    for(int i=0;i<n-1;i++){
        if(str1[i]=='\0')
            str1[i]='*';
    }
    printf("\n");
    puts(str1);
}
int main(){
    int n;
    scanf("%d%*c", &n);
    char str[n];
    printf("Enter string: ");
    gets(str);
    Star_fill(str, n);

}
