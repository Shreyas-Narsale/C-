

//Paramtersised Consructor with Default Values

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
	
	
};

int main()
{
	Demo obj1;//Demo obj(10,20)
	Demo obj2(11);//Demo obj(11,20)
	Demo obj3(11,21);//Demo obj(11,21)
	
	
	
	
	return 0;
}