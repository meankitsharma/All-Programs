#include<stdio.h>
int main()
{
int a[10],i,j=1,sum=0;
printf("enter the values of an array\n");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
sum =sum+a[i];
}
printf("%d",sum);

getch();
}