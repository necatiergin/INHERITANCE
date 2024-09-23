#include <typeinfo>
#include <iostream>

//operand expression is in "unevaluated context"

int main()
{
	int x = 10;
	auto p = typeid(x++).name();
	std::cout << "x = " << x << '\n'; //10
	//...
}
