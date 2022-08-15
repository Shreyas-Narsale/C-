
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
Demo operator--(Demo &op)
{
	cout<<"inside First Fun";
	op.x--;
	op.y--;
	
	return op;
	
}

Demo operator++(Demo &op, int)//Add Dummy Argument for Post
{
	cout<<"inside Second Fun";
	op.x--;
	op.y--;
	return Demo(op.x-1,op.y-1);
}


int main()
{
	Demo obj1(10,20);
	Demo obj2(10,20);//remians 
	Demo robj(0,0);
	
	robj=++obj1;//pre increment //call to without dummy fun
	cout<<"obj x and y is:"<<obj1.x<<"\t"<<obj1.y<<"\n";// 11  21
	cout<<"robj x and y is:"<<robj.x<<"\t"<<robj.y<<"\n";// 11 21
	
	robj=obj2++;//post increment//call to with dummy fun
	cout<<"obj x and y is:"<<obj2.x<<"\t"<<obj2.y<<"\n";// 11  21
	cout<<"robj x and y is:"<<robj.x<<"\t"<<robj.y<<"\n";// 10 20
	
	return 0;
}