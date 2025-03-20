#include <iostream>

class Base {
public:
	virtual void vfunc()
	{
		std::cout << "Base::vfunc()\n";
	}
};


class Der: public Base {
public:
	virtual void vfunc() override
	{
		std::cout << "Der::vfunc()\n";
	}
};

void g(Base base)
{
	base.vfunc();  //no virtual dispatch - object slicing
}

int main()
{
	Der myder;

	g(myder);

}
