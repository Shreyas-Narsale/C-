
#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
	
	//1000
	void fun()//Non-Virtual Concreate Function
	{
		cout<<"Inside Base fun\n";
	}
	
	//2000
	virtual void gun()//Virtual Concreate Function
	{
		cout<<"Inside Base gun\n";
	}
	
	//3000
	virtual void sun()//Virtual Concreate Function
	{
		cout<<"Inside Base sun\n";
	}
	
	//No memory , No Address(Abstract Function has no Memory)
	virtual void run()=0;//Abstract Function
	
};

class Dervied: public Base
{
	public:
		int i,j;
		
	//4000
	void fun()//redefination Concreate Function
	{
		cout<<"Inside Dervied fun\n";
	}
	
	//5000
	virtual void gun()//Overriding Concreate Function
	{
		cout<<"Inside Dervied gun\n";
	}
	
	//6000
	void run()//Concreate Function
	{
		cout<<"Inside Dervied run\n";
	}
	
};


int main()
{
	//Base bobj;//Not Allowed
	//(contain Abstract Function so obj is not Created for Abstract Class)
	
	Dervied dobj;
	
	Base *bPtr=NULL;
	bPtr=&dobj;
	
	cout<<"Sizeof Base    :"<<sizeof(Base)<<"\n";
	cout<<"Sizeof Dervied :"<<sizeof(Dervied)<<"\n";
	
	bPtr->fun();//Inside Base fun
	bPtr->gun();//Inside Dervied gun
	bPtr->sun();//Inside Base sun
	bPtr->run();// Inside Dervied run
	
	
	return 0;
}