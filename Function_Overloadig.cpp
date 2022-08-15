



#include<iostream>
using namespace std;

class Demo
{
public:
	//Addition@2ii-name Mangalling done by compiler
	int Addition(int iNo1, int iNo2)//1000
	{
		int iAns=0;
		iAns=iNo1+iNo2;
		return iAns;
	}
	
	//Addition@3iii
	int Addition(int iNo1, int iNo2, int iNo3)//2000
	{
		int iAns=0;
		iAns=iNo1+iNo2+iNo3;
		return iAns;
	}
	
	//Addition@4iiii
	int Addition(int iNo1, int iNo2,int iNo3, int iNo4)//3000
	{
		int iAns=0;
		iAns=iNo1+iNo2+iNo3+iNo4;
		return iAns;
	}
};

int main()
{
	Demo obj;
	int iRet=0;
	
	
	//Assembly Code
	
	//PUSH 10    
	//PUSH 11
	//CALL 1000
	iRet=obj.Addition(10,11);//obj.Addition@2ii(10,11)
	cout<<"Addition is:"<<iRet<<"\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 21
	//CALL 2000
	iRet=obj.Addition(10,11,21);//obj.Addition@3iii(10,11,21)
	cout<<"Addition is:"<<iRet<<"\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 21
	//PUSH 51
	//CALL 3000
	iRet=obj.Addition(10,11,21,51);//obj.Addition@4iiii(10,11,21,51)
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}
