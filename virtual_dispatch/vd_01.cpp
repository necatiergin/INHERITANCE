class Base {
public:
	virtual void foo(long);
	virtual void bar(long);
};


class Der : public Base {
public:
	void foo(int); //valid but not overriding
	void bar(int)override; //invalid
};

