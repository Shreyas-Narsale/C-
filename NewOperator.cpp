
//Dynamic Memory New
#include<iostream>
using namespace std;

int main()
{
	int iLength=0;
	cout<<"Enter Length:";
	cin>>iLength;
	int Arr[10];//static
	int *p=NULL;
	
	//p=(int *)malloc(sizeof(int)*10);//Dynamic C
	p=new int[iLength];
	if(p==NULL)
	{
		cout<<"Unable to allocate memmory";
	}
	else
	{
		cout<<"memmory is allocated sucessfully at address:"<<p<<"\n";// address is hexadecimal
	}
	//free(p)
	delete []p;//deallocate memory for array 
	
	return 0;
}