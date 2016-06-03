#include<stdio.h>
int main()
{
int i,j,a[3],b[3];
printf("enter the array");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
b[j]=a[i];
for(j=2;j>=0;j--)
{
printf("%d",b[j]);
}
getch();
return 0;
}