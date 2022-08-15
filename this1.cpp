



#include<iostream>
using namespace std;

class Demo
{
public:
	int x;
	int y;//Charaterstics
	
	Demo(int a=10, int b=20)//Paramtersised Consructor with Default Values
	{
		x=a;
		y=b;
	}
	//internally - void fun(Demo *this, int no)
	void fun(int no)//1000
	{
		cout<<"Inside Fun\n";
	}
	
};

int main()
{
	
	Demo obj(11,21);
	
	obj.fun(51);//internally fun(&obj,51)
	
	
	return 0;
}