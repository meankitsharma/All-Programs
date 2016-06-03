#include <stdio.h>
 
int main()
{
   int T,n,reverse,temp;
 scanf("%d\n",&T);
  while(T--)
  {
  reverse = 0;
   scanf("%d\n",&n);
   temp = n;
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
   if ( n == reverse )
      printf("wins\n");
   else
      printf("losses\n");
  }
 return 0;

}
