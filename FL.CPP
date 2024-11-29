#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int a=DETECT;
int b;
int x[]={50,50,300,50,300,100,50,100,50,50};
int x1[]={50,100,300,100,300,150,50,150,50,100};
int x2[]={50,150,300,150,300,200,50,200,50,150};

clrscr();
initgraph(&a,&b,"");
setcolor(6);
setfillstyle(1,6);
fillpoly(5,x);

setcolor(15);
setfillstyle(1,15);
setcolor(2);
circle(180,150,30);

fillpoly(5,x1);
setcolor(2);
setfillstyle(1,2);
fillpoly(5,x2);
getch();

}