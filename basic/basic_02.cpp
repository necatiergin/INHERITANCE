#include <iostream>

class Base {
	int a, b;
};

class A {
private:
	Base bx;
	int x, y;
};

class Der : public Base {
	int c, d;
};

int main()
{
	std::cout << "sizeof(Base) = " << sizeof(Base) << '\n';
	std::cout << "sizeof(Der) = " << sizeof(Der) << '\n';
	std::cout << "sizeof(A) = " << sizeof(A) << '\n';
}
