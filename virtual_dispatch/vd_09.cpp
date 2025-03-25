#include <iostream>


class Base {
public:
	//
	virtual ~Base()
	{
		std::cout << "Base destructor\n";
	}
};

class Der : public Base {
public:
	// ...
	~Der()
	{
		std::cout << "Der destructor\n";
	}
};

int main()
{
	std::cout << "main function started running\n";
	Base* baseptr = new Der;
	delete baseptr;
	std::cout << "main is still running\n";
}
