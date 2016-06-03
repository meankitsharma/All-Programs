#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,l;
	char s[100],c[100];
	scanf("%s",&s);
    l=strlen(s)-1;
    while(s[i]!='\0'){
    	c[i]=s[l];
    	i++;
    	l--;
   }
   c[strlen(s)]='\0';
   printf("%s",c);
    if(strcmp(s,c)==0)
    {
    	printf("YES");
    }
    else{
    
    printf("NO");
    
    }
	
	return 0;
}
