#include<stdio.h>
int main()
{
int a[3][3],i,j,count1,count2;
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
if(a[i][j]==0)
{
count1++;
}
else
{
count2++;
}
}
printf("\n");

}
printf("no. of 0's is %d",count1);
printf("no. of 1's is %d",count2);
getch();
return 0;
}