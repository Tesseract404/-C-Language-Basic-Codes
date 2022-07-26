#include<stdio.h>
//assalamualaikum  bhaia<3
void dash();
void bdash();

int main()
{
 int pb=180,pp=650,fp=60,wp=15,b,p,f,w;
 float bpr,ppr,wpr,fpr,sum,vat,total;
          printf("   ===LIST OF PRODUCTS===\n");
          dash();
          printf("\n| Product     |Price       |\n");
          dash();
          printf("\n| Burgir      |%dtk       |\n",pb);
          dash();
          printf("\n| Pizza       |%dtk       |\n",pp);
          dash();
          printf("\n| Fries       |%dtk        |\n",fp);
          dash();
          printf("\n| Water       |%dtk        |\n",wp);
          dash();
printf("\n\n\n\n\n===Order===\n\n");
printf("Burgir:");
scanf("%d",&b);
printf("Pizza:");
scanf("%d",&p);
printf("Fries:");
scanf("%d",&f);
printf("Water:");
scanf("%d",&w);

   printf("\n                ===Receipt===\n");
   bdash();
   printf("\n|Product        |  Quantity   |        Price|\n");
   bdash();
   printf("\n|Burgir         |");
   printf("      %d      |",b);
   printf("       %.2f|\n",bpr=b*pb);
   bdash();
   printf("\n|Pizza          |");
   printf("      %d      |",p);
   printf("       %.2f|\n",ppr=p*pp);
   bdash();
   printf("\n|Fries          |");
   printf("      %d      |",f);
   printf("       %.2f|\n",fpr=f*fp);
   bdash();
   printf("\n|Water          |");
   printf("      %d      |",w);
   printf("        %.2f|\n",wpr=w*wp);
   bdash();
   printf("\n|Vat(15%%)       |");
   sum=bpr+ppr+fpr+wpr;
   vat=sum/100*15;
   printf("                   %.2ftk|\n",vat);
   bdash();
   printf("\n|Total          |");
   total=sum+vat;
   printf("                  %.2ftk|\n",total);
   bdash();



return 0;
}

void dash(){
printf("----------------------------");
}
void bdash(){
printf("---------------------------------------------");
}

