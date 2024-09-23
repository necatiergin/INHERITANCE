#include <iostream>

class Empty {
public:
	void ef1();
	void ef2();
	// class Empty has no non-static data members
};

class Nec1 {
public:
private:
	int m_ival;
	Empty m_e;
};

class Nec2 : private Empty {
public:
private:
	Empty m_e;
};

int main()
{
	std::cout << "sizeof(Empty) = " << sizeof(Empty) << '\n';
	std::cout << "sizeof(Nec1) = " << sizeof(Nec1) << '\n';
	std::cout << "sizeof(Nec2) = " << sizeof(Nec2) << '\n';
}
