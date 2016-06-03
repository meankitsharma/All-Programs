#include<iostream>
#include<conio.h>
using namespace std;
class over{
	public:
	int add(int x,int y)
	{
		return x+y;
	}
	int add(int x,int y,int z)
	{
		return x+y+z;
	}
	double add(double x,double y)
	{
		return x+y;
	}
};
int main()
{
	over o;
    cout<<o.add(10,25)<<endl;
	cout<<o.add(10,25,10)<<endl;
	cout<<o.add(25.5,10.5)<<endl;
	}
