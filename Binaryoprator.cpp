/*Binary oprator +*/
#include<iostream>
#include<conio.h>
using namespace std;
class Name
{
	public:
		string name1,name2;
		void set(string x,string y)
		{
			name1=x;
			name2=y;
		}
	    void operator +(Name cn2)
	    {
	    	string name3=name1+cn2.name1;
	    	string name4=name2+cn2.name2;
	    	cout<<name3<<name4<<endl;
		}
		void dis()
		{
			cout<<name1<<name2<<endl;
		}
};
int main()
{
	Name n1,n2;
	n1.set("Dinga","Bunga");
	n2.set("Dingi","Bungi");
	n1+n2;
}
