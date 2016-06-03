#include<stdio.h>
int main()
{
	int t,s;
	float hra,da;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d",&s);
		if(s<1500)
		{
			hra=.10*s;
			da=.90*s;
			s+hra+da;
			printf("%g\n",s+hra+da);
			
		}
		else
		{
			hra=500;
			da=.98*s;
			
			printf("%g\n",s+hra+da);
		}
	}
	return 0;
}
	

