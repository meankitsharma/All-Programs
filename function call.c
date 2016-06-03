#include<stdio.h>
int main()
{
int y;
printf("enter year");
scanf("%d",&y);
y=romanise(y,1000,'m');
}
romanise(int yy,int j,char ch)
{
int n,i;
n=yy/j;
for(i=0;i<=n;i++)
{
printf("%c",ch);
}
getch();
return(yy%j);

}