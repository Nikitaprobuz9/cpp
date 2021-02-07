/*WAP to find out the volume of a cube*/
#include <iostream>
using namespace std;
int vcube() 
{
	int v, a = 5;
	v = a * a * a;
	return (v);
}
int main() 
{
	int v = vcube();
	cout << "volume of a cube : " << v << endl; // prints !!!Hello World!!!
	return 0;
}
