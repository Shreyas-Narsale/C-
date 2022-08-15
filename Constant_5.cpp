
#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;
		
		//Hardcoede j 20
		Demo(): j(20) //Member Inilization
		{
			i=10;
			
		}
};

int main()
{
	Demo dobj;
	cout<<"i :"<<dobj.i<<"\n";
	cout<<"j :"<<dobj.j<<"\n";

	return 0;
}