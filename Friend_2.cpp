
#include<iostream>
using namespace std;
//member  Function of a class can be friend
class Hello
{
	public:
	void fun();//Function Declared Here
	
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
};


void Hello:: fun()//function Defination
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
	
	
	return 0;
}