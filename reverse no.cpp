#include<stdio.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	
    int n,p,q=0;
   
    scanf("%d",&n);
    while(n>0)
    
    {
    p=n%10;
    q=(q*10)+p;
    n=n/10;
    

}
printf("%d\n",q);
}
return 0;
}
    
