#include <iostream>

class Base {
public:
	virtual ~Base() = default;
	//
};

class Foo : public Base {
public:
	void f()
	{
		std::cout << "Foo::f()\n";
	}
	//...
};

class Bar : public Base {
public:
	void b()
	{
		std::cout << "Bar::b()\n";
	}
	//...
};

void func(Base* p)
{
	if (Foo* fptr = dynamic_cast<Foo*>(p)) {
		fptr->f();
	}
	else if (Bar* bptr = dynamic_cast<Bar*>(p)) {
		bptr->b();
	}
}

int main()
{
	auto foo_ptr = new Foo;
	auto bar_ptr = new Bar;

	func(foo_ptr);
	func(bar_ptr);

	delete foo_ptr;
	delete bar_ptr;
}
