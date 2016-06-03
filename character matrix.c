 #include<stdio.h>
    int main()
    {
        int i,j,count=0;
        char a[3][3];
        printf("enter the matrix");
        for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
        scanf("%c ",&a[i][j]);
        
        }
        }
      
       
        for(i=0;i<=2;i++)
        {
        printf("\n");
        for(j=0;j<=2;j++)
        {
        printf("%c ",a[i][j]);
        }  
        }
        if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
        {count=count+1;
        } 
        printf("%d",count);
        
        getch();
        return 0;
        }