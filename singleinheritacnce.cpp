/*WAP of single level inheritance */
#include<iostream>
#include<conio.h>
using namespace std;
class Father
{
	public :
		int house=2;
		double cash=50000000.0;
		void faProperty()
		{
			cout<<"Father Property:"<<endl;
			cout<<"House: "<<house<<endl;
			cout<<"Cash: "<<cash<<endl;
		}
};
class Son:public Father
{
	public:
	    int bike=1;
	public:    
	    void sonProperty()
	    {
	    	cout<<"Son Property: "<<endl;
	    	cout<<"Bike: "<<endl;
			cin>>bike;
		}
};
int main()
{
	Father f1;
	f1.faProperty();
	cout<<"--------------"<<endl;
	cout<<"single level inheritance starts: "<<endl;
	cout<<"--------------"<<endl;
	Son s1;
	s1.faProperty();
	s1.sonProperty();
	return 0;
}
