#include <iostream>
#include <typeinfo>

class Base {
public:
	//virtual ~Base() {}
	//compile also with virtual destructor
};


class Der : public Base {
	//...
};


int main()
{
	Der der;
	Base* ptr{ &der };

	std::cout << std::boolalpha << (typeid(*ptr) == typeid(Der)) << '\n';
}
