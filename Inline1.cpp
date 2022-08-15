
#include<iostream>
using namespace std;
 
class Demo
{
	public:
	
	//not used inline keyword still it may be inline Function
	int Add(int no1, int no2)//may be inline Function if it has less memory
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
	int Sub(int no1, int no2);//Sub is not inline , beacause function is not 
	//defined here

};

int Demo :: Sub(int no1, int no2)
{
	int ans=0;
	ans=no1-no2;
	return ans;
}

int main()
{
	
	Demo obj;
	
	int ret=0;
	
	ret=obj.Add(10,11);
	
	cout<<"ret is:"<<ret<<"\n";
	
	return 0;
}