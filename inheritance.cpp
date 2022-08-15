



#include<iostream>
using namespace std;

class A
{
	public:
	int i;
	
	private:
	int j;
	
	protected:
	int k;
	
	public:
	A()
	{
		i=10;
		j=20;
		k=30;
	}
	
};



class B :public A
{
	public:
	int x;
	
	private:
	int y;
	
	protected:
	int z;
	
	public:
	B()
	{
		x=40;
		y=50;
		z=60;
	}
	
	
};

class C :protected B
{
	public:
	int m;
	
	private:
	int n;
	
	protected:
	int o;
	
	public:
	C()
	{
		m=70;
		n=80;
		o=90;
	}
	
	
};


int main()
{
	C cobj;
	//cout<<cobj.i;//Error-> Not Accessible Beacause we use Proteced B
	//so A public goes to protected B so it is only Accessible for C Not in Main
	
	B bobj;
	cout<<"bobj.i:"<<bobj.i<<"\n";
	
	A aobj;
	cout<<"aobj.i:"<<aobj.i<<"\n";
	
	return 0;
}