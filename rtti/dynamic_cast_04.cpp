#include <iostream>

class Base {
public:
	virtual ~Base() = default;
	//...
};

class Foo : public Base {
public:
	void f()
	{
		std::cout << "Foo:f()\n";
	}
};

class Bar : public Base {
public:
	//...
};

void func(Base& baseref)
{
	auto& fooref = dynamic_cast<Foo&>(baseref);

	fooref.f();
}

int main()
{
	auto foo_ptr = new Foo;
	try {
		func(*foo_ptr);
	}
	catch (const std::bad_cast& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}

	delete foo_ptr;

	auto bar_ptr = new Bar;
	try {
		func(*bar_ptr);
	}
	catch (const std::bad_cast& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
	delete bar_ptr;
}
