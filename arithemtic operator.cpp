#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	private:
		int d;
		public:
		data()
			{
				d=0;
				cout<<"constructor"<<endl;
			}
			data(int t)
			{
				d=t;
			}
			void display()
			{
				cout<<"value of d3 = "<<d<<endl;
			}
		data operator+(data obj)
			{
			data temp;
			
				cout<<"op"<<endl<<endl;
				cout<<"value of obj.d = "<<obj.d<<endl<<"value of d = "<<d<<endl;
				temp.d=d+d;
			
			}
};
int main()
{
	data d1(11),d2(22),d3;
	d3=d1+d2;
	d3.display();
}
