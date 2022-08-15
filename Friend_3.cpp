
#include<iostream>
using namespace std;
//member  Function of a class can be friend

class Hello
{
	public:
	void fun();//Function Declared Here
	void gun();
	
};

class Demo
{
	public:
	int i;
	
	protected:
	int j;
	
	private:
	int k;
	
	public:
		Demo()
		{
			i=10;
			j=20;
			k=30;
		}
		
	friend void Hello::fun();//friend function decalaration
	friend void Hello::gun();
	
};


void Hello:: fun()//function Defination
{
	Demo obj1;
	cout<<"i :"<<obj1.i<<"\n";
	cout<<"j :"<<obj1.j<<"\n";
	cout<<"k :"<<obj1.k<<"\n";
};

void Hello:: gun()//function Defination
{
	Demo obj1;
	cout<<"i :"<<obj1.i<<"\n";
	cout<<"j :"<<obj1.j<<"\n";
	cout<<"k :"<<obj1.k<<"\n";
};
	
int main()
{
	Hello hobj;
	hobj.fun();
	hobj.gun();
	
	
	return 0;
}