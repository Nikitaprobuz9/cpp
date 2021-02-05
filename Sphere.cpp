#include<iostream>
using namespace std;
#include<conio.h>
class Sphere
{
	public:
		int r,s;
		void surface_of_sphere()
        {
			cout<<"Enter the Radius of Sphere : "<<endl;
			cin>> r;
			s=4*3.14*r*r;
			cout<<"Radius of Sphere is : "<<s<<endl;
        }
        void surf()
        {
        	r=4;
        	s=4*3.14*r*r;
        	cout<<"--------------------"<<endl;
        	cout<<"radius of sphere is:"<<s<<endl;
		}
		void surfsphere(int x)
		{
			r=x;
			s=4*3.14*r*r;
			cout<<"-------------------"<<endl;
			cout<<"radius of sphere is:"<<s<<endl;
		}
		void set()
		{
			r=3;
		}
		void dis()
		{
			s=4*3.14*r*r;
			cout<<"--------------------"<<endl;
			cout<<"radius of sphere is:"<<s<<endl;
		}
};
int main() 
{
	Sphere s1,s2,c1,c2;
	s1.surface_of_sphere();
	s2.surf();
	c1.surfsphere(10);
	c2.set();
	c2.dis();
}
