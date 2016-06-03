#include<stdio.h>
int main()
{
int i,j,k,l;
    for (i=1;i<=6;i++)
    {
    for(l=1;l<=i;l++)
    {
    printf("%d ",l);
}
      for(k=i;k<=5;k++)
        {
        printf("    ");
        }
        for(j=i;j>=1;j--)
        {
        
        printf("%d ",j);
        }
        printf("\n");
        }
        getch();
        return 0;
        }