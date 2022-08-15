



#include<iostream>
using namespace std;

float Area(float fRadius, float PI=3.14)
{
	float fAns=0.0;
	fAns=PI*fRadius*fRadius;
	return fAns;
}


int main()
{
	float fRet=0.0;
	
	fRet=Area(10.4, 7.2);
	cout<<"Area is:"<<fRet<<"\n";
	
	fRet=Area(10.4);
	cout<<"Area is:"<<fRet<<"\n";
	
	return 0;
}