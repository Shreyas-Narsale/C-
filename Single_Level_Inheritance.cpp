



#include<iostream>
using namespace std;
//Bap
class Base  
{
	public:
	int x,y;
	
	Base()
	{
		cout<<"Inside Base Constructor\n";
	}
	~Base()
	{
		cout<<"Inside Base Destructor\n";
	}
	void fun()
	{
		cout<<"Inside Base fun\n";
	}
};


//Porgay
class Dervied :public Base//Dervied is a class which is Dervied from parent class Base
{
	public:
	int i,j;
	Dervied()
	{
		cout<<"Inside Dervied Constructor\n";
	}
	~Dervied()
	{
		cout<<"Inside Dervied Destructor\n";
	}
	void gun()
	{
		cout<<"Inside Dervied gun\n";
	}
};


int main()
{
	Dervied dobj;
	
	cout<<"Sizeof Base:"<<sizeof(Base)<<"\n";//8 
	cout<<"Sizeof Dervied:"<<sizeof(Dervied)<<"\n";//
	dobj.fun();
	dobj.gun();
	
	
	return 0;
}