#include<iostream>
using namespace std;
int main()
{
int pos(char s[],char c);
char str[120],ch;
int y;
gets(str);
puts(str);
cout<<"enter the character whose position u hv to find";
cin>>ch;
y=pos(str,ch);
cin.get();
}
int pos(char s[],char c)
{
int i;
int flag=-1;
for(i=0;s[i]=!'\0';i++)
{
if(s[i]==c)
{
flag=0;
cout<<"\nthe character is in the string at position"<<i+1;
}
}
return (flag);
}