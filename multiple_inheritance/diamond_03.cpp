#include <iostream>

class Base {
public:
};

class DerX : public Base {

};

class DerY : public Base {

};

class MDer : public DerX, public DerY {

};

int main()
{
	MDer md;
	Base* bp1 = static_cast<DerX*>(&md);
	Base* bp2 = static_cast<DerY*>(&md);
	
	boolalpha(std::cout);

	std::cout << (bp1 == bp2) << '\n';
}
