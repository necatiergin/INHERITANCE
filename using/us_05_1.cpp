#include <iostream>

class Base {
public:
	Base(int, int)
	{
		std::cout << "Base(int, int)\n";
	}

	Base(double)
	{
		std::cout << "Base(double)\n";
	}
};

class Der: public Base {
public:
	Der(int x, int y) : Base(x, y) {}
	Der(double d) : Base(d) {}
	//...
};

int main()
{
	Der d1(1, 2);
	Der d2(3.4);
}
