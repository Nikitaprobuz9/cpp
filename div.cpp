/*WAP of division*/
#include <iostream>
using namespace std;
int division(int a, int b) 
{
	int z = a / b;
	return (z);
}
int main() 
{
	int x, y;
	cout << "Enter a value : " << endl; 
	cin >> x;
	cout << "Enter b value : " << endl; 
	cin >> y;
	int r = division(x, y);
	cout << "Div value is : " << r << endl;
	return 0;
}
