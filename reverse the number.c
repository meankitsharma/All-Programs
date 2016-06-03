#include<stdio.h>
int main()
{
    int n,p,q=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    
    {
    p=n%10;
    q=(q*10)+p;
    n=n/10;
    

}
printf("%d",q);
getch();
}
    