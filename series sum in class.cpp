#include<iostream>
#include<conio.h>
using namespace std;
class add{
	private:
		float x;
		int n;
		public:
			void read(){
			
			cout<<"enter the value of x ";
			cin>>x;
				cout<<"enter the value of n ";
				cin>>n;
			}
				void sum()
				{
				float lower=1.0,upper=1.0,sum=0;
					for(int i=1;i<=n;i++)
					{
						lower*=i;
						upper*=x;
						sum+=upper/lower;
					}
					cout<<"The sum is : "<<sum<<endl;
				}
			
};
int main()
{
	add s;
	s.read();
	s.sum();
}
