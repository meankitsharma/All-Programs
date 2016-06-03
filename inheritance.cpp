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
			}
			void plus()
			{
				x++;
			}
			void show()
			{
				cout<<"the value of x  is : "<<x<<endl;
			}
};
class derv:public base
{
public:
derv()
{
	cout<<"i am in derv"<<endl;
	x=0;
}
void minus()
{
	x--;
}
};
int main()
{
	derv obj;
	obj.plus();
	obj.plus();
	obj.minus();
	obj.show();
	
}
