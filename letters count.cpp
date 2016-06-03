#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d\n",&t);
	while(t--)
	{
	int l,p,count=0;
	char a[50];
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[0]==a[i])
		{
			count++;
		}
	}
	p=l-count;
	if(count==p)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
return 0;
}
