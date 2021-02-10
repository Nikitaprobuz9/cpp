/*
1
12
123
1234
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern9
{
	public:
		int lines=4;
		int numcount=1;
		int num=1;
		void pat9()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numcount;j++)
				{
					cout<<num;
					num++;
				}
				cout<<endl;
				numcount++;
		        num=1;
		;
			}
		}
};
int main()
{
	Pattern9 p9;
	p9.pat9();
}

