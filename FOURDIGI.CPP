#include<conio.h>
#include<stdio.h>
int isPalindrome(int n)
{
int n1=n;
int s=0;
int a;

while(n!=0)
{
a=n%10;
s=s*10+a;
n=n/10;

}
if(s==n1){
return 1;
}
else
{
return 0;
}
}

void main()
{
int i;
clrscr();
for(i=1000;i<=10000;i++){
if(isPalindrome(i)){
printf("%d ",i);

}
}

 getch();
}
