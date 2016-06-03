#include<stdio.h>
int main()
{
	int T;
	float h,c,s;

	scanf("%d\n",&T);
	while(T--)
	{
	
		scanf("%f%f%f\n",&h,&c,&s);
		if(h>50&&c<.7f&&s>5600)
		{
			
			printf("10\n");
}
else
{if(h>50&&c<.7f)
{

	printf("9\n");
}
else{
	if(c<.7f&&s>5600)
	{
	
		printf("8\n");
	}
	else{
		if(h>50&&s>5600)
		{
		
			printf("7\n");
		}
		else{
			if(h>50||c<.7f||s>5600)
			{
				
					printf("6\n");
			}
			else{
					
				printf("5\n");
				
				
			}
		}
	}
}
}
	}
}
