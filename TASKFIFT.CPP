#include<conio.h>
#include<stdio.h>
void main()                                            
{
int i,j,k;
clrscr();
for(i=1;i<=11;i++)
{
for(k=1;k<=i;k++){
		 printf(" ");
}
    for(j=11;j>=i;j--){
    printf("* ");

    }
  printf("\n");
}
	       getch();

}