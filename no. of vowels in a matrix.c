#include<stdio.h>
int main()
{
int i,j;
char a[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%c",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%c",a[i][j]);
}
printf("\n");
}
getch();
return 0;
}
