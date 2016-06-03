#include<stdio.h>
int main()
{
	int t,n,i,j,f;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&f);
		int b[f];
		for(i=0;i<f;i++)
		{
			scanf("%d",&b[i]);
		}
	
	int flag=0;
			
			for(i=0,j=0;i<n && j<f;i++)
			{
				if(a[i]==b[j])
				{
					flag++;
					j++;
					if(flag==f)
						break;
				}
				
			}
		
		if(flag==f)
				{
					printf("Yes\n");
				}
				else
				{
					printf("No\n");
				}
		
	}
	return 0;
	}
