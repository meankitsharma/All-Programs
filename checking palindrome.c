#include<stdio.h>
int main()
{
int n,p,a,b;
printf("enter the number to check whether it is palindrome no. or not \n");
scanf("%d",&n);
printf("entered nu is %d ",n);
p=n%10;
printf("%d",p);
a=p%10;
printf("%d",a);
b=p/10;
printf("%d",b);

getch();
return 0;
}