#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
	
	virtual void fun()
	{
		cout<<"Inside Base fun\n";
	}
	virtual void gun()
	{
		cout<<"Inside Base gun\n";
	}
	void sun()
	{
		cout<<"Inside Base sun\n";
	}
	virtual void run()
	{
		cout<<"Inside Base run\n";
	}
};

class Dervied: public Base
{
	public:
		int i,j;
	
	void fun()
	{
		cout<<"Inside Dervied fun\n";
	}
	virtual void gun()
	{
		cout<<"Inside Dervied gun\n";
	}
	void sun()
	{
		cout<<"Inside Dervied sun\n";
	}
	virtual void mun()
	{
		cout<<"Inside Dervied mun\n";
	}
	
};


int main()
{
	Base *bPtr=new Dervied();
	
	bPtr->fun();//Inside Dervied fun
	bPtr->gun();//Inside Dervied gun
	bPtr->sun();//Inside Base sun
	bPtr->run();//Inside Base run
	//bPtr->mun();//Error
	//mun is not inside Base so Error
	
	return 0;
}