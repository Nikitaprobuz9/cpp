/*WAP to find out total time in hours,minutes and seconds
Example:
T1:10hr 60min 60sec
T2:5hr 25min 25sec
--------------------
T:15hr 85min 85sec
(addition always start from right to left)
for sec: sec=sec1+sec2
            =60+25
			=85%60=25 
for min: min=min1+min2
            =60+25
			=85+(sec/60)
			=85+(85/60)
			=86.41%60=26.41
for hr: hrr=hr1+hr2
           =10+5
		   =15+(min/60)
		   =15+(86.41/60)     (mod ke pahale wali value)
		   =16.44
final output :16hr 25min 25sec		   			
*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int hour1,minute1,second1;
	int hour2,minute2,second2;
	int hour,minute,second;
	
	cout<<"***Enter first time***"<<endl;
	cout<<"Hours: "; 
	cin>>hour1;
	cout<<"Minutes: "; 
	cin>>minute1;
	cout<<"Seconds: ";
	cin>>second1;
	cout<<"***Enter second time***"<<endl;
	cout<<"Hours: ";
    cin>>hour2;
	cout<<"Minutes: "; 
	cin>>minute2;
	cout<<"Seconds: "; 
	cin>>second2;
     
	 //logic
	second=second1+second2;              
	minute=minute1+minute2+(second/60); 
	hour=hour1+hour2+(minute/60); 
	minute=minute%60;
	second=second%60;
	
	cout<<"Total Time is: "<<hour<<" hours "<<minute<<" minutes "<<second<< " seconds"<<endl;
    return 0;
}

