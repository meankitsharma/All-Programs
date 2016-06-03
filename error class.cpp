#include<iostream>
#include<conio.h>
using namespace std;
class test{
	private: int a;
	protected: int b;
	public: int c;
};
class derv1:public test
{
	void display()
	{
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}
};
class derv2:private test
{
	void display()
	{
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;

}
};
int main()
{
	derv1 d1;
	derv2 d2;
	
	cout<<d1.a<<endl;
	cout<<d1.b<<endl;
	cout<<d1.c<<endl;
	cout<<d2.a<<endl;
	cout<<d2.b<<endl;
	cout<<d2.c<<endl;
}
