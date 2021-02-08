/*WAP to calculate the area of triangle*/
#include <iostream>
using namespace std;
int triangle() 
{
	int r, b = 12, h = 5;
	r = 0.5 * b * h;
	return (r);
}
int main() 
{
	int a =triangle();
	cout << "Area of triangle is : " << a << endl; // prints !!!Hello World!!!
	return 0;
}
