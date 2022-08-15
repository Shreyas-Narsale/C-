#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		
	void gun()//gun Defination
	{
		cout<<"Inside Demo gun\n";
	}
	void fun()// Fun Defination
	{
		cout<<"Inside fun\n";
	}
	
	
};

class Hello: public Demo
{
	public:
		int x,y;
		
	void sun()//sun Defination
	{
		cout<<"Inside sun\n";
	}
	void gun()// gun redefination
	{
		cout<<"Inside Hello gun\n";
	}
	
};


int main()
{
	Hello hobj;
	hobj.gun();//inside Hello gun
	
	return 0;
}