#include<iostream>
using namespace std;
const int item=2;
class shop
{
	int price[item];
	public:
		void data();
		void total();
};
void shop::data()
{
	for(int i=0;i<item;i++)
	{
		cout<<"enter price of item"<<i+1<<":";
		cin>>price[i];
	}
}
int main()
{
	shop s1;
	s1.data();
	
}
