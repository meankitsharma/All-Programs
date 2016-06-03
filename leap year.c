#include<stdio.h>
int main()
{
    /* To check whether the year is leap or not*/
    int year;
        printf("enter the year\n");
        scanf("%d",year);
        if(year%400==0)
        {
        if(year%100==0)
        {
        printf("its a leap year");
        }
        else
        {
            printf("its not a leap year");
            }
            }
            else
            {
            printf("its not a leap year");
            }
            getch();
            return 0;
            }