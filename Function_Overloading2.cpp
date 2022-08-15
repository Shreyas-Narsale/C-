

//Allow this also

#include<iostream>
using namespace std;

class Demo
{
public:
	
	int Addition(int iValue, float fValue)
	{
		int iAns=0;
		iAns=iNo1+iNo2;
		return iAns;
	}
	
	int Addition(float fValue,int iValue)
	{
		int iAns=0;
		iAns=iNo1+iNo2+iNo3;
		return iAns;
	}
	
	
};

int main()
{
	Demo obj;
	int iRet=0;
	
	
	
	iRet=obj.Addition(10,11.5);
	cout<<"Addition is:"<<iRet<<"\n";
	
	
	iRet=obj.Addition(10.5,11);
	cout<<"Addition is:"<<iRet<<"\n";
	
	
	
	return 0;
}