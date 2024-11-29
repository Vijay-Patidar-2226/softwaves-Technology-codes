#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int a=DETECT;
int b;
clrscr();

initgraph(&a,&b,"");

circle(250,200,80);//main circle
setbkcolor(7);
setfillstyle(1,14);

floodfill(250,200,15);
setfillstyle(1,8);
circle(200,170,10);//left eye
circle(300,170,10);

floodfill(200,170,15);
floodfill(300,170,15);
setfillstyle(1,4);
arc(250,200,180,360,60);
arc(250,210,175,370,60);
floodfill(250,262,15);

getch();


}