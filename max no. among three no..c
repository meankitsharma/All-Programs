#include<stdio.h>
int main()
{
/*maximum among three numbers*/
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(b>a||c>a)
{
if(c>b)
{
printf("max no. is c");
}
else
printf("max no. is b");
}
else
{
printf("max no. is a ");
}
getch();
return 0;
}
