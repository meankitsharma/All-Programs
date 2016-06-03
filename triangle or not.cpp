#include<stdio.h>
int main()
{
	int t,a,b,c,sum;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		sum=a+b+c;
		if(sum==180&& a<180 && b<180 && c<180)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
