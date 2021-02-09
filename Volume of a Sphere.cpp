#include <iostream>
using namespace std;
void sphere();
void sphere() 
{
	float r,Volume_of_Sphere;
	cout << "Enter the radius of sphere " << endl;
	cin>>r;
	Volume_of_Sphere=1.33*3.14*r*r*r;
	cout<<"Volume_of_Sphere is : "<<Volume_of_Sphere<<endl;

}
int main() 
{
	sphere();
}
