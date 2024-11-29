
#include<conio.h>
#include<stdio.h>
int demo(int,int);


void main()
{
clrscr();
int a=12;
int b=12;
printf("%d\n",demo(a,b)) ;

getch();
}
int demo(int a,int b)
{
if(a>b){
printf("a is largest b:");
return 1;
}
else {
printf("b is small a :") ;
return 0;

}


}





