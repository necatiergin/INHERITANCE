#include <iostream>


class Base {
public:
	virtual ~Base() {}
	virtual void foo() = 0;
	virtual void bar() = 0;
};

class Der1 : public virtual Base {
public:
	virtual void foo() override
	{
		std::cout << "Der1::foo()\n";
		bar();
	}
};

class Der2 : public virtual Base {
public:
	virtual void bar() override
	{
		std::cout << "Der2::bar()\n";
	}
};

class MDer : public Der1, public Der2 {
public:
	// ...
};


int main()
{
	MDer* p = new MDer();
	p->foo();
	//...
	delete p;
}
