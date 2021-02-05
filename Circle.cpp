#include<iostream>
using namespace std;
#include<conio.h>
class Circle
{
	public:
	int r=4;
    float pi=3.14;	
    
    double area()
    {
    	return pi*r*r;
	}
};
int main()
{
	Circle c1;
	cout<<"area of a circle:"<<c1.area()<<endl;
}











