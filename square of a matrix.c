#include<stdio.h>
int main()
{
int a[3][3],p[3][3],j,i,max;
printf("enter the values of a matrix\n\n");
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
p[i][j]=a[i][j]*a[i][j];

printf("%d  ",p[i][j]);
}
printf("\n\n");
}                 
getch();
}