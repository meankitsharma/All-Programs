#include<stdio.h>
void main()
{
int a[5],i;
printf("enter the no.'s");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
printff("ur entered no.'s are %d,",a[i]);
}
for(i=0;i<=5;i++)
{
if(a[i]==9)
{
break;
}
}
printf("position of ur no. is %d ", i);
getch();
return 0;
}