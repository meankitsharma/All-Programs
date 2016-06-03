#include<stdio.h>
int main()
{
    int t,n,i,j,p,a[n];
    scanf("%d",&t);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
            
        }
    }
}
