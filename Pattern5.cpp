/*
55555
44444
33333
22222
11111
*/#include<iostream>
#include<conio.h>
using namespace std;
class Pattern5
{
	public:
		int lines=5;
		int numcount=5;
		int num=5;
		void pat5()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numcount;j++)
				{
					cout<<num;
				}
				cout<<endl;
				num--;
			}
		}
};
int main()
{
	Pattern5 p5;
	p5.pat5();
}

