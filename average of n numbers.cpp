#include<iostream>
#include<conio.h>
using namespace std;
class avg{
	private:
		int n;
		public:
			void add(int m)
			{
				n=m;
				int sum=0,i,avg;
				for(i=1;i<=n;i++)
				{
					sum=sum+i;
				}
				cout<<"the sum is : "<<sum<<endl;
				avg=sum/n;
				cout<<"and the average is : "<<avg;
				
			}
		};
		int main()
			{
				avg s;
				s.add(5);
				
			}
