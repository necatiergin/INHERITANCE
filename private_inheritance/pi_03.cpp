class Base {
public:
	virtual void vfunc();
};

class Der : private Base{
public:
	void vfunc()override;
	friend void f1();

};

void foo(Base& baseref)
{
	baseref.vfunc();
}


void f1()
{
	Der der;
	foo(der);
}

void f2()
{
	Der der;
	foo(der); //gecersiz
}

void f3()
{
	Der der;
	foo(der); //gecersiz
}
