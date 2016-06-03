#include<stdio.h>
int main()
{
int a=3,b=6;
printf("%d%d\n\n",a,b);
swap(&a,&b);
printf("%d%d",a,b);
getch();
}
int swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
