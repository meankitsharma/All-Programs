#include<stdio.h>
int main()
{
int i,fb,a=0,b=1,n;
printf("enter the no.");
scanf("%d",&n);
printf("first ten terms of fibonacci series are \n \n \n \n \n \n");
for(i=0;i<n;i++)
{
if(i<=1)
{
fb=i;
}
else
{
fb=a+b;
a=b;
b=fb;
}
printf("%d ",fb);
}
getch();
return 0;
}