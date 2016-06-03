#include<stdio.h>
int main()
{
	int n,t,p,s,x;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d",&n);
		x=n%10;
			int y,q=0;
		 while(n>0)
    
    {
    
    p=n%10;
    q=(q*10)+p;
    n=n/10;

    
}
y=q%10;
s=x+y;
printf("%d\n",s);
	}
}
