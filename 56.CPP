#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int a=DETECT;
int b;
int i,j,k=1;
int x=50;
int y=50;
char ch[4];
clrscr();
initgraph(&a,&b,"");
settextstyle(1,0,1);
for(i=1;i<=10;i++){


   setcolor(k++);
   sprintf(ch,"%d",i);
   outtextxy(x,y,ch);

   y=y+40;
}
  getch();

}