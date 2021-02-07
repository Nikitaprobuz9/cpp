/*WAP object s a return type*/
#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
   public:
      double salary1,salary2;
};
Employee createEmployee() 
{
    Employee e;
    e.salary1 = 90.0000;
    e.salary2 = 78.0000;
    cout<<"The Salary of employee one is:"<<e.salary1<<endl;
    cout<<"The Salary of employee two is:"<<e.salary2<<endl;
    return e; //return obj
}
int main() 
{
    Employee e1;
    e1 = createEmployee();//call function
    return 0;
}
