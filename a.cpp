#include<stdio.h>
int main()
{
	int T,g;
	float h,c,s;
	printf("enter the no.f test cases\n");
	scanf("%d",&T);
	while(T--)
	{
		printf("enter hardness,carbon content,tensile strength \n");
		scanf("%f%f%f",&h,&c,&s);
		if(h==50&&c==.7f&&s==5600)
		{
			g=10;
			printf("%d\n",g);
}
else
{if(h==50&&c==.7f)
{
	g=9;
	printf("%d\n",g);
}
else{
	if(c==.7f&&s==5600)
	{
		g=8;
		printf("%d\n",g);
	}
	else{
		if(h==50&&s==5600)
		{
			g=7;
			printf("%d\n",g);
		}
		else{
			if(h==50||c==.7f||s==5600)
			{
				g=6;
					printf("%d\n",g);
			}
			else{
				g=5;	
				printf("%d\n",g);
				
				
			}
		}
	}
}
}
	}
}
