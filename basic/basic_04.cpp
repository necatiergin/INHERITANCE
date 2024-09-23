class Base {
public:
	void func(int) {}
};

class Der : public Base {
public:
	void func() {}
};

int main()
{
	Der myder;

	myder.func(); //valid
	//myder.func(10); //invalid (name hiding)
	myder.Base::func(10); //valid
}
