#include <iostream>

class Base {
public:
	Base()
	{
		std::cout << "Base default ctor\n";
	}
	~Base()
	{
		std::cout << "Base destructor\n";
	}
};

class Member {
public:
	Member()
	{
		std::cout << "Member default ctor\n";
	}

	~Member()
	{
		std::cout << "Member destructor\n";
	}
};

class Der : public Base {
	Member mx;
public:
	Der()
	{
		std::cout << "Der default ctor\n";
	}

	~Der()
	{
		std::cout << "Der destructor\n";

	}

};

int main()
{
	Der myder;
}
