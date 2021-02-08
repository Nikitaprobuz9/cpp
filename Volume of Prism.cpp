/*WAP of prism*/
#include <iostream>
using namespace std;
int vtprism() 
{
	int v, b = 5, h = 4, l = 5;
	v = 0.5 * b * l * h;
	return (v);
}
int main() 
{
	int a = vtprism();
	cout << "volume of a Triangle Prism : " << a << endl; 
	return 0;
}
