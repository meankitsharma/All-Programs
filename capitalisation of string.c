#include<stdio.h>
void main()
{
char str[60],i;
printf("enter the string\n\n");
gets(str);
str[0]=toupper(str[0]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
str[i+1]=toupper(str[i+1]);
}
}
puts(str);
getch();
return 0;
}