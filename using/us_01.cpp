#include <iostream>

class Base {
public:
	void foo(int)
	{
		std::cout << "Base::foo(int)\n";
	}

	void foo(long)
	{
		std::cout << "Base::foo(long)\n";
	}
};


class Der: public Base {
public:
	using Base::foo;

	void foo(double)
	{
		std::cout << "Der::foo(double)\n";
	}
};


int main()
{
	Der myder;

	myder.foo(2.2); //Der::foo(double)
	myder.foo(2);   //Base::foo(int)
	myder.foo(2L);   //Base::foo(long)
}
