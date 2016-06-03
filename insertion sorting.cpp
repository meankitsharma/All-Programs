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
	for(i=1;i<5;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			
			
		a[j+1]=a[j];
	
		j--;
       }
	   a[j+1]=temp;
	
	}
	printf("\n array after sorting ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}
