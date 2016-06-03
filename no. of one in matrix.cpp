#include<stdio.h>
int main()
    {
        int i,j,a[3][3];
        printf("enter the matrix");
        for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
        scanf("%d ",&a[i][j]);
        
        
        }
        
        }
        if((a[i]==a[j])&&(a[i]!=a[j]==0))
       {
       
                 printf("it is a diagonal matrice");
                 }
        for(i=0;i<=2;i++)
        {
        printf("\n");
        for(j=0;j<=2;j++)
        {
        printf("%d ",a[i][j]);
        }
        
        }
        getch();
        return 0;
        }