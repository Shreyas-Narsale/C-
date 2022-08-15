#include<iostream>
using namespace std;
//Reference  to Array
int main()
{
	int Arr[4]={10,20,30,40};
	
	int (&Brr)[4] = Arr;
	cout<<"Brr[3]:"<<Brr[3];//40
	
	return 0;
}