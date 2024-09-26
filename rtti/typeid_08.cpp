#include <typeinfo>
#include <iostream>

class Base {
public:
	virtual ~Base(){};
	//...
};

class Der : public Base {
	//...
};

int main()
{
	Base* ptr = nullptr;

	try {
		const std::type_info& t = typeid(*ptr); 
	}
	catch (const std::bad_typeid& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
