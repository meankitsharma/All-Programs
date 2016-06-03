#include<iostream>
#include<conio.h>
using namespace std;
class testclass{
	private:
		int t;
		public:
			testclass()
			{
				cout<<"i am a constructor"<<endl;
				
			}
			~testclass()
			{
				cout<<"i am a destructor"<<endl;
				
		}
		void set(int d)
		{
			t=d;
		}
		void show()
		{
			cout<<t<<endl;
		}
};
int main()
{
	testclass t1,t2;
	t1.set(12);
	t2.set(24);
	t1.show();
	t2.show();
}

