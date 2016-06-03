#include<stdio.h>
int main()
{
int i,j,k;
    for (i=6;i>=1;i--)
    {
      for(k=i;k<=6;k++)
        {
        printf(" ");
        }  for(j=1;j<=i;j++)
        {
        
        printf("%d ",j);
        }
        printf("\n");
        }
        getch();
        return 0;
        }