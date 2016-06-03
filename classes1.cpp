#include<iostream>
#include<conio.h>
using namespace std;
class testClass{
	private:
		int data;
		public:
			void set(int d)
			{
				data=d;
			}
			void show()
			{
	
		cout<<data<<endl;
	}
};
int main()
{
	testClass t1,t2;
	t1.set(12);
	t2.set(24);
	t1.show();
	t2.show();
}
