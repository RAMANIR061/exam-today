#include <iostream>
using namespace std;
class Employee
{
	private:
	    int empid;
            char empname[20];
            int bsalary;
            int allowance;
        public:
           Employee(){}
	   Employee(int empid,char empname,int bsalary,int allowance){
		   bsalary =1000;
	           } 
           void getdata();
	   void dispdata();
};
                 		   
