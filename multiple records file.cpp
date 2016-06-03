#include<stdio.h>
#include<conio.h>

	int main()
	{
		int code;
		char name,ans='y';
		FILE *fp;
		fp=fopen("display.txt","w");
		while(ans=='y')
		{
		
		printf("\n enter code and name : ");
		scanf("%d%s",&code,&name);
		fprintf(fp,"%d%s\n",code,name);
		printf("\ndo you want to continue");
		ans=getche();
		}
		fclose(fp);
		fp=fopen("display.txt","r");
		while(fscanf(fp,"%d%s",&code,&name)!=EOF)
		{
			printf("%d%s",code,name);
		}
		fclose(fp);
		return 0;
	}

