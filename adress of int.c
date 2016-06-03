#include<stdio.h>
int main()
{
int i=1;
int *n;
n=&i;
printf("%d",*(n+1));
getch();
}




