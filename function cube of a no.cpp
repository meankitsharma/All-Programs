#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"please enter the no. " ;
cin>>x;

int cube(int);
y=cube(x);
cout<<"\n The cube of a given no. is  "<< y;
cin.get();
cin.get();
}
int cube(int a)
{
int b;
b=a*a*a;
return b;
}