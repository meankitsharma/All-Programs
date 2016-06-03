#include<stdio.h>
int main()
{
int i,j,k,l;
for(i=1;i<=5;i++)
{

for(j=1;j<=i;j++)
{
printf("*");
}
for(k=i;k<=4;k++)
{
printf("  ");
}
for(l=i;l>=1;l--)
{
printf("*");
}
printf("\n");
}
getch();
return 0;
}