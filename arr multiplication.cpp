#include <stdio.h>

int main()
{
    int l,w,h,n,i;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d %d",&w,&h);
    if(w<l||h<l){
    	printf("UPLOAD ANOTHER\n");
    	printf("\n");
    }
    else{
    	if(w==l && h==l)
    	{
    		printf("ACCEPTED\n");
    		printf("\n");
    	}
    	else{
    		printf("CROP IT\n");
    	}
    	
    }
    }
}

