#include<iostream>
#include<conio.h>
using namespace std;
class IncreDecre
{
        int a, b;
     public:
        void accept()
        {
                cout<<"Enter Two Numbers : "<<" "<<" "<<endl;
                cin>>a;
                //cout<<" ";
                cin>>b;
        }
        void operator--() //Overload Unary Decrement
        {
                a--;
                b--;
        }
        void operator++() //Overload Unary Increment
        {
                a++;
                b++;
        }
        void display()
        {
                cout<<"A : "<<a<<endl;
                cout<<"B : "<<b<<endl;
        }
};
int main()
{
        IncreDecre id;
        id.accept();
        --id;
        cout<<"After Decrementing : "<<endl;
        id.display();
        ++id;
        ++id; //double increment
        cout<<"After Incrementing : "<<endl;
        id.display();
        return 0;
}
