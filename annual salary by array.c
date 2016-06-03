#include<stdio.h>
//annual salary greater than 1 lakh rupees.
void main()
{
int a[6],i,sum,sal;
sum=0;
printf("enter the monthly salary of employ");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
printf("the salaries u have entered are : \n");
for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<6;i++)
{
sal=a[i]*12;
if(sal>=100000)
{
sum++;
}
}
printf("No. of employees have annual salary more than 1 lakh are %d \n \n",sum);


getch();
return 0;
}
