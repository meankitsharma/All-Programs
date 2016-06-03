#include<stdio.h>
int main()
{
int n,a[4],i=0,r,j;
int q;
printf("enter the number\n");
scanf("%d",&n);
q=n;
while(q>0)
{
r=q%2;
a[i]=r;
q=(q-r)/2;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d",a[j]);
getch();
}