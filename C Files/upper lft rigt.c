#include<stdio.h>
void letter_grade(int points, char *gradep, char *missedp);
int main()
{
    int pts;
    char grdp,misdp;

    printf("enter:");
    scanf("%d",&pts);
    letter_grade(pts,&grdp,&misdp);
    printf("grade:%c",grdp);
    if(misdp=='True')
        printf("missed %c",grdp-1);
}
void letter_grade(int points, char *gradep, char *missedp){

if( points>=90 && points<=100)
    *gradep='A';
else if (points>=80&&points<=89)
    *gradep='B';
else if (points>=60&&points<=79)
    *gradep='C';
else if (points>=50&&points<=59)
    *gradep='D';
else if (points>=0&&points<=49)
    *gradep='F';

if(points==89)
    * missedp='True';
else if(points==79)
    * missedp='True';
else if(points==59)
    * missedp='True';
else if(points==49)
    * missedp='True';}

//return *gradep,*justmissed;
