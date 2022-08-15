
#include<iostream>
using namespace std;
 
#define MAX 10 // Macro

int main()
{
	typedef int NUMBER;//typedef
	NUMBER no=10;
	cout<<sizeof(no)<<"\n";
	cout<<(no)<<"\n";
	
	typedef char letter;//typedef
	letter ch='M';
	cout<<sizeof(ch)<<"\n";
	cout<<(ch)<<"\n";
	
	typedef const int * CPTR;
	//const int *p=NULL;
	CPTR p=&no;
	p=&no;
	
	cout<<(*p)<<"\n";
	
	return 0;
}