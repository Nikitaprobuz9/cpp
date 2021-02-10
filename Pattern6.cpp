/*
54321
54321
54321
54321
54321
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern6
{
	public:
		int lines=5;
		int numcount=5;
		int num=5;
		void pat6()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numcount;j++)
				{
					cout<<num;
					num--;
				}
				cout<<endl;
				num=5;
			}
		}
};
int main()
{
	Pattern6 p6;
	p6.pat6();
}

