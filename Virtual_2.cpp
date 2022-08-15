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
	
	Base *bPtr=new Base();//No Casting
	Dervied *dPtr=new Dervied();//No Casting
	
	
	Base *bPtr1=new Dervied();//UpCasting
	//Dervied *dp1=new Base();//DownCasting
	//DownCasting is not Allowed
	
	return 0;
}