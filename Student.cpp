#include<iostream>
using namespace std;
#include<conio.h>
class Student
{
	public:
	int rollno;
	char name;
	int m1,m2,m3;
	
	double obtainmarks()
	{
		return m1+m2+m3;
	}
	double percent()
	{
		return m1+m2+m3*100/300;
	}
};
int main()
{
	Student s1;
	s1.rollno=1;
	s1.name='abc';
	s1.m1=45;
	s1.m2=50;
	s1.m3=60;
	
	cout<<"total obtain marks:"<<s1.obtainmarks()<<endl;
	cout<<"obtain percent:"<<s1.percent()<<endl;
	
	return 0;
}
