/*Add function*/
#include <iostream>
using namespace std;
void add(int x, int y);
int main() 
{
	add(20, 20);
}
void add(int x, int y) 
{
	int result;
	result = x + y;
	cout << "Sum of " << x << " and " << y << " is " << result << endl;
}

