#include<stdio.h>
#include<string.h>
#define n 10
struct student{
	char name[20];
	int idno,marks;

};
int main()
{
	student s[n],temp[n],t;
	int i,m,j,k=0;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",s[i].name,&s[i].idno,&s[i].marks);
		
	}
		for(i=0;i<n;i++)
	{
		
		printf("Name :%s\tIdNo : %d\t Marks : %d\n",s[i].name,s[i].idno,s[i].marks);
	}
	printf("enter the marks");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(s[i].marks<m)
		{
			temp[k]=s[i];
			k++;
		}
	}
for(i=0;i<k-1;i++)
{
	for(j=i+1;j<k;j++)
	{
	if(strcmpi(temp[i].name,temp[j].name)>0)
		
		{
			t=temp[i];
			temp[i]=temp[j];
			temp[j]=t;
		}
	}
}
printf("result : \n");
for(i=0;i<k;i++)
{
	printf("%s\t%d\t%d\n",temp[i].name,temp[i].idno,temp[i].marks);
}
}
