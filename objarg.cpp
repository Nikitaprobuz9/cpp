#include <iostream>
#include<conio.h>
using namespace std;

class Objarg
{
	private:
		int a;
	public:
		void set(int x)
		{
			a = x;
		}

		void mul(Objarg ob1, Objarg ob2)
		{
			a  = ob1.a*ob2.a;
		}

		void print()
		{
			cout<<"Value of A :  "<<a<<endl;
		}
};

int main()
{
	//object declarations
	Objarg d1;
	Objarg d2;
	Objarg d3;

	//assigning values to the data member of objects
	d1.set(10); 
	d2.set(20); 

	//passing object d1 and d2
	d3.mul(d1,d2);
	
	//printing the values
	d1.print();
	d2.print();
	d3.print();

	return 0;
}
