#include<stdio.h>
void add( int a,int b)
{
  int c=a+b;
    printf("sum of %d and %d is %d",a,b,c);
}
int main()
{
add(10,100);
getch();
return 0;
}