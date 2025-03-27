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

class Der : public Base {
public:
	using Base::Base;
	//...
};

int main()
{
	Der d1(1, 2);
	Der d2(3.4);
}
