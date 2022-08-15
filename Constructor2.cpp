

#include<iostream>
using namespace std;


class Demo
{
public:
	int x;//Characterstics
	int y;//Characterstics
	
	Demo()//Deafult Constructor
	{
		cout<<"Inside Deafult Constructor\n";
		x=0;
		y=0;
	}
	Demo(int i, int j)//Parametersied Constructor
	{
		x=i;
		y=j;
		cout<<"Inside Parametersied Constructor\n";
	}
	Demo(Demo &ref)//Copy Constructor
	{
		cout<<"Inside Copy Constructor\n";
		x=ref.x;
		y=ref.y;
	}
	~Demo()//Destructor
	{
		cout<<"Inside Destructor\n";
	}
};
	
	
int main()
{
	Demo mobj1(11,21);
	
	Demo mobj2(mobj1);//call to copy constructor
	return 0;
}

//& reference Operator