#include<stdio.h>
void main(){

 int a,w,q,g,e,d,s,r;
 float b,f,h;
 char c;
 scanf("%d",&a);
 printf("the value of a is:%d",a);
 canf("%f",&b);
 printf("the valuue of b is:%f",b);
 scanf(" %c",&c);//there should a space between " and % to compile properly.There's a bug
 printf("the value of c is:%c",c);
 scanf("%d%d",&w,&q);
 g =w+q;
 printf ("the sum is :%d",g);
 scanf(" %d %d",&e,&d);
 s=e*d;
 printf("the sum is:%d",s);
 scanf(" %d%d",&r,&f);
 h=(float)r/f;
 printf("the div is:%f",h);

 return 0;
}
