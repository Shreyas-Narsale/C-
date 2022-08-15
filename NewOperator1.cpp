
//Dynamic Memory New
#include<iostream>
using namespace std;
class Demo
{
	public:
	int x;
	int y;
	
	Demo()
	{
		cout<<"Default Constructor\n";
	}
	~Demo()
	{
		cout<<"Destructor\n";
	}
	
	void fun()
	{
		cout<<"Inside Fun\n";
	}
	
};

int main()
{
	Demo dobj;   // static object creation
	
	Demo *ptr=NULL;
	
	ptr=new Demo;   //  dynamic object creation
	
	dobj.fun();//direct accessing operator
	
	ptr->fun();//Indirect accessing operator
	
	delete ptr;//if we dont use delete for ptr then compiler doesnt call desructor of ptr
	
	return 0;
}