#include <iostream>

class Base {
public:
	~Base()
	{
		std::cout << "Base destructor\n";
	}
};

class Der : public Base {
	//...
public:
	~Der()
	{
		std::cout << "Der destructor\n";
	}
};


int main()
{
	Base* baseptr = new Der;

	delete baseptr;  //undefined behavior
}
