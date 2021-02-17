#include<iostream>
#include<conio.h>
using namespace std;

	template<class t,class n>
	t fun(t x,n y)
	{
		return(x+y);
	}


int main()
{
	cout<<fun(2.3,5);
}
