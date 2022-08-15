
#include<iostream>
using namespace std;
//Whole class can be friend
class Hello
{
	public:
	class Demo obj;
	void fun();//Function Declared Here
	void gun();
	friend class Demo;
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
		
	friend class Hello;
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