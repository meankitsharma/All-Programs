#include<iostream>
#include<conio.h>
#define size 3
using namespace std;
class mat{
	private:
		int a[size][size];
		public:
			void read()
			{
				int i,j;
				for(i=0;i<size;i++)
				{
					for(j=0;j<size;j++)
					{
						cin>>a[i][j];
						
					}
				}
			}
			void show()
			{
				int i,j;
				for(i=0;i<size;i++)
				{
					for(j=0;j<size;j++)
					{
						cout<<a[i][j]<<'\t';
						
					}
					cout<<endl;
				}
			}
			mat operator*(mat t)
			{
				mat temp;
				
				for(int i=0;i<size;i++)
				{
					for(int j=0;j<size;j++)
					{
						temp.a[i][j]=0;
						for(int k=0;k<size;k++)
						{
							temp.a[i][j]+=a[i][k]*t.a[k][j];
						}
						
						
					}
				}
				return temp;
			}
};
int main()
{
	mat m1,m2,m3;
	m1.read();
	m1.show();
	m2.read();
	m2.show();
	m3=m1*m2;
	m3.show();
}
