/*Assingment*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	public:
		int id;
		string name,address;
		void set()
		{
			cout<<"Enter the student id: "<<endl;
			cin>>id;
			cout<<"Enter the student name: "<<endl;
			cin>>name;
			cout<<"Enter the student address: "<<endl;
			cin>>address; 
		}
		void dis()
		{
			cout<<"The student id: "<<id<<endl;
		   	cout<<"The student name: "<<name<<endl;
		   	cout<<"The student address: "<<address<<endl;
		}
};
class Exam:public Student
{
	public:
	string paper1,paper2;
	void setpaper()
	{ 
	    cout<<"Enter the name of paper1: "<<endl;
	    cin>>paper1;
	    cout<<"Enter the name of paper2: "<<endl;
	    cin>>paper2;
	}
	void dispaper()
	{
	   	cout<<"The name of paper1: "<<paper1<<endl;
	    cout<<"The name of paper2: "<<paper2<<endl;
	}
};
class Sport
{
	public:
		int sptmarks1,sptmarks2;
		void setmrk()
		{
			cout<<"Enter the marks obtain in paper1: "<<endl;
			cin>>sptmarks1;
			cout<<"Enter the marks obtain in paper2: "<<endl;
			cin>>sptmarks2;
		}
		void dismrk()
		{
		   cout<<"The student obtain marks in paper1 : "<<sptmarks1<<endl;
		   cout<<"The student obtain marks in paper2 : "<<sptmarks2<<endl;	
		}
};
class Result:public Exam,public Sport
{
	public :
		void totalmarks()
		{
			int totalmark;
			cout<<"Totalmarks obtain in both subjects is: "<<(sptmarks1+sptmarks2)<<endl;
			
		}
};
int main()
{
	Result r1;
	r1.set();
	r1.setpaper();
	r1.setmrk();
	cout<<"****Result******"<<endl;
	r1.dis();
	r1.dispaper();
	r1.dismrk();
	cout<<"---------------------"<<endl;
	r1.totalmarks();
}
