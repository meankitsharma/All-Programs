#include<stdio.h>
int main()
{
	int t;
	float q,p;

	scanf("%d\n",&t);
	while(t--)
	{
	scanf("%f%f",&q,&p);
	if(q>1000)
	{
		
	
		printf("%f\n",(p*q*.9));
	}
	else
	{
		printf("%f\n",(p*q));
	}
	}
}
