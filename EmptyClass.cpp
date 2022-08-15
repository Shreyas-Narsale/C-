
#include<iostream>
using namespace std;
 
class Demo
{
	public:
	
	int Add(int no1, int no2)
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}

};

int main()
{
	
	Demo obj;
	
	cout<<"size of Demo :"<<sizeof(Demo)<<"\n";//1 
	//Memory of Empty class is 1
	
	int ret=0;
	
	ret=obj.Add(10,11);
	
	cout<<"ret is:"<<ret<<"\n";
	
	return 0;
}