#include<stdio.h>
//program for a 3*3 matrice
void main()
{
int a[3][3],i,j,k;
printf("enter the matrice \n ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d      ",a[i][j]);
}
printf("\n");
}

getch();
return 0;
}