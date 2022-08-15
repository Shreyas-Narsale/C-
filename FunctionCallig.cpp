

#include<iostream>
using namespace std;
void call_Value(int no)
{
	no++;
}

void call_Address(int *p)
{
	(*p)++;
}

void call_Reference(int &ref)
{
	ref++;
}


int main()
{
	int a=10, b=10, c=10;
	
	//Call by Value
	call_Value(a);//call_Value(a)
	cout<<a<<"\n";
	
	//Call by Address
	call_Address(&b);//call_Address(&b)
	cout<<b<<"\n";
	
	//Call by Reference
	call_Reference(c);//call_Reference(c);
	cout<<c<<"\n";
	
	return 0;
}