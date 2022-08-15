#include<iostream>
using namespace std;
//Solved DrawBack 
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
	Base *bPtr=new Dervied();//UpCasting
	
	bPtr->fun();//Inside Dervied fun
	bPtr->gun();//Inside Base fun
	//bPtr->sun();//Error
	
	cout<<"Size of Base:"<<sizeof(Base)<<"\n";//16
	cout<<"Size of Dervied:"<<sizeof(Dervied)<<"\n";//24
	cout<<"Size of Dervied:"<<sizeof(Dervied)<<"\n";//24
	return 0;
}