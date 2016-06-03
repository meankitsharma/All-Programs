#include<stdio.h>
void ankit();
int main()
{
printf("calling ankit");
printf("\n");
ankit();
getch();
return 0;
}
void ankit()
{
int i,j;
char a[3][3];
printf("enter the matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%c",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{printf("\n");
for(j=0;j<=2;j++)
{
printf("%c",a[i][j]);
}
}
}