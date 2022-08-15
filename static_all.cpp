



#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;//instance variable(Non Static)
	static int x;//class variable(static)
	//x is just declare here
	
	Demo(int a=10, int b=20)
	{
		cout<<"Inside Demo Constructor\n";
		this->i=a;
		this->j=b;
	}
	
	
	//void fun(Demo *this, int no)
	void fun(int no)
	{
		cout<<"Inside Non-Static Fun\n";
		cout<<" i is:"<<this->i<<"\n";
		cout<<" j is:"<<this->j<<"\n";
	}
	
	
	//static void gun( int value)
	static void gun(int value)
	{
		cout<<"Inside Static Gun\n";
		//cout<<" i is:"<<this->i<<"\n";Error
		//Error Because we cannot 
		//use this pointer inside static function
		//cout<<" j is:"<<this->j<<"\n";
	}
		
		
	~Demo()
	{
		cout<<"Inside Demo Destructor\n";
	}
	
};

int Demo::x=30;//x is defined here


int main()
{
	cout<<"Demo::x :-"<<Demo::x<<"\n";
	
	Demo::gun(11);
	
	return 0;
}