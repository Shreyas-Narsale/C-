



#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	
	private:
	int j;
	
	protected:
	int k;
	
	public:
	Demo()
	{
		i=10;
		j=20;
		k=30;
	}
	
};



class Hello :public Demo
{
	public:
	int x;
	
	private:
	int y;
	
	protected:
	int z;
	
	public:
	Hello()
	{
		x=40;
		y=50;
		z=60;
	}
	void fun()
	{
		cout<<"Inside Fun in Hello\n";
		cout<<"hobj.k:"<<k<<"\n";//Allowed
	}
	
};


int main()
{
	Demo dobj;//12 size
	cout<<"dobj.i:"<<dobj.i<<"\n";//Allowed
	//cout<<"dobj.j:"<<dobj.j<<"\n";//Not Allowed
	//cout<<"dobj.k:"<<dobj.k<<"\n";//Not Allowed
	
	Hello hobj;//24 size
	cout<<"hobj.x:"<<hobj.x<<"\n";//Allowed
	//cout<<"hobj.y:"<<hobj.y<<"\n";//Not Allowed
	//cout<<"hobj.z:"<<hobj.z<<"\n";//Not Allowed
	
	cout<<"hobj.i:"<<hobj.i<<"\n";// Allowed
	//cout<<"hobj.j:"<<hobj.j<<"\n";//Not Allowed
	//cout<<"hobj.k:"<<hobj.k<<"\n";// Not Allowed
	// This hobj.k is Accessible in Hello not in Main
	
	hobj.fun();
	return 0;
}