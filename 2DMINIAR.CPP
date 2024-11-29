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
int min=x[0][0];
clrscr();

 printf(" display all 2d array no. :\n");
for(i=0;i<4;i++){
for(j=0;j<3;j++){
printf("%d ",x[i][j]);
}
printf("\n");
}




for(i=0;i<4;i++){
for(j=0;j<3;j++){
if(min>x[i][j]){
min=x[i][j];
}
}
}
printf("minimum no.of 2d array : %d",min) ;
getch();
}