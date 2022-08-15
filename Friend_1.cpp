
#include<iostream>
using namespace std;
//naked Function can be friend
class Demo
{
	public:
	int i;
	
	protected:
	int j;
	
	private:
	int k;
	
	public:
		Demo()
		{
			i=10;
			j=20;
			k=30;
		}
		
	friend void fun();//friend decalaration
};


void fun()
{
	Demo obj1;
	cout<<"i :"<<obj1.i<<"\n";
	cout<<"j :"<<obj1.j<<"\n";
	cout<<"k :"<<obj1.k<<"\n";
	
}
int main()
{
	fun();
	
	
	return 0;
}