#include<stdio.h>
int main()
{
int i,j=6,k;
    for (i=6;i>=1;i--)
    {
      for(k=i;k>=2;k--)
        {
        printf(" ");
        }  for(j=6;j>=1;j--)
        {
        
        printf("%d",j );
        }
        printf("\n");
        }
        getch();
        return 0;
        }