#include<stdio.h>
int main()
{
    int tc,i;
    printf("enter the no. of test cases");
    scanf("%d",&tc);
    while(tc--)
    {
                      int n,x,j,price;
                      printf("enter the no. of dresses");
                      scanf("%d%d",&n,&x);
                      for(j=0;j<n;j++)
                      {
                      printf("enter the price");
                      scanf("%d",&price);
                      }
                      if(n<x)
                      {
                             printf("bad husband");
                             }
                             if(x==n)
                             {
                                     printf("perfect husband");
                                     }
                                     if(x>n)
                                     {
                                            printf("lame husband");
                                            }
                                            }
                                            getch();
                                            return 0;
                                            }