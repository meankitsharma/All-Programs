#include<iostream>
#include<conio.h>
using namespace std;
class increment
{
	private:
		int data;
		public:
			increment()
			{
				data=0;
				cout<<"constructor"<<endl;
			}
			void display()
			{
				cout<<data<<endl;
			}
			increment operator++()
			{
				cout<<"operator ++";
				increment temp;
				data=data+1;
				temp.data=data;
			
			}
};
int main()
{
	increment d1,d2;
	d1.display();
	d2.display();
	++d1;
	d2=++d1;
	d2=d1;
	d1.display();
	d2.display();
	d2.display();
	}
