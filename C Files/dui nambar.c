#include<stdio.h>
struct book
{
    char book_name[100];
    char author[100];
    int book_id;
};

int main(){
    int n;
    printf("Enter book number:");
    scanf("%d",&n)
struct book b[100];
for(i=0;i<n;i++)
    printf("Enter book details(Title,Authur,Id:)\n");
    scanf("%s",b[i].book_name);
    scanf("%s",b[i].author);
    scanf("%d",&b[i].book_id);
}
