int main(){

    char str[200];
    int i=0, count[26]={0}, x;

    printf("String: ");
    gets(str);

    while(str[i]!='\0'){

        if(str[i] >= 'a' && str[i] <= 'z'){
            x = str[i] - 'a';
            count[x]++;
        }
        i++;
    }

    for(i=0;i<26;i++){
        if(count[i]>0)
            printf("%c, ", i + 'a');
    }

    return 0;

}
