#include<stdio.h>
int main()
{
int a[3][3],b[3][3],j,i,max;
printf("enter the values of a matrix\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d%d",&a[i][j],&b[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d",a[i][j]);
}
printf("\n\n");
}  
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d",b[i][j]);
}
printf("\n\n");
}               
getch();
return 0;
}