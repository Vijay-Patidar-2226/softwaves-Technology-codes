#include<conio.h>
#include<stdio.h>
void main()
{
int x[4][3]={
{12,45,32},
 {15,56,46},
 {13,67,85},
 {23,32,890}
};
int i,j;
clrscr();
int max=x[0][0];


 printf(" display all 2d array no. :\n");
for(i=0;i<4;i++){
for(j=0;j<3;j++){
printf("%d ",x[i][j]);
}
printf("\n");
}




for(i=0;i<4;i++){
for(j=0;j<3;j++){
if(max<x[i][j]){
max=x[i][j];
}
}
}
printf("maximum no.of 2d array : %d",max) ;
getch();
}