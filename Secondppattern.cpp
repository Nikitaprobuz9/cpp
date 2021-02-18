/*
ppppp
p   p
ppppp
p
pp
ppp
*/
#include <iostream>
using namespace std;
class name 
{
public:
	int line = 3;
	int charcount = 5;
	char value = 'p';
	int mid = ((line + 1) / 2);
	int line2 = 3;
	int charcount2 = 1;
	void fun() 
	{
		for (int i = 1; i <= line; i++) 
		{
			for (int j = 1; j <= charcount; j++) 
			{
				if (i == 1 || j == 1 || j == charcount || i == line) 
				{
					cout << value;
				} else 
				{
					cout << " ";
				}
			}
			cout << endl;
		}

		for (int k = 1; k <= line2; k++) 
		{
			for (int l = 1; l <= charcount2; ++l) 
			{
				cout << value;
				//value++;
			}
			cout << endl;
			charcount2++;

			//value='p';
		}
	}

private:
};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints 
	return 0;
}
