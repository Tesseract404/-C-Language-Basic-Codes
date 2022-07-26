#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the name:");

gets(str);

puts(str[0]=toupper(str));

for(int i=1; str[i]!='/0' ;i++)
    if(isspace(str[i]))
    {
        toupper(str[i+1]);
    }
puts(str);
    }

