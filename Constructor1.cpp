

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
	}
	~Demo()//Destructor
	{
		cout<<"Inside Destructor\n";
	}
};
	
	
int main()
{
	Demo mobj1(11,21);
	Demo mobj2(51,101);
	cout<<"Sizeof mobj1:"<<sizeof(mobj1)<<"\n";//8
	cout<<"Sizeof mobj2:"<<sizeof(mobj2)<<"\n";//8
	
	cout<<"Value of in mobj1:"<<mobj1.x<<"\n";//11
	cout<<"Value of in mobj2:"<<mobj2.x<<"\n";//51
	
	mobj1.x++;// x = 12
	cout<<"Value of in mobj1:"<<mobj1.x<<"\n";//12
	cout<<"Value of in mobj2:"<<mobj2.x<<"\n";//51 //No Chnage in mobj2
	return 0;
}

//& reference Operator