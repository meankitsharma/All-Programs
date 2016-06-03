#include<stdio.h>
int main()
{
    int a[10],i,j,p;
    printf("enter the values of array \n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
}
printf("old array is : ");
for(i=0;i<10;i++)
{
    printf("%d",a[i]);
 }
 for(i=0;i<10;i++)
 {
                  for(j=1;j<10;j++)
                  {
                                   if(a[i]==a[j])
                                   {
                                                 for(p=j;p<10;p++)
                                                 {
                                                                  a[p]=a[p+1];
                                                                  }
                                                                  }
                                                                  }
                                                                  } 
                                                                  printf("\nnew array is : ");
                                                                  for(i=0;i<10;i++)
                                                                  {printf("%d",a[i]);
                                                                  } 
 getch();
    return 0;
}