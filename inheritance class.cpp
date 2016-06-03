#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class person{
	private:
		char name[20];
		int age;
		public:
			person(char n[20],int a)
			{
				strcpy(name,n);
				age=a;
			}
			void display()
			{
				cout<<"Name : "<<name<<endl<<"age : "<<age;
				
			}
};
class student:public person
{
	private:
		float perc;
		public:
			student(char n[20],int a,float p):person(n,a)
			{
				perc=p;
			}
			void display()
			
		{
			cout<<"student"<<endl;
			 person:: display();
			cout<<"percentage is : "<<perc<<endl;
		}
};
class teacher:public person
{
	private:
		int sal;
		public:
			teacher(char n[20],int a,float s):person(n,a)
			{
				sal=s;
			}
			void display()
			{
				cout<<"teacher"<<endl;
				 person:: display();
				cout<<"salary is : "<<endl;
			}
};
int main()
{
	student s("ankit",18,99.9);
	teacher t("piyush",30,50.0);
	s.display();
	t.display();
}
