#include <typeinfo>
#include <iostream>

class Base {
public:
	virtual ~Base() = default;
	//...
};

class Der1 : public Base {
	//...
};

class Der2 : public Base {
	//...
};

int main()
{
	Base* p = new Der1;

	std::cout << std::boolalpha;
	std::cout << (typeid(*p) == typeid(Base)) << '\n';  //false
	std::cout << (typeid(*p) == typeid(Der1)) << '\n';  //true
	std::cout << (typeid(*p) == typeid(Der2)) << '\n';  //false

	delete p;
}
