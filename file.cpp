#include<stdio.h>
#include<conio.h>

int main()
{
	int code;
	char name[10];
	FILE *fp;
	fp=fopen("stud.txt","w");
	printf("enter code and name : ");
	scanf("%d%s",&code,&name);
	fprintf(fp,"%d%s",code,name);
	fclose(fp);
	fp=fopen("stud.txt","r");
	fscanf(fp,"%d%s",&code,&name);
	printf("%d%s",code,name);
	fclose(fp);
}
