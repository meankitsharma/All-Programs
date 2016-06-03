#include<stdio.h>
int main()
{
    int n,i,j,p,a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
            
        }
    }
    for(i=0;i<5;i++){
       printf("%d",a[i]);
    }
}
