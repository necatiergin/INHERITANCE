class Base {
public:
	void func(int) {}
};

class Der : public Base {
public:
	void func()
	{
		func(); //valid - recursive call
		//func(10); //invalid
		Base::func(10); //valid
	}
};
