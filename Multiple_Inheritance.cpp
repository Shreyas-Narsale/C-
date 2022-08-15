



#include<iostream>
using namespace std;

class Base_1
{
	public:
	int i,j;
	
	Base_1()
	{
		cout<<"Inside Base_1 Constructor\n";
	}
	~Base_1()
	{
		cout<<"Inside Base_1 Destructor\n";
	}
	
};



class Base_2
{
	public:
	int i,j;
	
	Base_2()
	{
		cout<<"Inside Base_2 Constructor\n";
	}
	~Base_2()
	{
		cout<<"Inside Base_2 Destructor\n";
	}
	
};

class Dervied :public Base_2,Base_1
{
	public:
	int k,l;
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