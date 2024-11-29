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
 for(j=1;j<=10;j++)
   {
   if(k==16){

   k=1;
   }
   setcolor(k++);
   sprintf(ch,"%d",i*j);
   outtextxy(x,y,ch);
   x=x+50;
   delay(50);
   }
   x=50;
   y=y+40;
}
  getch();

}