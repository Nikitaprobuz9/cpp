/*Pure virtual function*/
#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
	public:
		virtual void s()=0;  //pure virtual 
};
class Test:public Sample
{
	public:
		void s()
		{
			std::cout<<"This is pure virtual function: "<<endl;
		}
};
int main()
{
	Sample *s1;
	Test t1;
	s1=&t1;
	s1->s();
	return 0;	
}
