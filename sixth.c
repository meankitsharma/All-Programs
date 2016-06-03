#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    for(i=1;i<=5;i++)
    {
    printf("enter the values in arrays");
    scanf("%d%d",&a[i],&b[i]);
    c[i]=a[i]+b[i];
    printf("sum of arrays are %d ",c[i]);
}

getch();
}


