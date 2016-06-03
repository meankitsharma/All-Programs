#include<iostream>
#include<conio.h>
using namespace std;
class data{
	private:
		int d;
		public:
			void read()
			{
				cout<<"enter data : "<<endl;
				cin>>d;
			}
			void display()
			{
				cout<<d<<endl;
			}
};
int main()
{
	data *p[10];
	int count=0,i;
	char choice;
	do{
		p[count]=new data;
		p[count]->read();
		count++;
		cout<<"more data ?(y/n)"<<endl;
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	for(i=0;i<count;i++)
	{
		p[i]->display();
	}
}
