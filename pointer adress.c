#include<stdio.h>
int main()
{
int i=10;
printf("value of i is = %d\n",i);
printf("size of i is  %d\n",sizeof(i));
printf("value of adress of i is = %d\n",&i);
printf("value at adress of i is = %d\n",*(&i));
getch();
return 0;
}