/*
ABCDE
ABCD
ABC
AB
A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern78
{
	public:
		int lines=5;
		int charcount=5;
		char value='A';
	void pat78()
	{
	  for(int i=1;i<=lines;i++)
	  {
	     for(int j=1;j<=charcount;j++)
		 {
		 	cout<<value;
		 	value++;
		 }
		 cout<<endl;
		 charcount--;
		 value='A';	
	  }	
	}	
};
int main()
{
	Pattern78 p78;
	p78.pat78();
}
