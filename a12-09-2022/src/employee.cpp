#include <iostream>
#include <employee.h>
using namespace std;
void Employee::getdata()
{
	cout<<"enter the employee id:";
	cin>>empid;
	cout<<"enter the employee name:";
	cin>>empname;
	cout<<"enter the employee allowance:";
	cin>>allowance;
}
void Employee::dispdata()
{
	cout<<endl<<empid<<"\t"<<empname<<"\t"<<bsalary<<"\t"<<allowance;
}

