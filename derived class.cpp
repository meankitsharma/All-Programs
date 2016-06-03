#include<iostream>
#include<conio.h>
using namespace std;
class base{
	protected:
		int x;
		public:
			base()
			{
				cout<<"i am a constructor in base"<<endl;
				x=0;
			}
			void plus()
			{
				x++;
			}
			void showbase()
			{
				cout<<"the value of x  is : "<<x<<endl;
			}
};
class derv:public base
{
	private:
		int y;
public:
derv()
{
	cout<<"i am in derv"<<endl;
	y=0;
}
void minus()
{
	x--;
	y--;
}
void showderv()
{
	cout<<"value of y is : "<<y<<endl;
}
};
int main()
{
	derv obj;
	obj.plus();
	obj.plus();
	obj.minus();
	obj.showbase();
	obj.showderv();
	
}
