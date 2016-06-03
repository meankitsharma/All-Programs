#include<stdio.h>
int main()
{
int i,j,k;
    for (i=1;i<=7;i++)
    {
      for(k=i;k<=6;k++)
        {
        printf(" ");
        }  for(j=1;j<=(2*i-1);j++)
        {
        
        printf("%d ",j);
        }
        printf("\n");
        }
        getch();
        return 0;
        }