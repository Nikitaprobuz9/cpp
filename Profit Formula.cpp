/*WAP to find out the profit*/
#include <iostream>
using namespace std;
void profit(int a, int b) 
{
	int profit;
	profit = a - b;
	cout << "Profit is : " << profit << endl;
}
int main() 
{
	profit(45,20);
}
