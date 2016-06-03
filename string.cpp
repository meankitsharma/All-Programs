#include<iostream>
#include<conio.h>
using namespace std;
class abc{
	private:
		char *str;
		public:
			void read()
			{
				cout<<"Enter the string"<<endl;
				cin>>str;
			}
		
			void toupper()
			{
				
		int i=0;
		while(*(str+i)!='\0')
		{
			cout<<*(str+i)<<endl;
			if(*(str+i)>='a'&&*(str+i)<='z')
			{
				*(str+i)-=32;
			}
			i++;
		}
			}
				void show()
			{
				cout<<str<<endl;
			
			}
};
int main()
{
	abc s;
	s.read();
	s.toupper();
	s.show();
	
}
