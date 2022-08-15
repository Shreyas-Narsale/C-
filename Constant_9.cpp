
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
			i++;
			//j++;//Not Allowed j is constant
		}
		
		void gun(int a, const int b) const
		{
			int x=10;
			const int y=11;
			
			cout<<"Inside Gun\n";
			//i++;//Not Allowed gun is constant
			//Inside const function we cannot chnage any (const / non-const)charaterstics
			j++;//Not Allowed j is constant
			
			x++;//Allowed 
			//y++;// Not Allowed , y is Constant
			
			a++;//Allowed
			//b++;//Not Allowed
		}
};

int main()
{
	Demo dobj(10,11);
	
	
	return 0;
}