class Base {
public:
	void func() {}
};

class Der : public Base {
	void func() {}
public:
};

int main()
{
	Der myder;

	//myder.func(); //invalid (access control)
	myder.Base::func(); //valid
}
