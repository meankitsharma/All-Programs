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
			data add(data obj){
				data tempobj;
				tempobj.d=obj.d+d;
				return tempobj;
			}
			void show()
			{
				cout<<d<<endl;
			}
};
int main()
{
	data d1(12),d2(24),d3;
	d3=d1.add(d2);
	d3.show();
}
