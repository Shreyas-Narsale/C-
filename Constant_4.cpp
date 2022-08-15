
#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;
		
		Demo()
		{
			i=10;
			j=20;//cannot assign to connstant variable
		}
};

int main()
{
	Demo dobj;
	
	return 0;
}