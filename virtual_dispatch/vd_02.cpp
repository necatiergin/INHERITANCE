class Base {
public:
	void foo(int);
	virtual void bar(int)const;
};

class Der : public Base {
public:
	//void foo(int)override; //invalid
	//void bar(int)override; //invalid
};
