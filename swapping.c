#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;

printf("value of a is %d \n",a);
printf("value of b is %d",b);

getch();
return 0;
}