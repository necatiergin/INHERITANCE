#include <iostream>

struct A {
	virtual ~A() = default;
};

struct B : A {};

struct C : A {};

A* foo(int x)
{
	if (x % 2 == 0) {
		B* bp = new B;
		std::cout << "B created address is : " << bp << '\n';
		return bp;
	}
	C* cp = new C;
	std::cout << "C created address is : " << cp << '\n';
	return cp;
}


int main()
{
	A* ap1 = foo(4);
	void* vp1 = dynamic_cast<void*>(ap1);
	std::cout << "vp1 = " << vp1 << '\n';

	A* ap2 = foo(3);
	void* vp2 = dynamic_cast<void*>(ap2);
	std::cout << "vp2 = " << vp2 << '\n';
}
