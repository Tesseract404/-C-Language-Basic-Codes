#include<stdio.h>

int main(void)
{
    FILE *file;
    char output;
    char input;

    file=fopen("prc.txt","w");
    int j=scanf("%c",&input);
    while(j!='.'||j!='!'||j!='?'){
        fprintf(file,"%c",input);
        scanf("%c",&input);
        }
        fclose(file);



    file= fopen("prc.txt","r");
    int i=fscanf(file,"%c",&output);
    while (i!= EOF)
    {
        printf("%c",output);
        i=fscanf(file,"%c",&output);
    }


}

fclose(file);

