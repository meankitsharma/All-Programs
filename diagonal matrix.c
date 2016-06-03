#include<stdio.h>
int main()
{
int a[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
if(a[i][j]!=1)
{
printf("not a diagonal matrix\n");
break;
}
}
else
{
if(a[i][j]!=0)
{
printf("not a diagonal\n");
break;
}
else
{
printf("diagonal matrix \n");
}
}
}
}
getch();
return 0;
}