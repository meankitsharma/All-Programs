#include<stdio.h>
int main()
{
	int T,i,n,flag;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d",&n);
	for(i=2;i<n;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		{
		printf("yes\n");
		}else{
		
		printf("no\n");
		flag=0;
}
	
	
	}
	return 0;
}
