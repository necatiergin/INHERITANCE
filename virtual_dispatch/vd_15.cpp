// covariance (variant return type)

class B { };
class D : public B {};

class Base {
public:
	virtual B* foo();
	virtual B& bar();
	virtual B baz();
};

class Der : public Base {
public:
	D* foo()override;	// valid - covariant
	D& bar()override;	// valid - covariant
	//D baz()override;	// invalid - not covariant
};
