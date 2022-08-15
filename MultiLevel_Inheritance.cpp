



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

class Dervied_1 :public Dervied
{
	public:
	int k,l;
	Dervied_1()
	{
		cout<<"Inside Dervied_1 Constructor\n";
	}
	~Dervied_1()
	{
		cout<<"Inside Dervied_1 Destructor\n";
	}
	
};


int main()
{
	Dervied_1 dobj;
	
	
	
	return 0;
}