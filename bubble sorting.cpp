#include<stdio.h>
int main()
{
	int i,j,temp,a[5];
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorting ");
		for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-(i+1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n array after sorting ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}
