#include<stdio.h>
int main()
{
    int i,j,k;
    char ch='A';
    for(i=1;i<=5;i++)
    {
    for(k=i;k<=4;k++)
    {
     printf(" ");
     } 
    for(j=1;j<=i;j++)
    {
    printf("%c ",ch);
    ch++;
}

printf("\n");
}
getch();
return 0;
}