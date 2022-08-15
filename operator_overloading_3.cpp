
using namespace std;

#include<iostream>

class Demo
{
	public:
	int x;
	int y;
	
	public:
	Demo(int i=20, int j=20)
	{
		x=i;
		y=j;
	}
	friend bool operator == (Demo op1, Demo op2);
	
};
bool operator ==(Demo op1, Demo op2)
{
	if((op1.x==op2.x)&&(op1.y==op2.y))// ==(obj1,obj2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator >(Demo op1, Demo op2)
{
	if((op1.x>op2.x)&&(op1.y>op2.y))// ==(obj1,obj2)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	Demo obj1(11,21);
	Demo obj2(11,21);
	
	if(obj1==obj2)
	{
		cout<<"Objects are same\n";
	}
	else
	{
		cout<<"Objects are different\n";
	}
	return 0;
}