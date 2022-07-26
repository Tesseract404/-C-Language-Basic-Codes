#include<stdio.h>
void idk(int n);
struct Car
{
    char company[100];
    char model[100];
    int price;
};
int main()
{
    int n,i;
    printf("Enter the number of cars: ");
    scanf("%d",&n);
    printf("\n\n");
    struct Car c[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the company name:");
        scanf("%s",c[i].company);
        printf("Enter the model name:");
        scanf("%s",c[i].model);
        printf("Enter the price:");
        scanf("%d",&c[i].price);
    }

    FILE *fp;
    fp=fopen("cars.txt","w");
    if(fp==NULL)
    {
        printf("File not created!");
    }
    else
    { fprintf(fp,"%d\n",n);
        for(i=0; i<n; i++)
        {
            fprintf(fp,"%d\n",i+1);
            fprintf(fp,"%s\n",c[i].company);
            fprintf(fp,"%s\n",c[i].model);
            fprintf(fp,"%d\n",c[i].price);
        }
        printf("Congratulation!!Your file has been written successfully!\n");
    }
    fclose(fp);
    display_details(n);
}
void display_details(int n){
    struct Car c[n];
    int i;
    FILE *fp;
    int x=i+1;
    fp=fopen("cars.txt","r");
   fscanf(fp,"%d",&n);
        for(i=0; i<n; i++)
        {fscanf(fp,"%d",&x);
            fscanf(fp,"%s",c[i].company);
            fscanf(fp,"%s",c[i].model);
            fscanf(fp,"%d",&c[i].price);
        }

    fclose(fp);

    int max=car[0].price;
    for (i=1; i<n; i++)
    {
        if(car[i].price>max)
            max=car[i].price;
    }
    printf("\nMax price = %d",max);

}
