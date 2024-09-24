#include <iostream>

class BaseX {};
class BaseY {};

class Der: public BaseX, public BaseY{};

void foo(BaseX)
{
	std::cout << "foo(BaseX)\n";
}

void foo(BaseY)
{
	std::cout << "foo(BaseY)\n";
}

int main()
{
	Der myder;

	//foo(myder); //error - ambiguity
	foo(static_cast<BaseX>(myder));	 //foo(BaseX)
	foo(static_cast<BaseY>(myder));  //foo(BaseY)
}
