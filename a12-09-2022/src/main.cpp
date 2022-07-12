#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fstream>
#include <employee.h>
using namespace std;
int main()
{
	Employee E;
	int pid,n;
	cout<<"\n enter no.of recored you want:";
	cin>>n;
	pid=fork();

	if(pid ==0)
	{
		if(!f)
		{
			cout<<"unable to open file"<<endl;
		}
		cout<<"\n child process start";                                                                                                                                               cout<<"get the details of employee"; 
		for(int i=0; i<n; i++)
		{
		E[i].getdata();
		f.read(reinterpret_cast<char *>(&E[i],sizeof(Employee));
	        } 
		f.close();
		cout<<"\n child process ended";
	}
	else
	{
		wait((int *)0);
		cout<<"\n parent process start";
		cout<<"\n display the  details of employee";
		for(int i=0 ;i<n;i++)
		{

		    E[i].dispdata();
		    f.write(reinterpret_cast<char*>(&E[i],sizeof(Employee));
		} 
		f.close();
               cout<<"\n parent process ended";
	}
               return 0;
}
