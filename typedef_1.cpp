
#include<iostream>
using namespace std;
 


int main()
{
	struct Demo
	{
		int no1;
		int no2;
	};
	
	struct Demo obj;
	
	struct Demo *p=&obj;
	struct Demo **q=&p;
	
///////////////////////////////////////////////////////

	typedef struct Demo DEMO;
	typedef struct Demo * PDEMO;
	typedef struct Demo ** PPDEMO;
	
	DEMO obj1;
	PDEMO r=&obj1;
	PPDEMO s=&r;
	
///////////////////////////////////////////////////////
	
	
	typedef struct Hello
	{
		int no1;
		int no2;
	}HELLO, * PHELLO, ** PPHELLO;
	
	
	
	return 0;
}