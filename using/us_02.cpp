#include <iostream>

class Base {
protected:
	void foo(int)
	{
		std::cout << "Base::foo(int)\n";
	}
};

class Der: public Base {
public:
	using Base::foo;
};

int main()
{
	Der myder;

	myder.foo(2);   //Base::foo(int)
}
