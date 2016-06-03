#include<stdio.h>
#include<string.h>
#define n 3
struct men{
	char name[20];
	int code,age,weight,height;
};
int main ()
{
	men m[5];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d%d",m[i].name,&m[i].code,&m[i].age,&m[i].weight,&m[i].height);
		}
		printf("List of the person whose weight is > 50 & height is > 4 : \n");
		printf("Name    Code    age    weight    height\n");
		for(i=0;i<n;i++)
		{
			if(m[i].weight>50 && m[i].height>4)
			{
				printf("%s\t%d\t%d\t%d\t%d\n",m[i].name,m[i].code,m[i].age,m[i].weight,m[i].height);
			}
		}
}
