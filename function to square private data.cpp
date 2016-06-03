#include<iostream>
#include<conio.h>
using namespace std;
class data{
	private:
		int d;
		public:
			data(){
				cout<<"i am a constructor without argument"<<endl;
				d=0;
			}
			data(int dt)
			{
				cout<<"i am a constructor with one argument"<<endl;
				d=dt;
			}
			int square1()
			{
				int temp;
				 temp=d*d;
			
			}
			void square2(int obj)
			{
				d=obj*obj;
			}
			
			void show()
			{
				cout<<d<<endl;
			}
};
int main()
{
	data d1(12),d2,d3;
    d1.square1();
	d3.square2(12);
	d2.show();
	d3.show();
}
