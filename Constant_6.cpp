
#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;
		//for Hardcoded j
		Demo(): j(20) //Member Inilization
		{
			i=10;
			
		}
		
		//for User j
		Demo (int a, int b): j(b)// step1 -ethe pahilay j madhe 11 assign hoil
		{
			b++;//step 2- ata b++ hoil . now b is 12
			//mahnje b++ cha j var effect hot nahi still j is 11
			//mhanjech j adhi assign hoto constructor cha adhi
			i=a;
		}
};y

int main()
{
	Demo dobj(10,11);
	cout<<"i :"<<dobj.i<<"\n";//10
	cout<<"j :"<<dobj.j<<"\n";//11
	//dobj.j++;//Constant Variable can not change

	
	
	return 0;
}