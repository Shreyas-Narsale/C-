



#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;//non -static charaterstics
	static int x;
	
	Demo()
	{
		cout<<"Inside Demo Constructor\n";
		i=10;
		j=20;
		
	}
	~Demo()
	{
		cout<<"Inside Demo Destructor\n";
	}
	
};

int Demo:: x=30;
int main()
{
	cout<<"Demo ::x"<<Demo::x<<"\n";
	Demo dobj1;
	Demo dobj2;
	
	cout<<" Size of dobj1:"<<sizeof(dobj1)<<"\n";
	cout<<" Size of dobj2:"<<sizeof(dobj1)<<"\n";
	
	cout<<"dobj1.i:"<<dobj1.i<<"\n";
	cout<<"dobj2.i:"<<dobj2.i<<"\n";
	
	return 0;
}