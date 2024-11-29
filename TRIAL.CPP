#include<conio.h>
#include<stdio.h>
void main()
{
int n,m;
int i,j;

printf("enter n:");
scanf("%d %d",&n,&m) ;
  clrscr();
int x[n][m];
for( i=0;i<n;i++){
for( j=0;j<m;j++){
printf("enter element\n");
scanf("%d",&x[i][j]);


}
printf("\n");
}



int max=x[0][0];
clrscr();

 printf(" display all 2d array no. :\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ",x[i][j]);
}
printf("\n");
}




for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(max<x[i][j]){
max=x[i][j];
}
}
}
printf("maximum no.of 2d array : %d",max) ;
getch();
}