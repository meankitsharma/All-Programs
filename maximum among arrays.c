#include<stdio.h>
int main()
{
int a[6],i,min;
printf("enter the values of an array\n");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<=5;i++)
{
if(a[i]<min)
{
max=a[i];

}
}
printf("minimum value among all the elements of an array is %d",min);
getch();
}