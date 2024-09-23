//constructor içinde sanal fonksiyonlara yapılan çağrılar için virtual dispatch uygulanmaz. 


#include <iostream>

class Base {
public:
	Base()
	{
		vfunc(); //no virtual dispatch
	}

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

int main()
{
	Der myder;

}
