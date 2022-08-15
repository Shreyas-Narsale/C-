#include<iostream>
using namespace std;
//DrawBack 
class Base
{
	public:
		int x,y;
	
	void fun()
	{
		cout<<"Inside Base fun\n";
	}
	void gun()
	{
		cout<<"Inside Base gun\n";
	}
	
	
	
};

class Dervied: public Base
{
	public:
		int i,j;
	void sun()
	{
		cout<<"Inside Dervied sun\n";
	}	
	void fun()
	{
		cout<<"Inside Dervied fun\n";
	}
	
};

int main()
{
	Base *bPtr=new Dervied();//UpCasting
	
	bPtr->fun();//Inside Base fun
	bPtr->gun();//Inside Base gun
	//bPtr->sun();//Error
	
	cout<<"Size of Base:"<<sizeof(Base)<<"\n";//8
	cout<<"Size of Dervied:"<<sizeof(Dervied)<<"\n";//16
	
	return 0;
}