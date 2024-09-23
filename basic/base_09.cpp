#include <iostream>

class Base {
public:
	Base() = default;

	Base(const Base&)
	{
		std::cout << "Base copy ctor\n";
	}
};

class Der : public Base {
};


int main()
{
	Der dx;
	//Der dy = dx;
	//Der dy(dx)
	Der dy{ dx };
}
