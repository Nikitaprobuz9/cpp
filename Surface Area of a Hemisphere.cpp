/*WAP to find out surface of a hemisphere*/
#include <iostream>
using namespace std;
//void hemisphere(int r);
void hemisphere(float r)
{
	float s;
	s = 4 * 3.14 * r * r;
	cout << "Surface Area of a Hemisphere is : " << s << endl;
}
int main() 
{
	hemisphere(10);
}
