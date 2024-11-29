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
int x3[]={45,45,55,45,55,400,45,400,45,45};
//int x5[]={150,200,600,200,600,300,100,300,150,200};
clrscr();
initgraph(&a,&b,"");
setcolor(6);
setfillstyle(1,6);
fillpoly(5,x);
setcolor(15);
setfillstyle(1,15);
fillpoly(5,x1);
setcolor(1);
//setfillstyle(1,1);
//pieslice(175,125,0,90,20);

//pieslice(175,125,90,180,20);
//pieslice(175,125,180,270,20);
//pieslice(175,125,270,360,20);
//line(175,175,125,125);
   circle(180,125,20);
  for(int i=1;i<=124;i++){
     setcolor(1);
  pieslice(180,125,0+(15*i),1+(15*i),20);

  }
// line(180,180,125,120);

setcolor(2);
setfillstyle(1,2);
fillpoly(5,x2);

setcolor(15);
setfillstyle(1,15);
fillpoly(5,x3);




getch();
}