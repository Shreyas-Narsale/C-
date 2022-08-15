



#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;//instance variable(Non Static)
	static int x;//class variable(static)
	
	
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
		cout<<" x is:"<<Demo::x<<"\n";
		cout<<"End of Non-Static Fun\n";
	}
	
	
	//static void gun( int value)
	static void gun(int value)
	{
		cout<<"Inside Static Gun\n";
		//cout<<" i is:"<<this->i<<"\n";Error
		cout<<" x is:"<<Demo::x<<"\n";
		cout<<"End of Static Gun\n";
		
	}
		
		
	~Demo()
	{
		cout<<"Inside Demo Destructor\n";
	}
	
};

int Demo::x=30;


int main()
{
	cout<<"Demo::x  :"<<Demo::x<<"\n";
	
	Demo::gun(11);
	
	Demo obj(11);
	obj.fun(21);//fun(&obj,21);
	cout<<"Size of obj:"<<sizeof(obj)<<"\n";
	cout<<" obj.i :"<<obj.i<<"\n";
	cout<<" obj.j :"<<obj.j<<"\n";
	
	//Avoid below static function call Not Good Programming Practice
	obj.gun(11);//Internally Demo:: gun(11)
	
	return 0;
}