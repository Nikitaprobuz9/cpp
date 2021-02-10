/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern3
{
	public:
		int lines=5;
		int charcount=5;
		char value='A';
		void pat3()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=charcount;j++)
				{
					cout<<value;
					value++;
				}
				cout<<endl;
				value='A';
			}
		}
};
int main()
{
	Pattern3 p3;
	p3.pat3();
}

