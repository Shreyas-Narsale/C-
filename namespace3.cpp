

#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside fun";
	}
}
namespace Infosystems
{
	void fun()
	{
		std::cout<<"Inside fun";
	}
}

int main()
{
	std::cout<<"jay Ganesh\n";
	
	using namespace Marvellous;
	using namespace Infosystems;
	//fun();//Error beacause Compiler dont know kontya fun la call karayache
	
	// so this way
	Infosystems::fun();
	Marvellous::fun();
	return 0;
}