#include <iostream>
#include "classroom.h"
#include <unistd.h>
using namespace std;
int main(int argc ,char *argv[])
{
	n=fork();
	     if(n>0){

	           for(i=0;i<10;i++){
                   if(i % 2==0) 
			    sumeven =sumeven +i;
		             }

		    cout<<"parent process\n";
		    cout<<" sum of even no.is "<< sumeven<<endl;
	             }
	       
            else{
		    for(i=0;i<10;i++){
		    if(i %2!=0)
			    sumodd=sumodd+i;
		            }
		    cout<<"child process\n";
		    cout<<"\n sum of odd no.is"<<sumodd <<endl;
	    }
	    return 0;
}

