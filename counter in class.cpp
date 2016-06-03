#include<iostream>
#include<conio.h>
using namespace std;
class counter{
	private:
		int c;
		public:
			counter(){
			c=0;
			}
			void plus()
			{
				c++;
				
			}
			void minus(){
			c--;
			}
			void show()
			{
				cout<<c<<endl;
			}
};
int main()
{
counter c1,c2;
c1.plus();
c1.plus();
c2.minus();
c1.plus();
c2.minus();
c2.minus();
c1.minus();
c2.plus();
c1.show();
c2.show();
}
