#include<stdio.h>

int main(void)
{
    FILE *file;
    char ch;
    int characters, words, lines;
    file=fopen("sentence.txt","r");

    if(file==NULL)
        printf("failed");

    characters = words = lines = 0;

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);


    /* Close files to release resources */
    fclose(file);




}
/* .../////printf("File written!\n");int stat=/////



        char sent[100];
    file=fopen("sentence.txt","w");
    if(file==NULL)
        printf("failed");
    else
    {
        printf("File opened!\n");
        gets(sent);
        fprintf(file,sent);

    }
    fclose(file);



    {
        char inp ;
        int chr_count=0;
        int word_count=0;
        int line_count=0;
        for(int i=0; i!=EOF; i++)
        {
            fscanf(file," %c",&inp);
            if(inp==' '||inp=='\n')
                word_count++;
            else if (inp=='\n')
                line_count++;
            else if(inp!=' ')
                chr_count++;
        }
        printf("Total characters:%d!\n",chr_count);
        printf("Total words:%d!\n",word_count);
        printf("Total lines:%d!\n",line_count);
    }
    fclose(file);
*/
