#include<iostream>
#include<conio.h>
using namespace std;
class data{
	private:
		int t;
		public:
			data()
			{
				cout<<"i am a constructor without an argumemt"<<endl;
				t=0;
			}
			data(int d)
			{
				cout<<"i am a constructor with one argumennt"<<endl;
				t=d;
			}
				void show();
			void add(data,data);
		
		
};
	void data :: add(data x,data y)
			{
				t=x.t+y.t;
			}
			void data :: show()
			{
				cout<<t<<endl;
			}
int main(){

data d1(12),d2(24),d3;
d3.add(d1,d2);
d3.show();
}
