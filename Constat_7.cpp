
#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;
		
		//we can also inilize non constant variable by this way
		Demo (int a, int b): i(a),j(b)
		{
		}
};

int main()
{
	Demo dobj(10,11);
	cout<<"i :"<<dobj.i<<"\n";
	cout<<"j :"<<dobj.j<<"\n";

	
	
	return 0;
}