#include <iostream>
using namespace std;
void Surface_of_cuboid(int l, int b, int h) 
{
	int s;
	s = 2 * (l * b + b * h + h * l);
	cout << "Surface Area of a cuboid is : " << s << endl;
}
int main() 
{
	Surface_of_cuboid(5,3,2);
}
