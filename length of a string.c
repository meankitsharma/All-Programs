#include<stdio.h>
int main()
{
char a[20];
int i=0,count=0;
gets(a);
while(a[i]!='\0')
{
count=count+1;
i++;
}
printf("%d",count);
getch();
return ;
}