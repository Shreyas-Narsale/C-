
#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;
		
		Demo (int a, int b):j(b)
		{
			i=a;
		}
		
		void fun()
		{
			cout<<"Inside Fun\n";
			i++;//Allowed
			//j++;//Not Allowed j is constant
		}
		
		void gun() const
		{
			
			cout<<"Inside Gun\n";
			//i++;//Not Allowed gun is constant
			//Inside const function we cannot chnage any (const / non-const)charaterstics
			//j++;//Not Allowed j is constant
			
		}
};

int main()
{
	Demo dobj(10,11);
	cout<<"i :"<<dobj.i<<"\n";
	cout<<"j :"<<dobj.j<<"\n";

	
	
	return 0;
}