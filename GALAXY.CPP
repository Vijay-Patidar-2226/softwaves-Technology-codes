#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
int a=DETECT;
int b;
int i;
int x=100;
int y=100;
//int z=0;
//lint m=0;

clrscr();
initgraph(&a,&b,"");


for(i=0;i<10000;i++){
putpixel(random(500),random(600),random(15));

}
delay(100);
for(i=1;i<=400;i++){
(i<=100)?(x+=1):(i<=200)?(y+=1):(i<=300)?(x-=1):(y-=1);
delay(20);
putpixel(x,y,14);

}
//delay(10);
//line(100,100,200,200);
//delay(10);
//line(200,100,100,200);
/*
for(i=0;i<2000;i++ )  {
(i<=500)?(z+=1):(i<=970)?(m+=1):(i<=1470)?(z-=1):(m-=1);
delay(10);
  putpixel(z,m,15);
//line(0,0,0,480);
//line(0,0,490,0);

}*/
getch();




}