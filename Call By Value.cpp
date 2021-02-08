/*Sawp wala program by using call by value*/
#include <iostream>
using namespace std;
void swap(int *x, int *y) 
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a = 100;
	int b = 200;
	cout << "Before swap value of a : " << a << endl;
	cout << "Before swap value of b : " << b << endl;

	swap(a, b);

	cout << "After swap value of a : " << x << endl;
	cout << "After swap value of b : " << y << endl;

}
