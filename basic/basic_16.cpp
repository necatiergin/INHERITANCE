//final override

class Base {
public:
	virtual void func();
	virtual ~Base() = default;
};

class Der : public Base {
	//...
public:
	void func() final override;
};

class NecDer : public Der {
public:
	virtual void func() override; //invalid
};
