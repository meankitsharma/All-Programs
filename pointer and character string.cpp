#include<stdio.h>
#include<string.h>
int main()
{
	char *s;
	int i;
	printf("s=%u \n",s);
	s="NICE COMPUTER";
	printf("s=%u \n",s);
	for(i=0;i<strlen(s);i++)
	{
		printf("%c is stored in %u \n",*(s+i),s+i);
	}
}
