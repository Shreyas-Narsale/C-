
//abstract namespace
#include<iostream>
using namespace std;

int main()
{
	int Input =0;
	//        0    1    2    3    4     5    6
	enum Days{Sun, Mon, Tue, Wed, Thur, Fri, Sat};
	
	enum Days obj;
	
	obj=Tue;
	
	cout<<obj<<"\n";
	cout<<sizeof(obj)<<"\n";
	
	enum Gender{Female=1, Male=2};
	
	//instead of enum we can use switch in programming
	cout<<"Enter Your Gender\n";
	cout<<"1: Female\n";
	cout<<"2: male\n";
	cin>>Input;
	
	switch (Input)
	{
		case Female:
		cout<<"Tax free limit is 3,00,000\n";
		break;
		
		case Male:
		cout<<"Tax free limit is 2,50,000\n";
		break;
		
		default:
		cout<<"Invalid Gender";
	}
	
	
	return 0;
}