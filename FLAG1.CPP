#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int a=DETECT;
int b;

clrscr();
initgraph(&a,&b,"");
setcolor(6);
rectangle(40,40,50,400);
delay(1000);
setcolor(6);
rectangle(50,80,300,50);
delay(1000);
setcolor(15);
rectangle(50,80,300,110);
delay(1000);
setbkcolor(1);
circle(175,95,13);
delay(1000);
setcolor(2);
rectangle(50,80,300,140);

 getch();

}