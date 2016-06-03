#include<stdio.h>
int main()
{
	int t,n,i;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long int f=1;
		
for(i=n;i>0;i--)
{
	f=f*i;
}
	
		printf("%lld\n",f);

}
	return 0;
}
