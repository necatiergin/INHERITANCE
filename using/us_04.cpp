#include <iostream>

class Base {
public:
	void foo(int)
	{
		std::cout << "Base::foo(int)\n";
	}
	//...
};

class Der: public Base {
public:
	using Base::foo;

	void foo(int)
	{
		std::cout << "Der::foo(int)\n";
	}
};


int main()
{
	Der myder;

	myder.foo(2);   //Der::foo(int)
	myder.Base::foo(2);   //Base::foo(int)
}
