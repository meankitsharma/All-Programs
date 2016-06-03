#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
sum(a);
}
int sum(int *p)
{
int i;
for(i=0;i<=4;i++)
{
printf("%d\n",(p+i));
}
getch();
}



