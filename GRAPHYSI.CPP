#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int a=DETECT;
int b;
clrscr();

initgraph(&a,&b,"");
setbkcolor(3);

settextstyle(2,0,6);
rectangle(10,10,630,470);
setcolor(15);
outtextxy(13,18,"Hi,Good evening sir/mam.");
outtextxy(13,40,"Thank you for allowing me to introduce my self.");
outtextxy(13,60,"I am Vijay Patidar.I am from Chapda");
outtextxy(13,80,"I am pursuing B.Tech in Information Technology at CDGI.");

outtextxy(13,100,"I like to read books and listen to music in my free time");
outtextxy(13,120,"I am skilled in c/c++ programming langlauge.");
outtextxy(13,140,"My goal for the future is to be in a senior position in my field.");

outtextxy(13,160,"My other hobbies include playing cricket.");


outtextxy(13,180,"And i have a passion for learning new things.");


outtextxy(13,200,"My short-term goal is to get a job in any company .");

outtextxy(13,220,"My long-term goal is to get a good position .");



outtextxy(13,240,"Thank you for giving me a chance to introduce myself.");

circle(60,290,50);







getch();

}