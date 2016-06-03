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
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n array after sorting ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}
