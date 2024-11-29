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

int isPrime(int n){
int i;
int c=1;
for(i=2;i<n;i++){
if(n%i==0){
c=0;
}
}
if(c){
return 1;

}
else{
return 0;

}


}
void main()
{
int i;
clrscr();
for(i=100;i<=500;i++){
if(isPalindrome(i) && isPrime(i)){
printf("%d ",i);

}
}

 getch();
}
