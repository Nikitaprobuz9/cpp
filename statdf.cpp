/*WAP of static data function*/
#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
	public:	
		static int p;	
	public:
		static void fun()
		{
			cout <<"Value of P: " << p << endl;
		}
};
int Demo :: p =10;
int main()
{
	Demo q;
	q.fun();
	return 0;
}
