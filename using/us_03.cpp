#include <iostream>

class Base {
public:
	void foo(int)
	{
		std::cout << "Base::foo(int)\n";
	}
};

class Der: public Base {
private:
	using Base::foo;
};


int main()
{
	Der myder;

	myder.foo(2);   //error - access control
}
