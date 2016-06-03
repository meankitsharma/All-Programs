#include<stdio.h>
	void swap(int *,int *);

int main()
{
	int a=10,b=20;

	printf("before calling function a=%d,& b= %d",a,b);
    swap(&a,&b);
printf("after calling function a=%d, & b= %d",a,b);	
}
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p2;
	*p2=*p1;
	*p1=temp; 
}

