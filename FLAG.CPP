#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int a=DETECT;
int b,i;
clrscr();
initgraph(&a,&b,"");

//bar
int x[]={100,50,100,400,105,400,105,50,100,50};
setfillstyle(5,BROWN);
fillpoly(5,x);

// first box color
setcolor(6);
for(i=0;i<150;i++){
line(109+i,50,109+i,80);
delay(10);
}


// second box color
setcolor(15);
for(i=0;i<150;i++){
line(109+i,80,109+i,110);
delay(10);
}

// third box color
setcolor(2);
for(i=0;i<150;i++){
line(109+i,110,109+i,140);
delay(10);
}

  //circle
  setcolor(RED);
 setfillstyle(5,BLUE);

  circle(180,95,10);
  floodfill(181,93,RED);















getch();


}