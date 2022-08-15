#include<iostream>
using namespace std;
// Pointer to Reference 
int main()
{
	int no=11;
	
	int *p=&no;
	
	int *(&q)=p;
	
	cout<<"*q :"<<*q;
	
	return 0;
}