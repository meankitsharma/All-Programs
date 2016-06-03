#include<stdio.h>
int main()
{
char a[20];
int i=0;
gets(a);
while(a[i]!='\0')
{
if(a[i]>='a'&&a[i]<='z')
{
a[i]=a[i]-32;
}
else
{
a[i]=a[i]+32;
}
i++;
}
puts(a);
getch();
return ;
}