#include<stdio.h>
int sumpro();
int main()
{
int a=5,b=5,s,p;
sumpro(a,b,&s,&p);
printf("%d\n%d",s,p);
getch();
}
int sumpro(int i,int j,int *ss,int *pp)
{
*ss=i+j;
*pp=i*j;
}
