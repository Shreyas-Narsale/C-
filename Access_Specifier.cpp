



#include<iostream>
using namespace std;

class Demo
{
	int i;//Default Specifier - Private Specifier 
	
	public:
	int x;
	
	private:
	int y;
	
	public:
	Demo()//Constructor Should Be Inside Public
	{
		x=10;
		y=20;
		i=30;
	}
	
	void fun()
	{
		cout<<"Inside Public Fun\n";
		y++;
		cout<<y<<"\n";
		gun();
	}
	
	private:
	void gun()
	{
		cout<<"Inside Private Gun\n";
		cout<<y;
	}
	
};

int main()
{
	Demo dobj;
	cout<<dobj.x<<"\n";//Allowed
	//cout<<dobj.y<<"\n";//Gives Error Trying to Access Private Data
	//cout<<dobj.i<<"\n";//Gives Error Trying to Access Private Data
	dobj.fun();//Allowed
	//dobj.gun();//Gives Error Trying to Access Private Data
	
	
	dobj.x=10;//Allowed
	cout<<"x is:"<<dobj.x<<"\n";
	//dobj.y=20;//Not Allowed
	
	
	
	return 0;
}