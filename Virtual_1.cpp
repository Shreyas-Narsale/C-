#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
};

class Dervied: public Base
{
	public:
		int i,j;	
	
};


int main()
{
	Base bobj;//Static Memory Allocation
	Dervied dobj;
	
	Base *bPtr=new Base();//Dynamic Memory Allocation
	Dervied *dPtr=new Dervied();
	
	return 0;
}