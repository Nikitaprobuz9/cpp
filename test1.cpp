/*WAP to print sum of numbers using function overloading and switch case*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
int sum(int a,int b,int c,int d);
int sum(int a,int b,int c,int d,int e);
int m,n,o,p;
int sum(int a,int b)
{
	return(a+b);
}
int sum(int a,int b,int c)
{
	return(a+b+c);
}
int sum(int a,int b,int c,int d)
{
	return(a+b+c+d);
}
int sum(int a,int b,int c,int d,int e)
{
	return(a+b+c+d+e);
}
int main()
{
	int n,a[5];
	char ch='y';
	int count=0;
	int s;
	while(ch=='y'||ch=='Y')
	{
		cout<<"enter the numbers"<<endl;
		cin>>n;
		cout<<"press y to continue";
		cin>>ch;
		a[count]=n;
		count++;
	}
	for(int i=0;i<=count-1;i++)
	{
		cout<<"entered number is:"<<" "<<a[i]<<endl;
	}
	cout<<"the count is:"<<" "<<count<<endl;
	switch(count)
	{
		case 2:
			m=sum(a[0],a[1]);
			cout<<"the sum of two numbers is:"<<" "<<m<<endl;
			break;
		case 3:
			n=sum(a[0],a[1],a[2]);
			cout<<"the sum of three numbers is:"<<" "<<n<<endl;
			break;
		case 4:
			o=sum(a[0],a[1],a[2],a[3]);
			cout<<"the sum of four numbers is:"<<" "<<o<<endl;
			break;
		case 5:	
		    p=sum(a[0],a[1],a[2],a[3],a[4]);
		    cout<<"the sum of five numbers is:"<<" "<<p<<endl;
			break;
	}
}
