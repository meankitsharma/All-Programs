#include<stdio.h>
int main()
{
int i,j,k,l;
char ch='A';
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("%c ",ch);
}
for(k=1;k<=i-1;k++)
{
printf("    ");
}
for(l=5;l>=i;l--)
{
printf("%c ",ch);
}ch++;
printf("\n");
}
getch();
return 0;
}