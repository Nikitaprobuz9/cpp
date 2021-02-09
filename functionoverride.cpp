#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	public:
		void putdata()
		{
			cout<<"The name of the student is :Kartik "<<endl;
		}
};
class Teacher: public Student
{
	public:
		void putdata()
		{
			cout<<"The name of the teacher is :Anand "<<endl;
		}
};
int main()
{
	Teacher t1;
	t1.putdata();
	t1.Student::putdata(); 
}
