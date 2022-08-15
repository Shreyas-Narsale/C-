

//Allow this also

#include<iostream>
using namespace std;

class Demo
{
public:
	
	int Addition(int iNo1, int iNo2)
	{
		int iAns=0;
		iAns=iNo1+iNo2;
		return iAns;
	}
	
	int Addition(float fNo1, float fNo2)
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
	
	
	
	iRet=obj.Addition(10,11);
	cout<<"Addition is:"<<iRet<<"\n";
	
	
	iRet=obj.Addition(10.5,11.5);
	cout<<"Addition is:"<<iRet<<"\n";
	
	
	
	return 0;
}