



#include<iostream>
using namespace std;
//Bap
class Base  
{
	public:
	int i,j;
	
	Base()
	{
		cout<<"Inside Base Constructor\n";
	}
	~Base()
	{
		cout<<"Inside Base Destructor\n";
	}
	
};



class Dervied :public Base
{
	public:
	int a,b,c;
	Dervied()
	{
		cout<<"Inside Dervied Constructor\n";
	}
	~Dervied()
	{
		cout<<"Inside Dervied Destructor\n";
	}
	
};


int main()
{
	Dervied dobj;
	
	
	
	return 0;
}