#include<iostream>
#include<conio.h>
using namespace std;
class result{
	private:
		char name[10];
		int rollno,m1,m2,m3;
		float per;
		public:
			void read()
			{
				cout<<"enter the name";
				cin>>name;
					cout<<"enter the rollno";
					cin>>rollno;
						cout<<"enter the marks";
						cin>>m1>>m2>>m3;
					
						
			}
			void calculate()
			{
				per=m1+m2+m3/3;
			}
			void display()
			{
					
				cout<<"name is : "<<name<<endl<<"rollno is : "<<rollno<<endl<<"marks are : "<<m1<<"\t"<<m2<<"\t"<<m3<<endl<<"The percentage is : "<<per<<endl;
			}
			
	
};
int main()
{
	result a;
	a.read();
	a.calculate();
	a.display();
}

