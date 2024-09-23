#include <iostream>

class Base {
public:
	Base()
	{
		std::cout << "Base default ctor\n";
	}

	Base(const Base&)
	{
		std::cout << "Base copy ctor\n";
	}
};

class Der : public Base {
public:
	Der() = default;
	Der(const Der&)
	{
		std::cout << "Der copy ctor\n";
	}
};


int main()
{
	Der dx;
	//Der dy = dx;
	//Der dy(dx)
	Der dy{ dx };
}
