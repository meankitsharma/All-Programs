#include<iostream>
#include<conio.h>
using namespace std;
class fibo{
	private:
		int f;
		public:
			void add(int m)
			{
				int n,t1=0,t2=1,t,i;
				n=m;
				cout<<t2<<"\t";
				for(i=0;i<n;i++)
				{
					t=t1+t2;
					cout<<t<<"\t";
					t1=t2;
					t2=t;
					
				}
			}
};
int main()
{
	fibo f;
	f.add(10);
}
