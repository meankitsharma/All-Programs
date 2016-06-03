#include<iostream>
#include<conio.h>
using namespace std;
class testClass{
	private:
	
			int data;
	public:
	testClass(int d)
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
	testClass t1(10),t2(25);
	t1.show();
	t2.show();
}
