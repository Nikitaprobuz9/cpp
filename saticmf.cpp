/*WAP of static data member*/
#include <iostream>
using namespace std;
class Demostatic
{
	public:	
		static int a;
		int b;
};
int Demostatic :: a =50,b=10; //value initialise ouside the class

int main()
{
    
	cout<<"The value of static A : "<<Demostatic::a<<endl;
	cout<<"The value of non-static B :"<<b;
	return 0;
}
