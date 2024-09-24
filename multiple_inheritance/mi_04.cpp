#include <iostream>

class BaseX {
public:
	void foo(int)
	{
		std::cout << "BaseX::foo(int)\n";
	}
};

class BaseY {
public:
	void foo(double)
	{
		std::cout << "BaseY::foo(double)\n";
	}
};

class Der : public BaseX, public BaseY {
public:
	using BaseX::foo, BaseY::foo;
};

int main()
{
	Der myder;

	myder.foo(2);
	myder.foo(2.2);
}
