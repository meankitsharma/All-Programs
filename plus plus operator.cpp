#include<iostream>
#include<conio.h>
using namespace std;
class data{
	private:
		int d;
		public:
			data()
			{
			d=0;cout<<"c"<<endl;
			}
			int show()
			{
				cout<<d<<endl;
			}
			void operator ++ ()
			{
				d++;cout<<"op"<<endl;
			}
};
int main()
{
	data d1,d2;
	d1.show();
	d2.show();
	++d1;
    ++d1;
	++d2;
	d1.show();
	d2.show();
}
