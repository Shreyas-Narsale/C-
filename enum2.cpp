
//abstract namespace
#include<iostream>
using namespace std;

int main()
{
	enum Marvellous{ PPA = 0, LB=1, LSP=2, Python=3};
	const int Fees[]={15000,16000,17000,18000};
	const float Duration[]={3.5, 4.0, 3.5, 4.5};
	int choice=0;
	

	cout<<"Enter Your Batch\n";
	cout<<"0: PPA\n";
	cout<<"1: LB\n";
	cout<<"2: LSP\n";
	cout<<"3: Python\n";
	cin>>choice;
	
	switch (choice)
	{
		case PPA:
		cout<<"Duration is:"<<Duration[PPA]<<"\n";
		cout<<"Fees are:"<<Fees[PPA]<<"\n";
		break;
		
		case LB:
		cout<<"Duration is:"<<Duration[LB]<<"\n";
		cout<<"Fees are:"<<Fees[LB]<<"\n";
		break;
		
		case LSP:
		cout<<"Duration is:"<<Duration[LSP]<<"\n";
		cout<<"Fees are:"<<Fees[LSP]<<"\n";
		break;
		
		case Python:
		cout<<"Duration is:"<<Duration[Python]<<"\n";
		cout<<"Fees are:"<<Fees[Python]<<"\n";
		break;
		
		default:
		cout<<"There is no such Batch\n";
	}
	
	
	return 0;
}