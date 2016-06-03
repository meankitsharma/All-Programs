#include<stdio.h>
struct student
{
	int rollno;
	char name[20],college[50];

	struct date
	{
		int dd,mm,yy;
	}dob;
};
int main()
{
	student s={ 10,"ankit","nit surat",{10,04,1993}};

	printf("%d\t%s\t%s\ndate of birth : %d/%d/%d",s.rollno,s.name,s.college,s.dob.dd,s.dob.mm,s.dob.yy);

}
