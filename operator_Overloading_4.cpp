
using namespace std;

#include<iostream>

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int i=20, int j=20)
	{
		x=i;
		y=j;
	}

};

Demo operator + (Demo op1, Demo op2)
{
	return Demo(op1.x+ op2.x,op1.y+ op2.y);
}

Demo operator + (Demo op1)//Uinary postive sign
{
	return (op1);
}

Demo operator - (Demo op1)//Uinary Ngeative sign
{
	return (-op1.x,-op1.y);
	//return -op;why not like this
	//ethe jar -op vaparaly aste tar te parat 30 la call karal na ki Demo class la
}	

int main()
{
	Demo obj1(11,-21);
	Demo obj2(51,101);
	Demo robj(0,0);
	
	robj=+obj1;//+(obj1)
	cout<<"x is:"<<robj.x<<"\n";
	cout<<"y is:"<<robj.y<<"\n";
	
	robj=-obj2;//-(obj2)
	cout<<"x is:"<<robj.x<<"\n";
	cout<<"y is:"<<robj.y<<"\n";
	
	return 0;
}