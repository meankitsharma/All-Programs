#include<stdio.h>
int main()
{
	int T;
	char *s[200],ch;
	s['b']=s['B']="BattleShip";
		s['c']=s['C']="Cruiser";
	s['d']=s['D']="Destroyer";
	s['f']=s['F']="Frigate";

	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%c\n",&ch);
		printf("%s\n",s[ch]);
		
}
return 0;
}
